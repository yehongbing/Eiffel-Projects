note
  description: "Objects that describe calculator operations"
  author: "G.J. Gotshalks"
  date: "2013 January 7"
  revision: "V1.0"

class OPERATOR
  inherit PROGRAM_ITEM

create make

--------------------------------------------------------------------------------
feature {NONE} -- Creation

make (operation: STRING)
    -- Create a variable.
  do
    text := operation
  end

end
