note
  description: "Objects that 'notify' its observers whenever a change occurs"
  author: "Jonathan S. Ostroff"
  date: "2002 March 24"
  revised_by: "Gunnar Gotsahlks"
  date_revision: "2010 February 15"
  revision: "2.0"

class SUBJECT

create make

--------------------------------------------------------------------------------
feature -- Representation

observers: LINKED_LIST[OBSERVER]
  -- a list of all observers attached to this subject

--------------------------------------------------------------------------------
feature -- Initialization

make
    -- initialize 'observers'
  do create observers.make end

--------------------------------------------------------------------------------
feature -- Queries

is_attached_to(o: OBSERVER): BOOLEAN
    -- Is 'o' and observer
  require
    arg_not_void: o /= Void
  do
    Result := observers.has(o)
  ensure
    is_attached_defn: Result = observers.has(o)
  end

--------------------------------------------------------------------------------
feature  -- Invoked by an OBSERVER

attach(o: OBSERVER)
    -- add 'o' to the observers
  require
    arg_not_void: o /= Void
    not_yet_attached: not is_attached_to(o)
  do
    observers.extend(o)
  ensure
    is_attached: is_attached_to(o)
  end

detach(o: OBSERVER)
    -- add 'o' to the observers
  require
    arg_not_void: o /= Void
    is_attached: is_attached_to(o)
  do
    observers.search(o)
    observers.remove
  ensure
    not_attached: not is_attached_to(o)
  end

--------------------------------------------------------------------------------
feature -- Notification

notify
    -- Send an 'update' message to each observer
  do
    observers.do_all (agent update_action(?))
  ensure
    all_views_updated: observers.for_all (agent update_action_completed(?))
      -- cannot use do_all as it is not a contract

    observers_remain_the_same: equal(observers, old observers.twin)
  end

update_action_completed(o:OBSERVER): BOOLEAN
    -- Is agent update action completed?
    -- Used by 'notify' ensure clause
  do
    Result := o.up_to_date_with_subject
  ensure
    up_to_date_result: Result = o.up_to_date_with_subject
    observers_remain_the_same: equal(observers, old observers.twin)
  end

--------------------------------------------------------------------------------
feature{NONE} -- Agents

update_action(o:OBSERVER)
    -- agent update action used by 'notify'
  do
    o.update
  end

--------------------------------------------------------------------------------

invariant  observers_not_void: observers /= Void

end
