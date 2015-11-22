indexing
  description: "Objects that represent a tool rental shop"
  author: "Hongbing Ye"
  date: "27 Oct 2015"
  revision: "Build 1"

class TOOL_RENTAL

create new_shop

--------------------------------------------------------------------------------
feature -- Representation

inventory : LINKED_LIST[TOOL_DESC]       -- All the tools owned by the shop
rented : LINKED_LIST[RENTAL_DESC]        -- All tools rented out
under_repair : LINKED_LIST[REPAIR_DESC]  -- All tools being repaired
to_rent : LINKED_LIST[TOOL_DESC]         -- All tools that can be rented

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

new_shop (new_tools : LINKED_LIST[TOOL_DESC] ; min_tool_count : INTEGER)
    -- Set up a tool rental shop, there is a minimum of 100 tools initially
    -- available for rent.
  require
    -- ???
    minimum_tool: min_tool_count >= 100
  do
  ensure
    -- ???
    valid_shop: inventory.count = min_tool_count and
    			number_rented_tools = 0	and
    			number_under_repair_tools = 0
  end

--------------------------------------------------------------------------------
feature -- Status

size_of_inventory : INTEGER
    -- The number of tools in the inventory; i.e. owned by the shop.
  require
    -- ???
    -- Since there is no parameter to be passed in, and the class call this feature is to
    -- get the value of inventory list length, the precondition is always true
   	True
  do
  ensure
    -- ???
	Result = inventory.count
  end

number_rented_tools : INTEGER
    -- The number of tools that are rented out
  require
    -- ???
    -- same as above
  do
  ensure
    -- ???
    Result = rented.count
  end

number_under_repair_tools : INTEGER
    -- The number of tools under repair.
  require
    -- ???
    -- same as above
  do
  ensure
    -- ???
    Result = under_repair.count
  end

--------------------------------------------------------------------------------
feature -- Mainenance

dispose_of (tool : TOOL_DESC)
    -- Remove a tool from the shop.  It is no longer rentable or repairable.
    -- It is no longer owned by the shop.
  require
    -- ???
    valid_tool: tool /= void
    exist_inventory: in_inventory(tool)
    not_exist_rented: not in_rented(tool)

    -- tool /= void ^ tool in inventory ^ toll not in rented
  do
  	-- here is where the inventory.count got decreased
  ensure
    -- ???
    not_exist_inventory: not in_inventory(tool)
    decreased_inventory_size: size_of_inventory = (old size_of_inventory - 1)
  end

buy (new_tool : TOOL_DESC)
    -- Buy a new tool, which is, upon purchase, immediately available for rent.
  require
    -- ???
    valid_tool: new_tool /= void
    not_exist_inventory: not in_inventory(new_tool)
	brand_new: new_tool.repair_count = 0
  do
  ensure
    -- ???
    exist_in_inventory: in_inventory(new_tool)
    increased_inventory_size: size_of_inventory = (old size_of_inventory + 1)
    increased_to_rent: to_rent.count = (old to_rent.count + 1)
  end

start_repair_process (tool : TOOL_DESC)
   -- The tool cannot be rented until it is repaired.
  require  -- ???
  	valid_tool: tool /= void
  	exist_in_inventory: in_inventory(tool)
  	exist_in_to_rent: in_to_rent(tool)
  	not_exist_in_rented: not in_rented(tool)
  	not_exist_in_repair: not in_repair(tool)
  do
  ensure
    -- ???
    exist_in_inventory: in_inventory(tool)
    not_exist_in_rented: not in_rented(tool)
    exist_in_repair: in_repair(tool)
    not_exist_to_rent: not in_to_rent(tool)
    increased_under_repair_size: number_under_repair_tools = (old number_under_repair_tools + 1)
    decreased_number_rented: to_rent.count = (old to_rent.count - 1)

  end

end_repair_process (tool : REPAIR_DESC)
    -- The tool has been repaired and can be rented again.
  require
    -- ???
    exist_in_inventory: in_inventory(tool.desc)
    not_exist_in_to_rent: not in_to_rent(tool.desc)
    not_exist_in_rented: not in_rented(tool.desc)
    exist_in_repair: in_repair(tool.desc)
  do
  ensure
    -- ???
    exist_in_inventory: in_inventory(tool.desc)
    exist_in_to_rent: in_to_rent(tool.desc)
	not_exist_in_rented: not in_rented(tool.desc)
	not_exist_in_repair: not in_repair(tool.desc)
    decreased_under_repair_size: number_under_repair_tools = (old number_under_repair_tools - 1)
    increased_number_rented: to_rent.count = (old to_rent.count + 1)
  end

--------------------------------------------------------------------------------
feature -- Rental

rent (tool : TOOL_DESC)
    -- Rent a tool.
  require
    -- ???
    valid_tool: tool /= void
    exist_in_inventory: in_inventory(tool)
    exist_in_to_rent: in_to_rent(tool)
    not_exist_in_rented: not in_rented(tool)
    not_exist_repair: not in_repair(tool)
  do
  ensure
    -- ???
    exist_in_inventory: in_inventory(tool)
    not_exist_in_to_rent: not in_to_rent(tool)
    exist_in_rented: in_rented(tool)
    not_exist_in_repair: not in_repair(tool)
    number_of_rented: number_rented_tools = old number_rented_tools + 1
    to_rent_decrease: to_rent.count = old to_rent.count - 1

  end

return (tool : RENTAL_DESC)
    -- The return of a rented tool.
  require
    -- ???
    valid_tool: tool /= void
    exist_in_inventory: in_inventory(tool.desc)
    not_exist_in_to_rent: not in_to_rent(tool.desc)
    exist_in_rented: in_rented(tool.desc)
    not_exist_repair: not in_repair(tool.desc)
  do
  ensure
    -- ???
    exist_in_inventory: in_inventory(tool.desc)
    exist_in_to_rent: in_to_rent(tool.desc)
    not_exist_in_rented: not in_rented(tool.desc)
    not_exist_in_repair: not in_repair(tool.desc)
    number_of_rented: number_rented_tools = old number_rented_tools - 1
    to_rent_increased: to_rent.count = old to_rent.count + 1
  end

--------------------------------------------------------------------------------
feature -- Quantifiers

	for_all_tool_list(list: LINKED_LIST[TOOL_DESC];
					predicate : FUNCTION[ANY, TUPLE[TOOL_DESC], BOOLEAN]) : BOOLEAN
	    -- Result is True if the predicate is true for all index_items in the index
	  local list_copy : LINKED_LIST[TOOL_DESC]
	  do
	    Result := true
	    list_copy := list.twin
	    from list_copy.start
	  	invariant
	  	  -- forall var : the_index_list
	      --        | 1 <= index(var) <= index(list_copy)-1 :: predicate(var)}
	    until list_copy.after or not Result
	    loop
	      Result := Result and predicate.item([list_copy.item])
	      list_copy.forth
	    variant  list_copy.count + 1 - list_copy.index
	    end
  	  end

	for_all_rental_list(list: LINKED_LIST[RENTAL_DESC];
					predicate : FUNCTION[ANY, TUPLE[TOOL_DESC], BOOLEAN]) : BOOLEAN
	    -- Result is True if the predicate is true for all index_items in the index
	  local list_copy : LINKED_LIST[RENTAL_DESC]
	  do
	    Result := true
	    list_copy := list.twin
	    from list_copy.start
	  	invariant
	  	  -- forall var : the_index_list
	      --        | 1 <= index(var) <= index(list_copy)-1 :: predicate(var)}
	    until list_copy.after or not Result
	    loop
	      Result := Result and predicate.item([list_copy.item.desc])
	      list_copy.forth
	    variant  list_copy.count + 1 - list_copy.index
	    end
  	  end

  	for_all_repair_list(list: LINKED_LIST[REPAIR_DESC];
					predicate : FUNCTION[ANY, TUPLE[TOOL_DESC], BOOLEAN]) : BOOLEAN
	    -- Result is True if the predicate is true for all index_items in the index
	  local list_copy : LINKED_LIST[REPAIR_DESC]
	  do
	    Result := true
	    list_copy := list.twin
	    from list_copy.start
	  	invariant
	  	  -- forall var : the_index_list
	      --        | 1 <= index(var) <= index(list_copy)-1 :: predicate(var)}
	    until list_copy.after or not Result
	    loop
	      Result := Result and predicate.item([list_copy.item.desc])
	      list_copy.forth
	    variant  list_copy.count + 1 - list_copy.index
	    end
  	  end

	there_exists_tool(the_list: LINKED_LIST[TOOL_DESC];
				predicate: FUNCTION[ANY, TUPLE[TOOL_DESC], BOOLEAN]) : BOOLEAN
		require
			-- the_list /= void
		local
			list_copy: LINKED_LIST [TOOL_DESC]
		do
			Result := True
				list_copy := the_list.twin
			from
				list_copy.start
			invariant
				-- forall var : the_list | 1 <= index_of(var) <= index(the_list) - 1
				--					:: not predicate(var)
				-- This assertion states that if the element in the_list is still not found
				-- then that is equivalent to the fact that the predicate is not true yet.
			until
				list_copy.after or Result
			loop
				Result := predicate.item ([list_copy.item])
				list_copy.forth
			variant
				list_copy.count + 1 - list_copy.index
			end
		ensure
			-- forall var : the_list | predicate(var) :: Result = True
			-- forall var : the_list | not predicate(var) :: Result = False
		end

	there_exists_rented(the_list: LINKED_LIST[RENTAL_DESC];
				predicate: FUNCTION[ANY, TUPLE[TOOL_DESC], BOOLEAN]) : BOOLEAN
		require
			-- the_list /= void
		local
			list_copy: LINKED_LIST [RENTAL_DESC]
		do
			Result := True
				list_copy := the_list.twin
			from
				list_copy.start
			invariant
				-- forall var : the_list | 1 <= index_of(var) <= index(the_list) - 1
				--					:: not predicate(var)
				-- This assertion states that if the element in the_list is still not found
				-- then that is equivalent to the fact that the predicate is not true yet.
			until
				list_copy.after or Result
			loop
				Result := predicate.item ([list_copy.item.desc])
				list_copy.forth
			variant
				list_copy.count + 1 - list_copy.index
			end
		ensure
			-- forall var : the_list | predicate(var) :: Result = True
			-- forall var : the_list | not predicate(var) :: Result = False
		end

	there_exists_repair(the_list: LINKED_LIST[REPAIR_DESC];
				predicate: FUNCTION[ANY, TUPLE[TOOL_DESC], BOOLEAN]) : BOOLEAN
		require
			-- the_list /= void
		local
			list_copy: LINKED_LIST [REPAIR_DESC]
		do
			Result := True
				list_copy := the_list.twin
			from
				list_copy.start
			invariant
				-- forall var : the_list | 1 <= index_of(var) <= index(the_list) - 1
				--					:: not predicate(var)
				-- This assertion states that if the element in the_list is still not found
				-- then that is equivalent to the fact that the predicate is not true yet.
			until
				list_copy.after or Result
			loop
				Result := predicate.item ([list_copy.item.desc])
				list_copy.forth
			variant
				list_copy.count + 1 - list_copy.index
			end
		ensure
			-- forall var : the_list | predicate(var) :: Result = True
			-- forall var : the_list | not predicate(var) :: Result = False
		end


--------------------------------------------------------------------------------
feature -- Agents

	same_tool(tool1, tool2 : TOOL_DESC) : BOOLEAN
	-- Do tool1 and tool2 have the same id?
	require	not_void: tool1 /= void and tool2 /= void
	do
		Result := tool1.id.is_equal (tool2.id)
	ensure	id_compared: Result = tool1.id.is_equal (tool2.id)
	end


--------------------------------------------------------------------------------
feature -- Contract support

	in_inventory(tool : TOOL_DESC) : BOOLEAN
		-- Is a tool with the same id in the inventory list
		require not_void: tool /= void
		do
			Result := there_exists_tool(inventory, agent same_tool(tool, ?))
		ensure proper_result: Result = there_exists_tool(inventory, agent same_tool(tool, ?))
		end
	in_rented(tool : TOOL_DESC) : BOOLEAN
		-- Is a tool with the same id in the rented list
		require not_void: tool /= void
		do
			Result := there_exists_rented(rented, agent same_tool(tool, ?))
		ensure proper_result: Result = there_exists_rented(rented, agent same_tool(tool, ?))
		end
	in_repair(tool : TOOL_DESC) : BOOLEAN
		-- Is a tool with the same id in the repair list
		require not_void: tool /= void
		do
			Result := there_exists_repair(under_repair, agent same_tool(tool, ?))
		ensure proper_result: Result = there_exists_repair(under_repair, agent same_tool(tool, ?))
		end
	in_to_rent(tool : TOOL_DESC) : BOOLEAN
		-- Is a tool with the same id in the rent list
		require not_void: tool /= void
		do
			Result := there_exists_tool(to_rent, agent same_tool(tool, ?))
		ensure proper_result: Result = there_exists_tool(to_rent, agent same_tool(tool, ?))
		end



--------------------------------------------------------------------------------
invariant

  total_inventory_unchanged: to_rent.count = (size_of_inventory - number_rented_tools - number_under_repair_tools)
  -- rented list intersect repair list = void ^ rented list intersect to rent = void
  rented_not_applicable_to_repair: not for_all_rental_list(rented, agent in_repair(?))
  rented_not_applicable_to_rent: not for_all_rental_list(rented, agent in_to_rent(?))
  -- repair list intersect rented list = void ^ repair list intersect to rent = void
  under_repair_not_applicable_to_be_rented: not for_all_repair_list(under_repair, agent in_rented(?))
  under_repair_not_applicable_to_rent: not for_all_repair_list(under_repair, agent in_to_rent(?))
  -- to rent list intersect repair list = void ^ to rent list intersect rented list = void
  to_rent_not_applicable_to_repair: not for_all_tool_list(to_rent, agent in_repair(?))
  to_rent_not_applicable_to_rented: not for_all_tool_list(to_rent, agent in_rented(?))

  -- all list elements are in the inventory
  to_rent_in_inventory: for_all_tool_list(to_rent, agent in_inventory(?))
  rented_in_inventory: for_all_rental_list(rented, agent in_inventory(?))
  repair_in_inventory: for_all_repair_list(under_repair, agent in_inventory(?))


end
