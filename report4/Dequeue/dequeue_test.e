note
	description: "Test cases for DEQUEUE"
	author: "Gunnar Gotshalks"

class DEQUEUE_TEST
  inherit ES_TEST

create make

--------------------------------------------------------------------------------
feature -- Creation

make
  do
    add_boolean_case(agent initial_is_empty)
    add_boolean_case(agent put_right_1_item)
    add_boolean_case(agent put_right_1_count)
    add_boolean_case(agent put_right_3_items)
    add_boolean_case(agent put_right_3_count)
    add_boolean_case(agent put_right_correct_sequence)

    add_boolean_case(agent put_left_1_item)
    add_boolean_case(agent put_left_1_count)
    add_boolean_case(agent put_left_3_items)
    add_boolean_case(agent put_left_3_count)
    add_boolean_case(agent put_left_correct_sequence)

    add_boolean_case(agent put_left_right)
    add_boolean_case(agent dynamic_binding_put_3_items)
  end

--------------------------------------------------------------------------------
feature -- Initial Tests

proper_name_queue : BOOLEAN
  local q : TWO_WAY_LIST[STRING]
  do
    comment("Queue is properly named")
    create deq_twl.make
    q := deq_twl.dequeue
    Result := True
  end

initial_is_empty : BOOLEAN
  do
    comment("Initial queue is empty")
    create deq_twl.make
    Result := deq_twl.is_empty and deq_twl.count = 0
  end

--------------------------------------------------------------------------------
feature -- Put right Tests

put_right_1_item : BOOLEAN
  local str : STRING
  do
    comment("Put right one item is the top")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_right (str)
    Result := str.is_equal (deq_twl.item)
  end

put_right_1_count : BOOLEAN
  local str : STRING
  do
    comment("Put right one item is the top")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_right (str)
    Result := deq_twl.count = 1
    deq_twl.remove_left
    Result := Result and deq_twl.is_empty
  end

put_right_3_items : BOOLEAN
  local str : STRING
  do
    comment("Put right and remove left three items")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_right (str)
    str.make_from_string ("def")
    deq_twl.put_right (str)
    str.make_from_string ("ghi")
    deq_twl.put_right (str)
    Result := deq_twl.item.is_equal ("abc")
    deq_twl.remove_left
    Result := Result and deq_twl.item.is_equal ("def")
    deq_twl.remove_left
    Result := Result and deq_twl.item.is_equal ("ghi")
  end

put_right_3_count : BOOLEAN
  local str : STRING
  do
    comment("Put right and remove left three items proper count")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_right (str)
    str.make_from_string ("def")
    deq_twl.put_right (str)
    str.make_from_string ("ghi")
    deq_twl.put_right (str)
    Result := deq_twl.count = 3
    deq_twl.remove_left
    Result := Result and  deq_twl.count = 2 and not deq_twl.is_empty
    deq_twl.remove_left
    Result := Result and  deq_twl.count = 1 and not deq_twl.is_empty
    deq_twl.remove_left
    Result := Result and deq_twl.is_empty
  end

put_right_correct_sequence : BOOLEAN
  local
    str : STRING
    first_item : STRING
    last_item : STRING
  do
    comment("Put right makes correct sequence")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_right (str)
    str.make_from_string ("def")
    deq_twl.put_right (str)
    str.make_from_string ("ghi")
    deq_twl.put_right (str)
    deq_twl.dequeue.start
    first_item := deq_twl.dequeue.item
    deq_twl.dequeue.finish
    last_item := deq_twl.dequeue.item
    Result := first_item.is_equal("abc") and last_item.is_equal("ghi")
  end

--------------------------------------------------------------------------------
feature -- Put left Tests

put_left_1_item : BOOLEAN
  local str : STRING
  do
    comment("Put left one item is the top")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_left (str)
    Result := str.is_equal (deq_twl.item)
  end

put_left_1_count : BOOLEAN
  local str : STRING
  do
    comment("Put left one item is the top")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_left (str)
    Result := deq_twl.count = 1
    deq_twl.remove_right
    Result := Result and deq_twl.is_empty
  end

put_left_3_items : BOOLEAN
  local str : STRING
  do
    comment("Put left and remove right three items")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_left (str)
    str.make_from_string ("def")
    deq_twl.put_left (str)
    str.make_from_string ("ghi")
    deq_twl.put_left (str)
    Result := deq_twl.item.is_equal ("abc")
    deq_twl.remove_right
    Result := Result and deq_twl.item.is_equal ("def")
    deq_twl.remove_right
    Result := Result and deq_twl.item.is_equal ("ghi")
  end

put_left_3_count : BOOLEAN
  local str : STRING
  do
    comment("Put left and remove right three items proper count")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_left (str)
    str.make_from_string ("def")
    deq_twl.put_left (str)
    str.make_from_string ("ghi")
    deq_twl.put_left (str)
    Result := deq_twl.count = 3
    deq_twl.remove_right
    Result := Result and  deq_twl.count = 2 and not deq_twl.is_empty
    deq_twl.remove_right
    Result := Result and  deq_twl.count = 1 and not deq_twl.is_empty
    deq_twl.remove_right
    Result := Result and deq_twl.is_empty
  end

put_left_correct_sequence : BOOLEAN
  local
    str : STRING
    first_item : STRING
    last_item : STRING
  do
    comment("Put left makes correct sequence")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_left (str)
    str.make_from_string ("def")
    deq_twl.put_left (str)
    str.make_from_string ("ghi")
    deq_twl.put_left (str)
    deq_twl.dequeue.start
    first_item := deq_twl.dequeue.item
    deq_twl.dequeue.finish
    last_item := deq_twl.dequeue.item
    Result := first_item.is_equal("ghi") and last_item.is_equal("abc")
  end

--------------------------------------------------------------------------------
feature -- Put left & right

put_left_right : BOOLEAN
  local
    str : STRING
    first_item : STRING
    last_item : STRING
  do
    comment("Put left and right, remove right and left")
    create deq_twl.make
    create str.make_from_string ("abc")
    deq_twl.put_left (str)
    str.make_from_string ("def")
    deq_twl.put_right (str)
    str.make_from_string ("ghi")
    deq_twl.put_left (str)
    str.make_from_string ("jkl")
    deq_twl.put_right (str)
    deq_twl.dequeue.start
    first_item := deq_twl.dequeue.item
    deq_twl.dequeue.finish
    last_item := deq_twl.dequeue.item
    Result := first_item.is_equal("ghi") and last_item.is_equal("jkl")
    deq_twl.remove_left
    deq_twl.dequeue.start
    first_item := deq_twl.dequeue.item
    Result := Result and first_item.is_equal("abc") and last_item.is_equal ("jkl")
    deq_twl.remove_right
    deq_twl.dequeue.finish
    last_item := deq_twl.dequeue.item
    Result := Result and first_item.is_equal("abc") and last_item.is_equal ("def")
    deq_twl.remove_left
    deq_twl.dequeue.start
    first_item := deq_twl.dequeue.item
    Result := Result and first_item.is_equal("def") and last_item.is_equal ("def")
  end

--------------------------------------------------------------------------------
feature -- Dynamic binding

dynamic_binding_put_3_items : BOOLEAN
  local
  	queue : QUEUE_TWL[STRING]
  	str : STRING
  do
    comment("Dynamic binding put and remove 3 items")
    create {DEQUEUE[STRING]} queue.make
    deq_twl ?= queue
    if deq_twl /= void then
      create str.make_from_string ("abc")
      queue.put (str)
      str.make_from_string ("def")
      queue.put (str)
      str.make_from_string ("ghi")
      queue.put (str)
      Result := queue.item.is_equal ("abc")
      queue.remove
      Result := Result and queue.item.is_equal ("def")
      queue.remove
      Result := Result and queue.item.is_equal ("ghi")
    end
  end

--------------------------------------------------------------------------------
feature -- Globals

deq_twl : DEQUEUE[STRING]

end
