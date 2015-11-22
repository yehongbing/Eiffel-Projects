note
	description: "Summary description for {TEETH}."
	author: "Hongbing Ye"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	TOOTH

-------------------
feature --- Attributes/Tooth Condition
	operations: LINKED_LIST[OPERATION]

--------------------------------------------------------------------------------
feature {NONE} -- Initialization


make
-- initialize the current with no operations yet
  do
    create operations.make
  end


--------------------------------------------------------------------------------
feature  -- routines


	has_root_canal_tooth: BOOLEAN
	-- Return True if this tooth has had root canal
	require
	True
	do
		Result := there_exists1_operation(agent is_root_canal(?))
	end

	has_extraction_tooth: BOOLEAN
	-- Return True if this tooth has been extracted
	require
	True
	do
		Result := there_exists1_operation(agent is_extraction(?))
	end

	get_extraction_op: OPERATION
	require

	do
		Result := find_operation(agent is_extraction(?))
	end

--------------------------------------------------------------------------------
feature -- Support Routine

	find_operation(predicate: FUNCTION[ANY, TUPLE[OPERATION],BOOLEAN]): OPERATION
	   -- Is the 'predicate' true for at least one of the tooth
   	   -- in the teeth list?
  		local list_copy : LINKED_LIST[OPERATION]
  			  found_extraction: BOOLEAN

  		do
  		list_copy := operations.twin
  		found_extraction := false
  		from list_copy.start
  		invariant
  	  	-- forall var : operation | 1 <= index(var) <= index(list_copy)-1
        --        :: not predicate(var)}
  		until list_copy.after or found_extraction
  		loop
  	  	found_extraction := predicate.item([list_copy.item])
  	  	list_copy.forth
    	variant  list_copy.count + 1 - list_copy.index
  		end
  		if
  			found_extraction = true
  		then
  			Result := list_copy.item
  		end
  	end

  	there_exists1_operation(predicate : FUNCTION[ANY, TUPLE[OPERATION],BOOLEAN]) : BOOLEAN
	    -- Is the 'predicate' true for exactly one of the operation
	    -- in the operation list?
	  	local list_copy : LINKED_LIST[OPERATION]
	        	count_exists : INTEGER
	  	do
	  	list_copy := operations.twin
	  	from list_copy.start

	  	until list_copy.after
	  	loop
	  	  if predicate.item([list_copy.item]) then count_exists := count_exists + 1 end
	  	  list_copy.forth
	    variant  list_copy.count + 1 - list_copy.index
	  	end
	  	Result := count_exists = 1
  	end

  	count_exists_operation(predicate : FUNCTION[ANY, TUPLE[OPERATION],BOOLEAN]) : INTEGER
	    -- Count the numbers of predicate existance
	  	local list_copy : LINKED_LIST[OPERATION]
	        	count_exists : INTEGER
	  	do
	  	list_copy := operations.twin
	  	from list_copy.start

	  	until list_copy.after
	  	loop
	  	  if predicate.item([list_copy.item]) then count_exists := count_exists + 1 end
	  	  list_copy.forth
	    variant  list_copy.count + 1 - list_copy.index
	  	end
	  	Result := count_exists
  	end

--------------------------------------------------------------------------------
feature -- Agent

	is_root_canal(op: OPERATION): BOOLEAN
	-- 0 for filling, 1 for root cannal, 2 for extraction
	require
		op /= void
	do
		Result := (op.op_type = 1)
	ensure
		Result = (op.op_type = 1)
	end

	is_extraction(op: OPERATION): BOOLEAN
	-- 0 for filling, 1 for root cannal, 2 for extraction
	require
		op /= void
	do
		Result := (op.op_type = 2)
	ensure
		Result = (op.op_type = 2)
	end

invariant
-- if this tooth got extracted then current is set to void, this idea
-- will be applied to patient class to check if any one of the tooth
-- is extracted, if yes, then the tooth is set to void and no more
-- operations can be done
extracted: there_exists1_operation(agent is_extraction(?)) implies Current = void
-- make sure that the count for root canal operation is at most one
at_most_1_root_canal: count_exists_operation(agent is_root_canal(?)) <= 1

end
