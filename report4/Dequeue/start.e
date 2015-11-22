note
	description: "Test cases for Dequeue system"
	author: "Gunnar Gotshalks"

class START
  inherit ES_SUITE

create make

--------------------------------------------------------------------------------
feature -- Creation

make
  do
    add_test (create {STACK_TWL_TEST}.make)
    add_test (create {QUEUE_TWL_TEST}.make)
    add_test (create {DEQUEUE_TEST}.make)
    show_browser
    run_espec
  end

end
