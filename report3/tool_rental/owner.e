note
  description: "Objects that represent owners of tool rental shops"
  author: "Gunnar Gotshalks"
  date: "2010 September 24"
  revision: "Build 1"

class OWNER

create make

--------------------------------------------------------------------------------
feature {NONE} -- Initialization
make
    -- Run application.
  local shop : TOOL_RENTAL  -- Only here to force compilation
  do
  	if shop = void then -- only here to avoid warning message	
  	end
  end

end
