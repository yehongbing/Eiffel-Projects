note
  description: "Starting class for the MVC exercise"
  author: "Eiffel example"

class APPLICATION
  inherit EV_APPLICATION

create make_and_launch

--------------------------------------------------------------------------------
feature {NONE} -- Objects
    -- Change the name of the `the_application' to the appropriate class.

main_window: EV_TITLED_WINDOW -- Main (first) window for the application.
the_application: MAIN_CONTROLLER

--------------------------------------------------------------------------------
feature {NONE} -- Constants
    -- Make changes appropriate to the application.

minimum_height: INTEGER = 400   -- minimum height of the window
minimum_width: INTEGER = 300    -- minimum width of the window.
window_title: STRING = "Observer MVC"

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

make_and_launch
    -- Create `Current', build and display `main_window',
    -- then launch the application.
  do
    default_create
    create main_window
    main_window.set_title (window_title)
    main_window.set_minimum_height (minimum_height)
    main_window.set_minimum_width (minimum_width)

      -- Connect the `destroy' routine to `close_request_actions' of
      -- the`main_window' so that when a user attempts to close the window,
      -- `Current' will be destroyed.

    main_window.close_request_actions.extend (agent destroy)

    create the_application
    main_window.extend (the_application.widget)
    main_window.show

      -- Start running the event loop.
    launch
  end

end
