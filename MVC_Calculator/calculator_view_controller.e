note
  description: "Objects that control and are delegates for calculator views."
  author: "G.J. Gotshalks"
  date: "2013 January 7"
  revision: "V1.0"

class CALCULATOR_VIEW_CONTROLLER
  inherit ANY
          redefine default_create end

--------------------------------------------------------------------------------
feature -- Segue

graphPressed
    -- Replace current window with a graph window.  It should be a different
    -- view controller
  local
    graphVC: FUNCTION_GRAPH_VC
  do
    create graphVC.make(verticalBox, Current, Current)
    graphVC.load_view
  end

returnFromGraphVC
  do
    verticalBox.wipe_out
    makeCalculatorPadView
  end
--------------------------------------------------------------------------------
feature -- Objects

-- Widget containing the calculator view.

widget: EV_WIDGET
verticalBox: EV_VERTICAL_BOX

font_const: EV_FONT_CONSTANTS
labelFunction: EV_TEXT
labelValue:EV_LABEL
horizontalBox: EV_HORIZONTAL_BOX
button: EV_BUTTON
userIsInTheMiddleOfEnteringANumber: BOOLEAN
fontToUse: EV_FONT

calculator: CALCULATOR

--------------------------------------------------------------------------------
feature -- Constants

point_size_18: INTEGER = 18
initCalculationMsg: STRING = "Start new calculation"
math_const: MATH_CONST
piString: STRING

--------------------------------------------------------------------------------
feature {NONE} -- Creation

default_create
    -- Create the view.
  do
  	create font_const
  	create math_const
  	piString := math_const.pi.truncated_to_real.out
  	create fontToUse.make_with_values (font_const.Family_typewriter,
                                       font_const.weight_bold,
                                       font_const.shape_regular,
                                       point_size_18)
    create verticalBox
    makeCalculatorPadView
    widget := verticalBox
    create calculator.make
  end

makeCalculatorPadView
  local
    dummyLabel: EV_LABEL
    number_color: EV_COLOR
    operator_color: EV_COLOR
    control_color: EV_COLOR
    segue_color: EV_COLOR
  do
  	create number_color.make_with_rgb (1,1,0)
  	create operator_color.make_with_rgb (0,1,1)
  	create control_color.make_with_rgb (1,0,1)
  	create segue_color.make_with_rgb (1, 1, 1)

    if labelFunction = void then
      create labelFunction.make_with_text (initCalculationMsg)
        labelFunction.set_font (fontToUse)
        labelFunction.set_minimum_height (60)
    end
      verticalBox.extend (labelFunction)

    if labelValue = void then
      create labelValue.make_with_text ("0")
        labelValue.set_background_color (create {EV_COLOR}.make_with_rgb(1,1,0))
        labelValue.align_text_right
    end
        addLabelToBox(labelValue, verticalBox)

    create dummyLabel
    verticalBox.extend (dummyLabel)

    create horizontalBox
    create button.make_with_text_and_action ("Clear", agent clearPressed)
      button.set_background_color (control_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("Undo", agent undoPressed)
       button.set_background_color (control_color)
     addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("Graph", agent graphPressed)
      button.set_background_color (segue_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("/", agent dividePressed)
      button.set_minimum_width (71)
      button.set_background_color (operator_color)
      addButtonToBox(button, horizontalBox)
    verticalBox.extend (horizontalBox)

    create horizontalBox
    create button.make_with_text_and_action ("7", agent sevenPressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("8", agent eightPressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("9", agent ninePressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("*", agent multiplicationPressed)
       button.set_background_color (operator_color)
     addButtonToBox(button, horizontalBox)
    verticalBox.extend (horizontalBox)

    create horizontalBox
    create button.make_with_text_and_action ("4", agent fourPressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("5", agent fivePressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("6", agent sixPressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("-", agent minusPressed)
      button.set_background_color (operator_color)
      addButtonToBox(button, horizontalBox)
    verticalBox.extend (horizontalBox)

    create horizontalBox
    create button.make_with_text_and_action ("1", agent onePressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("2", agent twoPressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("3", agent threePressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("+", agent plusPressed)
      button.set_background_color (operator_color)
      addButtonToBox(button, horizontalBox)
    verticalBox.extend (horizontalBox)

    create horizontalBox
    create button.make_with_text_and_action ("0", agent zeroPressed)
      button.set_background_color (number_color)
      button.set_minimum_width (52)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("+/-", agent changeSignPressed)
      button.set_background_color (control_color)
      button.set_background_color (control_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action (".", agent periodPressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("Enter", agent enterPressed)
      button.set_background_color (control_color)
      addButtonToBox(button, horizontalBox)
    verticalBox.extend (horizontalBox)

    create horizontalBox
    create button.make_with_text_and_action ("sqrt", agent sqrtPressed)
      button.set_background_color (operator_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("sin", agent sinPressed)
      button.set_background_color (operator_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action ("cos", agent cosPressed)
      button.set_background_color (operator_color)
      addButtonToBox(button, horizontalBox)
    create button.make_with_text_and_action (" Pi ", agent piPressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    verticalBox.extend (horizontalBox)

    create horizontalBox
    create button.make_with_text_and_action ("x", agent xPressed)
      button.set_background_color (number_color)
      addButtonToBox(button, horizontalBox)
    create dummyLabel
        dummyLabel.set_minimum_width (200)
        horizontalBox.extend (dummyLabel)
    verticalBox.extend (horizontalBox)

    create dummyLabel
      dummyLabel.set_minimum_height (40)
    verticalBox.extend (dummyLabel)
  end

--------------------------------------------------------------------------------
feature {NONE} -- Actions

enterPressed
  do
    removePotentialEqualSign
    if userIsInTheMiddleOfEnteringANumber then
      calculator.pushOperand(labelValue.text)
      userIsInTheMiddleOfEnteringANumber := False
    elseif labelValue.text.is_equal ("x")
        or labelValue.text.is_equal ("-x") then
      calculator.pushVariable(labelValue.text)
    else
      calculator.pushOperand(labelValue.text)
    end
    labelFunction.set_text (calculator.descriptionOfProgram)
  end

removePotentialEqualSign
  local
    functionTextEqualPosition: INTEGER
  do
    if labelFunction.text.is_equal (initCalculationMsg) then
      labelFunction.set_text ("")
    end
    if labelFunction.text.count > 0 then
      functionTextEqualPosition := labelFunction.text.count
      if labelFunction.text[functionTextEqualPosition].is_equal('=') then
        labelFunction.set_text (labelFunction.text.substring
                                  (1, functionTextEqualPosition-1))
      end
    end
  end

zeroPressed do digitPressed("0") end
onePressed do digitPressed("1") end
twoPressed do digitPressed("2") end
threePressed do digitPressed("3") end
fourPressed do digitPressed("4") end
fivePressed do digitPressed("5") end
sixPressed do digitPressed("6") end
sevenPressed do digitPressed("7") end
eightPressed do digitPressed("8") end
ninePressed do digitPressed("9") end
periodPressed do digitPressed (".") end

dividePressed do operationPressed("/") end
multiplicationPressed do operationPressed("*") end
minusPressed do operationPressed("-") end
plusPressed do operationPressed("+") end

changeSignPressed
  do
    if not labelValue.text.is_equal ("0") then
      if labelValue.text[1] = '-' then
      	labelValue.set_text (labelValue.text.substring (2, labelValue.text.count))
      	if labelValue.text.is_equal (piString) then
      	  calculator.undo
      	  calculator.pushoperand (piString)
      	  labelFunction.set_text (calculator.descriptionOfProgram)
      	end
      else
      	if labelValue.text.is_equal (piString) then
      	  calculator.undo
      	  calculator.pushOperand ("-" + piString)
      	  labelFunction.set_text (calculator.descriptionOfProgram)
      	end
        labelValue.set_text ("-" + labelValue.text)
      end
    end
  end

clearPressed
  do
    labelValue.set_text ("0")
    labelFunction.set_text (initCalculationMsg)
    userIsInTheMiddleOfEnteringANumber := False
    calculator.clear

  end

undoPressed
    -- Remove the last entered digit. If no digit remove the last operation
  local
    cd: STRING
  do
    if userIsInTheMiddleOfEnteringANumber then
      clearLastDigit
    else
      calculator.undo
      labelValue.set_text (calculator.runProgram.out)
      cd := calculator.descriptionOfProgram
      if cd.count = 0 then
        labelFunction.set_text (initCalculationMsg)
      else
        labelFunction.set_text (calculator.descriptionOfProgram + " =")
      end
    end
  end

clearLastDigit
  do
    if userIsInTheMiddleOfEnteringANumber then
      if labelValue.text.count > 1 then
        labelValue.set_text (labelValue.text.substring (1, labelValue.text.count-1))
      else
        labelValue.set_text ("0")
        userIsInTheMiddleOfEnteringANumber := False
      end
    end
  end

sqrtPressed do operationPressed("sqrt") end
sinPressed do operationPressed("sin") end
cosPressed do operationPressed("cos") end

piPressed
  do
    removePotentialEqualSign
    if   userIsInTheMiddleOfEnteringANumber
      or labelValue.text.is_equal("x")
      or labelValue.text.is_equal("-x") then enterPressed
    end
    labelValue.set_text (piString)
    enterPressed
    labelFunction.set_text (calculator.descriptionOfProgram + " =")
  end

xPressed
  do
    removePotentialEqualSign
    if userIsInTheMiddleOfEnteringANumber
      or labelValue.text.is_equal ("x") or labelValue.text.is_equal ("-x") then
      	enterPressed
    end
    labelFunction.set_text(calculator.descriptionofprogram)
    labelValue.set_text ("x")
  end

doNothing do  end

--------------------------------------------------------------------------------
feature -- Support

addLabelToBox(label: EV_LABEL; box: EV_BOX)
  do
    label.set_font (fontToUse)
    box.extend (label)
    box.disable_item_expand (label)
  end

addButtonToBox(label: EV_BUTTON; box: EV_BOX)
  do
    label.set_font (fontToUse)
    box.extend (label)
  end

digitPressed (digit: STRING)
    -- Append the digit to the displayed number value.
    -- In the view all values are kept as strings.
  do
    if userIsInTheMiddleOfEnteringANumber then
        labelValue.set_text (labelValue.text + digit)
    else
    	removePotentialEqualSign
      userIsInTheMiddleOfEnteringANumber := True
      if digit = "." then
        labelValue.set_text ("0.")
      else
        labelValue.set_text (digit)
      end
    end
  end

operationPressed (operation: STRING)
  do
    removePotentialEqualSign
    if   userIsInTheMiddleOfEnteringANumber
      or labelValue.text.is_equal("x")
      or labelValue.text.is_equal("-x") then enterPressed
    end
    labelValue.set_text (calculator.performOperation(operation).out)
    labelFunction.set_text (calculator.descriptionOfProgram + " =")
  end

--------------------------------------------------------------------------------
feature {FUNCTION_GRAPH_VC} -- Data Source

getYvalueForXvalue(xValue: REAL) : REAL
  do
    Result := calculator.runProgramWith(xValue)
  end

getFunctionDescription : STRING
  do
    Result := calculator.descriptionofprogram
  end
--------------------------------------------------------------------------------
feature {APPLICATION} -- Initialization

initialize
  do
  end

end
