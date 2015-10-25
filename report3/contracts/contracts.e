--| CONTRACTS
--|-----------------------------------------------------------------------------
--|   Copyright (C) GunnarGotshalks --  All rights reserved.
--|
--| Permission to use, copy, modify, and distribute,without fee this software
--| and its documentation for educational purposes and is hereby granted.
--|-----------------------------------------------------------------------------

note
  description: "Report 3 executable contract exercise"
  author: "??? Your name ???"
  date: "??? Date ???"
  version: "1.0"

class CONTRACTS

--------------------------------------------------------------------------------
feature -- Algorithms

partition (a : ARRAY[INTEGER]): INTEGER
  require
  	upper_bound_large_enough: a.upper >= 1
  	lower_bound_low_enough: a.lower <= 1
  	-- forall j: 2...a.upper_bound :: a[1] != a[j]
  	unique_lower_bound_value: for_all_in_interval(a, 2, a.upper, agent not_equal_to(a[1], ?))
  local
    split, last : INTEGER

  do
    from split := 1 ; last := 2
    invariant
    	proper_left_of_split: for_all_in_interval(a, 2, split, agent is_less_than(?, a[1]))
    	proper_right_of_split: for_all_in_interval(a, split + 1, last - 1, agent is_greater_than(?, a[1]))
    until last > a.upper

    loop
      if a[last] < a[1] then split := split + 1
                             swap(a, last, split)
                             last := last + 1
      else
        if a[last] > a[1] then last := last + 1 end
      end
    variant
    	a.upper - last + 1
    end
    swap(a, 1, split)
    Result := split
  ensure
	mid_index: a[Result] = a[1]
	proper_left: for_all_in_interval(a, 1, Result - 1, agent is_less_than(?, a[1]))
	proper_right: for_all_in_interval(a, Result + 1, a.upper, agent is_less_than(a[1], ?))
  end

swap (a : ARRAY[INTEGER]; i1, i2 : INTEGER)
  local t : INTEGER
  do t := a[i1] ; a[i1] := a[i2] ; a[i2] := t end

--------------------------------------------------------------------------------
feature -- Contract support

	for_all_in_interval(the_array : ARRAY[INTEGER];start_i, end_i: INTEGER;
            predicate : FUNCTION[ANY, TUPLE[INTEGER], BOOLEAN]) : BOOLEAN
    -- Result is True if the predicate is true for all index_items in the_list.
    -- Only use if the the_list is not the_index_list.
  	local array_copy : ARRAY[INTEGER]
  		  i: INTEGER
  	do
    Result := true
    array_copy := the_array.twin
    from i := start_i
    until i = end_i or not Result
    loop
      Result := Result and predicate.item([array_copy.item(i)])
      i := i + 1
    end
  end
--------------------------------------------------------------------------------
feature -- Agent
	is_equal_to(i,j: INTEGER): BOOLEAN
	require
	True
	do
		Result := (i = j)
	ensure
		Result = (i = j)
	end

	not_equal_to(i,j: INTEGER): BOOLEAN
	require
	True
	do
		Result := (i /= j)
	ensure
		Result = (i /= j)
	end

	is_less_than(i,j: INTEGER): BOOLEAN
	require
	True
	do
		Result := (i < j)
	ensure
		Result = (i < j)
	end

	is_greater_than(i,j: INTEGER): BOOLEAN
	require
	True
	do
		Result := (i > j)
	ensure
		Result = (i > j)
	end
end
