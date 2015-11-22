note
	description: "Test cases for QUEUE_TWL"
	author: "Gunnar Gotshalks"

class QUEUE_TWL_TEST
  inherit ES_TEST

create make

--------------------------------------------------------------------------------
feature -- Creation

make
  do
    add_boolean_case(agent proper_name_queue)
    add_boolean_case(agent initial_is_empty)
    add_boolean_case(agent put_1_item)
    add_boolean_case(agent put_1_count)
    add_boolean_case(agent put_3_items)
    add_boolean_case(agent put_3_count)
    add_boolean_case(agent alternate_put_remove)
    add_boolean_case(agent put_correct_sequence)
  end

--------------------------------------------------------------------------------
feature -- Tests

proper_name_queue : BOOLEAN
  local q : TWO_WAY_LIST[STRING]
  do
    comment("Queue is properly named")
    create queue_twl.make
    q := queue_twl.queue
    Result := True
  end

initial_is_empty : BOOLEAN
  do
    comment("Initial stack is empty")
    create queue_twl.make
    Result := queue_twl.is_empty and queue_twl.count = 0
  end

put_1_item : BOOLEAN
  local str : STRING
  do
    comment("Put one item is the top")
    create queue_twl.make
    create str.make_from_string ("abc")
    queue_twl.put (str)
    Result := str.is_equal (queue_twl.item)
  end

put_1_count : BOOLEAN
  local str : STRING
  do
    comment("Put one item is the top")
    create queue_twl.make
    create str.make_from_string ("abc")
    queue_twl.put (str)
    Result := queue_twl.count = 1
    queue_twl.remove
    Result := Result and queue_twl.is_empty
  end

put_3_items : BOOLEAN
  local str : STRING
  do
    comment("Put and remove three items")
    create queue_twl.make
    create str.make_from_string ("abc")
    queue_twl.put (str)
    str.make_from_string ("def")
    queue_twl.put (str)
    str.make_from_string ("ghi")
    queue_twl.put (str)
    Result := queue_twl.item.is_equal ("abc")
    queue_twl.remove
    Result := Result and queue_twl.item.is_equal ("def")
    queue_twl.remove
    Result := Result and queue_twl.item.is_equal ("ghi")
  end

put_3_count : BOOLEAN
  local str : STRING
  do
    comment("Put and remove three items proper count")
    create queue_twl.make
    create str.make_from_string ("abc")
    queue_twl.put (str)
    str.make_from_string ("def")
    queue_twl.put (str)
    str.make_from_string ("ghi")
    queue_twl.put (str)
    Result := queue_twl.count = 3
    queue_twl.remove
    Result := Result and  queue_twl.count = 2 and not queue_twl.is_empty
    queue_twl.remove
    Result := Result and  queue_twl.count = 1 and not queue_twl.is_empty
    queue_twl.remove
    Result := Result and queue_twl.is_empty
  end

alternate_put_remove : BOOLEAN
  local
    str : STRING
    first_item : STRING
    last_item : STRING
  do
    comment("Alternate put and remove")
    create queue_twl.make
    create str.make_from_string ("abc")
    queue_twl.put (str)
    str.make_from_string ("def")
    queue_twl.put (str)
    str.make_from_string ("ghi")
    queue_twl.put (str)
    queue_twl.remove
    queue_twl.queue.start
    first_item := queue_twl.queue.item
    queue_twl.queue.finish
    last_item := queue_twl.queue.item
    Result := first_item.is_equal("def") and last_item.is_equal("ghi")
    str.make_from_string ("jkl")
    queue_twl.put (str)
    queue_twl.remove
    queue_twl.queue.start
    first_item := queue_twl.queue.item
    queue_twl.queue.finish
    last_item := queue_twl.queue.item
    Result := Result and first_item.is_equal("ghi") and last_item.is_equal("jkl")
    str.make_from_string ("mno")
    queue_twl.put (str)
    queue_twl.remove
    queue_twl.queue.start
    first_item := queue_twl.queue.item
    queue_twl.queue.finish
    last_item := queue_twl.queue.item
    Result := Result and first_item.is_equal("jkl") and last_item.is_equal("mno")
  end

put_correct_sequence : BOOLEAN
  local
    str : STRING
    first_item : STRING
    last_item : STRING
  do
    comment("Put makes correct sequence")
    create queue_twl.make
    create str.make_from_string ("abc")
    queue_twl.put (str)
    str.make_from_string ("def")
    queue_twl.put (str)
    str.make_from_string ("ghi")
    queue_twl.put (str)
    queue_twl.queue.start
    first_item := queue_twl.queue.item
    queue_twl.queue.finish
    last_item := queue_twl.queue.item
    Result := first_item.is_equal("abc") and last_item.is_equal("ghi")
  end
--------------------------------------------------------------------------------
feature -- Globals

queue_twl : QUEUE_TWL[STRING]

end
