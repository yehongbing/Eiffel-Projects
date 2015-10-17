--| CONTRACTS_TEST
--|-----------------------------------------------------------------------------
--|   Copyright (C) GunnarGotshalks --  All rights reserved.
--|
--| Permission to use, copy, modify, and distribute,without fee this software
--| and its documentation for educational purposes and is hereby granted.
--|-----------------------------------------------------------------------------

note
  description: "Contracts start of execution"
  author: "??? Your name ???"
  date: "??? Date ???"
  version: "1.0"

class CONTRACTS_TEST

create make

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

make
  local
    algorithm : CONTRACTS
    a : ARRAY[INTEGER]
    split : INTEGER
  do
    io.put_string("Start of test%N")
    create algorithm
    create a.make_filled (0, 1, 20)
    array1(a)
    display(a)
    split := algorithm.partition (a)
    display(a)
    io.put_integer (split) ; io.new_line ; io.new_line
    create a.make_filled (0, -5, 15)
    io.put_string ("End of test%N")
  end

array1 (a : ARRAY[INTEGER])
  -- Create version 1 of array.  No item equals a[1]
  local
    j : INTEGER       -- index to array
    r : RANDOM        -- random number generator
    n : INTEGER       -- random integer betwen 0 and 99 inclusive
  do
    create r.make
    r.set_seed (191010103) ; r.start
    from a[1] := 50 ; j := a.lower + 1
    until j > a.upper
    loop
      n := (100 * r.real_item).truncated_to_integer
      if n /= a[1] then
        a[j] := n
        r.forth
        j := j + 1
      end
    end
  end

array2 (a : ARRAY[INTEGER])
  -- Create version 2 of the array, integers in the range 0..4
  local
    j : INTEGER       -- index to array
    r : RANDOM        -- random number generator
  do
    create r.make
    r.set_seed (1910101) ; r.start
    from a[a.lower] := 1 ; j := a.lower + 1
    until j > a.upper
    loop
      a[j] := (5 * r.real_item).truncated_to_integer
      r.forth
      j := j + 1
    end
  end

display (a : ARRAY[INTEGER])
  local
  	j : INTEGER
  do
    io.new_line
    from j := a.lower
    until j > a.upper
    loop
      io.put_integer(a[j]) ; io.put_string ("  ")
      j := j + 1
    end
    io.new_line
  end
end
