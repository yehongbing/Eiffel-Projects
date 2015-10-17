indexing
  description: "Objects that represent tool descriptions"
  author: "Gunnar Gotshalks"
  date: "2010 September 24"
  revision: "Build 1"

class TOOL_DESC

create new_desc

--------------------------------------------------------------------------------
feature -- Representation

id : STRING
bought : DATE
repair_count : INTEGER

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

new_desc(new_id : STRING; purchase_date : DATE)
    -- Set up a new tool description
  require
    args_exist: new_id /= void and purchase_date /= void
  do
  ensure
    created: deep_equal(new_id, id) and deep_equal(purchase_date, bought)
         and repair_count = 0
  end

invariant
  reasonable_values: id /= void and bought /= void and repair_count >= 0
end

