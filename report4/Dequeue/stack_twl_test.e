note
	description: "Test cases for STACK_TWL"
	author: "Gunnar Gotshalks"

class STACK_TWL_TEST
  inherit ES_TEST

create make

--------------------------------------------------------------------------------
feature -- Creation

make
  do
    add_boolean_case(agent proper_name_stack)
    add_boolean_case(agent initial_is_empty)
    add_boolean_case(agent put_1_item)
    add_boolean_case(agent put_1_count)
    add_boolean_case(agent put_3_items)
    add_boolean_case(agent put_3_count)
    add_boolean_case(agent put_correct_sequence)
  end

--------------------------------------------------------------------------------
feature -- Tests

proper_name_stack : BOOLEAN
  local s : TWO_WAY_LIST[STRING]
  do
    comment("Stack is properly named")
    create stack_twl.make
    s := stack_twl.stack
    Result := True
  end

initial_is_empty : BOOLEAN
  do
    comment("Initial stack is empty")
    create stack_twl.make
    Result := stack_twl.is_empty and stack_twl.count = 0
  end

put_1_item : BOOLEAN
  local str : STRING
  do
    comment("Put one item is the top")
    create stack_twl.make
    create str.make_from_string ("abc")
    stack_twl.put (str)
    Result := str.is_equal (stack_twl.item)
  end

put_1_count : BOOLEAN
  local str : STRING
  do
    comment("Put one item is the top")
    create stack_twl.make
    create str.make_from_string ("abc")
    stack_twl.put (str)
    Result := stack_twl.count = 1
    stack_twl.remove
    Result := Result and stack_twl.is_empty
  end

put_3_items : BOOLEAN
  local str : STRING
  do
    comment("Put and remove three items")
    create stack_twl.make
    create str.make_from_string ("abc")
    stack_twl.put (str)
    str.make_from_string ("def")
    stack_twl.put (str)
    str.make_from_string ("ghi")
    stack_twl.put (str)
    Result := stack_twl.item.is_equal ("ghi")
    stack_twl.remove
    Result := Result and stack_twl.item.is_equal ("def")
    stack_twl.remove
    Result := Result and stack_twl.item.is_equal ("abc")
  end

put_3_count : BOOLEAN
  local str : STRING
  do
    comment("Put and remove three items proper count")
    create stack_twl.make
    create str.make_from_string ("abc")
    stack_twl.put (str)
    str.make_from_string ("def")
    stack_twl.put (str)
    str.make_from_string ("ghi")
    stack_twl.put (str)
    Result := stack_twl.count = 3
    stack_twl.remove
    Result := Result and  stack_twl.count = 2 and not stack_twl.is_empty
    stack_twl.remove
    Result := Result and  stack_twl.count = 1 and not stack_twl.is_empty
    stack_twl.remove
    Result := Result and stack_twl.is_empty
  end

put_correct_sequence : BOOLEAN
  local
    str : STRING
    first_item : STRING
    last_item : STRING
  do
    comment("Put makes correct sequence")
    create stack_twl.make
    create str.make_from_string ("abc")
    stack_twl.put (str)
    str.make_from_string ("def")
    stack_twl.put (str)
    str.make_from_string ("ghi")
    stack_twl.put (str)
    stack_twl.stack.start
    first_item := stack_twl.stack.item
    stack_twl.stack.finish
    last_item := stack_twl.stack.item
    Result := first_item.is_equal("abc") and last_item.is_equal("ghi")
  end
--------------------------------------------------------------------------------
feature -- Globals

stack_twl : STACK_TWL[STRING]

end
