note
	description: "Summary description for {OPERATION}."
	author: "Hongbing Ye"
	date: "27 Oct 2015"
	revision: "$Revision$"

class
	OPERATION


create make
--------------------------------------------------------------------------------
feature --- Attributes
	op_date: DATE
	op_type: INTEGER

--------------------------------------------------------------------------------
feature {NONE}	 ---- initialization of an operation

 make(date: DATE; type: INTEGER)
 do
	op_date := date
	op_type := type

 end


end
