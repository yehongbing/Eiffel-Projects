note
	description: "Summary description for {PATIENT}."
	author: "Hongbing Ye"
	date: "27 Oct 2015"
	revision: "$Revision$"

class
	PATIENT

create make

---------------
feature --Attributes
	address: STRING
	birth: DATE
	teeth: LINKED_LIST[TOOTH]

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

make(add: STRING; bod: DATE)
  -- Initialization for 'Current'.
  do
	address := add
	birth := bod
	create teeth.make
  end

--------------------------------------------------------------------------------
feature	-- Routines
	had_root_canal : BOOLEAN
	require
		teeth /= void
	do
		-- implementation here to traverse the teeth set
		-- if there exist one of the teeth have had root canal
		-- then the Result := True
	ensure
		Result = there_exists_teeth(agent has_root_canal_tooth_in_p(?))
	end

	had_extraction : BOOLEAN
	require
		teeth /= void
	do
		-- implementation here to traverse the teeth set
		-- if there exist one of the teeth have had root canal
		-- then the Result := True
	ensure
		Result = there_exists_teeth(agent has_extraction_tooth_in_p(?))
	end

--------------------------------------------------------------------------------
feature -- Support Routines
	there_exists_teeth(predicate: FUNCTION[ANY, TUPLE[TOOTH],BOOLEAN]): BOOLEAN
	   -- Is the 'predicate' true for at least one of the tooth
   	   -- in the teeth list?
  		local list_copy : LINKED_LIST[TOOTH]
  		do
  		list_copy := teeth.twin
  		from list_copy.start
  		invariant
  	  	-- forall var : teeth | 1 <= index(var) <= index(list_copy)-1
        --        :: not predicate(var)}
  		until list_copy.after or Result
  		loop
  	  	Result := predicate.item([list_copy.item])
  	  	list_copy.forth
    	variant  list_copy.count + 1 - list_copy.index
  		end
  	end


--------------------------------------------------------------------------------
feature -- Agent
	has_root_canal_tooth_in_p(tooth: TOOTH): BOOLEAN
	require
		tooth /= void
	do
		Result := tooth.has_root_canal_tooth
	ensure
		Result = tooth.has_root_canal_tooth
	end

	has_extraction_tooth_in_p(tooth: TOOTH): BOOLEAN
	require
		tooth /= void
	do
		Result := tooth.has_extraction_tooth
	ensure
		Result = tooth.has_extraction_tooth
	end



end
