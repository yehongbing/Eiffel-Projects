note
  description: "Start of dental office system execution"
  author: "??? Your name ???"
  date: "??? Date ???"
  version: "1.0"

class START

create make

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

aDate : DATE  -- Included only to see if the Time library is correctly included.

make
  -- Initialization for `Current'.
  do
    print("Dental system started%N")
    print("Dental system ended5n")
  end

end
