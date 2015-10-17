indexing
  description: "Objects that represent tool rental descriptions"
  author: "Gunnar Gotshalks"
  date: "2010 September 24"
  revision: "Build 1"

class RENTAL_DESC

create new_desc

--------------------------------------------------------------------------------
feature -- Representation

desc : TOOL_DESC
start_date : DATE
end_date : DATE
renter: STRING
contact : STRING

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

new_desc (the_tool : TOOL_DESC ; the_renter, the_contact : STRING
         ; the_date : DATE)
    -- Set up a new tool rental description
  require
    args_exist: the_tool /= void and the_renter /= void and the_contact /= void
            and the_date /= void and desc.bought < the_date
  do
  ensure
    created: deep_equal(renter, the_renter)
         and deep_equal(contact, the_contact)
         and deep_equal(start_date, the_date)
         and desc = the_tool
  end

invariant
  dates_reasonable: end_date /= void implies start_date < end_date
  data_reasonable: renter /= void and contact /= void
end

