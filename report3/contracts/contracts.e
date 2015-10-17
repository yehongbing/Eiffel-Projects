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
  local
    split, last : INTEGER
  do
    from split := 1 ; last := 2
    until last > a.upper
    loop
      if a[last] < a[1] then split := split + 1
                             swap(a, last, split)
                             last := last + 1
      else
        if a[last] > a[1] then last := last + 1 end
      end
    end
    swap(a, 1, split)
    Result := split
  end

swap (a : ARRAY[INTEGER]; i1, i2 : INTEGER)
  local t : INTEGER
  do t := a[i1] ; a[i1] := a[i2] ; a[i2] := t end

--------------------------------------------------------------------------------
feature -- Contract support


end
