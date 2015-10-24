note
	description: "Summary description for {DENTAL_OFFICE}."
	author: "Hongbing Ye"
	date: "$Date$"
	revision: "$Revision$"

class
	DENTAL_OFFICE

create make

feature
	patients: LINKED_LIST[PATIENT]

--------------------------------------------------------------------------------
feature {NONE} -- Initialization
	make
	do
		create patients.make
	end


--------------------------------------------------------------------------------
feature	-- Query

	-- return the list containing the patients have had root canal
	get_root_canal_patients_list: LINKED_LIST[PATIENT]
	local root_canal_list: LINKED_LIST[PATIENT]
	do

  		from
  		patients.start
  		until
  		patients.after
  		loop
  	  	if patients.item.had_root_canal then
  	  		root_canal_list.extend (patients.item)
  	  	end
  	  	patients.forth
		end
	ensure
		the_list_is_correct: for_all(agent has_root_canal(?))
	end

	-- return the number of extractions done in the period of time
	number_of_teeth_extraction(start_Date, end_Date: DATE): INTEGER
	require
		proper_date: start_Date.is_less (end_Date)

	do

  		from
  		patients.start
  		until
  		patients.after
  		loop
  		-- for each patients in the dental office, we want to
  		-- count each of their teeth if that tooth has had
  		-- extraction in the given period
  	  	if patients.item.had_extraction then
			from
			patients.item.teeth.start
			until
			patients.item.teeth.after
			loop
				if patients.item.teeth.item.has_extraction_tooth then
					-- that specific extraction with that patient
					if
						-- increase the count only if the operation is in the period
						patients.item.teeth.item.get_extraction_op.op_date.is_less (end_Date) and
						patients.item.teeth.item.get_extraction_op.op_date.is_greater (end_Date)
					then
						Result := Result + 1
					end
				end
			patients.item.teeth.forth
			end
  	  	end
  	  	patients.forth
		end
	end

	-- all operations performed on male/female patients
	get_operations_from_all(start_Date, end_Date: DATE): LINKED_LIST[OPERATION]
	do
		-- traverse over the patients
		from
	  	patients.start
	  	until
	  	patients.after
	  	loop
	  		-- traverse over each patients teeth
			from
				patients.item.teeth.start
			until
				patients.item.teeth.after
			loop
				from
					patients.item.teeth.item.operations.start
				until
					patients.item.teeth.item.operations.after
				loop
					-- appropriate time period for all operations performed on each tooth
					if patients.item.teeth.item.operations.item.op_date.is_less (end_Date) and
						patients.item.teeth.item.operations.item.op_date.is_greater (start_Date)
					then
						-- store them into list
						Result.extend (patients.item.teeth.item.operations.item)
					end
				end
			end

		patients.forth
	  	end
	end




--------------------------------------------------------------------------------
feature -- Support Routine

	for_all(predicate : FUNCTION[ANY, TUPLE[PATIENT], BOOLEAN]) : BOOLEAN
	    -- Result is True if the predicate is true for all patient in the list
	  local list_copy : LINKED_LIST[PATIENT]
	  do
	    Result := true
	    list_copy := patients.twin
	    from list_copy.start
	    until list_copy.after or not Result
	    loop
	      Result := Result and predicate.item([list_copy.item])
	      list_copy.forth
	    variant  list_copy.count + 1 - list_copy.index
	    end
	  end


--------------------------------------------------------------------------------
feature -- Agent

	has_root_canal(p: PATIENT): BOOLEAN
		require
			p /= void
		do
			Result := p.had_root_canal
		ensure
			Result = p.had_root_canal
		end

end
