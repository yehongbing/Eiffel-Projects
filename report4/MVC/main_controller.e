note
  description: "The main controller for temperature observer MVC."
  author: "G.J. Gotshalks"

class MAIN_CONTROLLER
  inherit ANY
          redefine default_create end

--------------------------------------------------------------------------------
feature -- Objects

widget: EV_WIDGET -- Widget containing then drawing area.

--------------------------------------------------------------------------------
feature {NONE} -- Creation

default_create
    -- Create the view in the 'widget'.
  local
    vertical_box: EV_VERTICAL_BOX
    fahrenheit_controller: TEMPERATURE_FAHRENHEIT
    martian_temperature_controller: MARTIAN_TEMPERATURE_CONTROLLER
    b_colour : EV_COLOR
    f_colour : EV_COLOR
  do

  	create vertical_box
  	create martian_temperature_controller.make("Martian Temperature", 100)
  	vertical_box.extend (martian_temperature_controller.vertical_box)

  	-- ? do we have to attach the observers here? say
  	-- martian_controller.attach(fahrenheit_controller) or etc
    create b_colour.make_with_rgb (1, 1, 0)
    create f_colour.make_with_rgb(0,0,0)
    create fahrenheit_controller.make("Fahrenheit", b_colour, f_colour, martian_temperature_controller)
    vertical_box.extend (fahrenheit_controller.horizontal_box)


    widget := vertical_box
  end

end
