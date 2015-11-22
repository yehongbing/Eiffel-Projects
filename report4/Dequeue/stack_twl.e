note
	description: "Stack built by adapting a two-way-list"
	author: "???"

class STACK_TWL[G]

create make

--------------------------------------------------------------------------------
feature -- Representation

stack : TWO_WAY_LIST[G]

--------------------------------------------------------------------------------
feature {NONE} -- Creation

make
  do
  	-- create an empty two-way list
  	create stack.make
  end

--------------------------------------------------------------------------------
feature -- Write

put (data : G)
  do
  end

remove
  do
  end

--------------------------------------------------------------------------------
feature -- Read

item : G
  do
  end

--------------------------------------------------------------------------------
feature -- Enquiry

count : INTEGER
  do
  end

is_full : BOOLEAN
  do
  end

is_empty : BOOLEAN
  do
  end

end
