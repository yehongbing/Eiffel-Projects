indexing
  description: "Objects that represent tool repair descriptions"
  author: "Gunnar Gotshalks"
  date: "2010 September 24"
  revision: "Build 1"

class REPAIR_DESC

create new_desc

--------------------------------------------------------------------------------
feature -- Representation

desc : TOOL_DESC
start_date : DATE
end_date : DATE
problem : STRING
resolution: STRING

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

new_desc(the_tool : TOOL_DESC ; the_problem : STRING ; the_date : DATE)
    -- Set up a new tool repair description
  require
    args_exist: the_tool /= void and the_problem /= void
            and the_date /= void and desc.bought < the_date
  do
  ensure
    created: deep_equal(problem, the_problem)
         and resolution = void
         and deep_equal(start_date, the_date)
  end

invariant
  dates_reasonable: end_date /= void implies start_date < end_date
  data_reasonable: problem /= void

end

