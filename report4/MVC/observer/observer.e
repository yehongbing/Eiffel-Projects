note
  description: "[
    Deferred observer objects that are informed via 'update' from a subject
	  of changes in the subject.

    A concrete observer  will query the subject for information, and use the
    information to reconcile its state with the subject,  in such a way that
    'up_to_date_with_subject' returns true.
    ]"

  author: "Jonathan S. Ostroff"
  date: "2002 March 24"
  revised_by: "Gunnar Gotsahlks"
  date_revision: "2010 February 15"
  revision: "2.0"

deferred class OBSERVER

--------------------------------------------------------------------------------
feature -- Representation

subject : SUBJECT

--------------------------------------------------------------------------------
feature -- Initialization

make (the_subject : SUBJECT)
    -- initialize and attach to the 'subject'
  require
    arg_not_void: the_subject /= void
  do
    subject := the_subject
    subject.attach(Current)
  end

--------------------------------------------------------------------------------
feature -- Updating

up_to_date_with_subject: BOOLEAN
    -- Is this observer up to date with its subject.
  deferred
  end

update
    -- Update the observer's view of the subject.
  deferred
  ensure
    up_to_date_with_subject: up_to_date_with_subject
  end

--------------------------------------------------------------------------------
invariant
  subject_exists: subject /= void

end
