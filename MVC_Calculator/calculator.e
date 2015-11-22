note
  description: "Objects that describe calculators"
  author: "G.J. Gotshalks"
  date: "2013 January 7"
  revision: "V1.0"

class CALCULATOR

create make

--------------------------------------------------------------------------------
feature {NONE} -- Constants

--------------------------------------------------------------------------------
feature -- Objects

program: ARRAYED_STACK[PROGRAM_ITEM]
doubleMath: DOUBLE_MATH
xValueToUse: REAL

--------------------------------------------------------------------------------
feature {NONE} -- Creation

make
    -- Create a calculator.
  do
    create program.make(100)
    create doubleMath
  end

--------------------------------------------------------------------------------
feature -- Operations

pushOperand(operand: STRING)
  do
    program.extend(create {NUMBER}.make(operand))
  end

pushVariable(variable: STRING)
  do
    program.extend(create {VARIABLE}.make(variable))
  end

performOperation(operation: STRING) : REAL
  do
    program.put(create {OPERATOR}.make(operation))
    Result := runProgram
  end

runProgram : REAL
  local
    ps: ARRAYED_STACK[PROGRAM_ITEM]
  do
    ps := program.twin
    Result := popOperandOffProgramStack(ps)
  end

runProgramWith(xValue: REAL) : REAL
  do
    xValueTOUse := xValue
    Result := runProgram
  end

popOperandOffProgramStack (ps : ARRAYED_STACK[PROGRAM_ITEM]) : REAL
  local
    topOfStack: PROGRAM_ITEM
  do
    if not ps.is_empty then
      topOfStack := ps.item
      ps.remove
      if attached {NUMBER} topOfStack as number then
        Result := number.value
      elseif attached {VARIABLE} topOfStack as variable then
      	if variable.text[1] = '-'  then Result := -xValueToUse
       														 else Result := xValueToUse
      	end
      elseif attached {OPERATOR} topOfStack as operator then
        if operator.text.is_equal("+") then
          Result := popOperandOffProgramStack(ps)
                  + popOperandOffProgramStack(ps)
        elseif operator.text.is_equal("*") then
          Result := popOperandOffProgramStack(ps)
                  * popOperandOffProgramStack(ps)
        elseif operator.text.is_equal("-") then
          Result := popOperandOffProgramStack(ps)
          Result := popOperandOffProgramStack(ps) - Result
        elseif operator.text.is_equal("/") then
          Result := popOperandOffProgramStack(ps)
          Result := popOperandOffProgramStack(ps) / Result
        elseif operator.text.is_equal("sin") then
          Result := doubleMath.sine(popOperandOffProgramStack(ps)).truncated_to_real
        elseif operator.text.is_equal("cos") then
          Result := doubleMath.cosine(popOperandOffProgramStack(ps)).truncated_to_real
        elseif operator.text.is_equal("sqrt") then
          Result := doubleMath.sqrt(popOperandOffProgramStack(ps)).truncated_to_real
        end
      end
    end
  end

descriptionOfProgram : STRING
  local
    ps: ARRAYED_STACK[PROGRAM_ITEM]
  do
  	if program.count = 0 then
  	  Result := ""
  	else
      ps := program.twin
      	-- First item is special to set initial value of Result
      if attached {NUMBER} ps.item as number then
        Result := number.text
      elseif attached {VARIABLE} ps.item as variable then
        Result := variable.text
      elseif attached {OPERATOR} ps.item as operator then
        Result := operator.text
      end
      ps.remove

      from     -- Can loop over the rest of the program items
      until ps.is_empty
      loop
      	if attached {NUMBER} ps.item as number then
        	Result := number.text + " " + Result
        elseif attached {VARIABLE} ps.item as variable then
          Result := variable.text + " " + Result
        elseif attached {OPERATOR} ps.item as operator then
          Result := operator.text + " " + Result
        end
    	  ps.remove
      end
  	end
  end

clear
    -- Reset to starting conditions
  do
    program.wipe_out
  end

undo
    -- Remove the last item from the program
  do
    if program.count > 0 then program.remove end
  end

end
