note
  description: "Martian temperature controller."
  author: "G.J. Gotshalks"

class MARTIAN_TEMPERATURE_CONTROLLER
inherit SUBJECT
	rename
		make as subject_make
	end
create make

--------------------------------------------------------------------------------
feature -- Objects

vertical_box: EV_VERTICAL_BOX

backgroundColor: EV_COLOR
foregroundColor: EV_COLOR

font_const: EV_FONT_CONSTANTS
point_size: INTEGER

temperature : EV_LABEL


--------------------------------------------------------------------------------
feature {NONE} -- Creation

make(title : STRING; the_temperature: REAL)
  local
  	initial_temperature: REAL
    horizontal_box: EV_HORIZONTAL_BOX
  	button : EV_BUTTON
  	colour : EV_COLOR
  do
  	-- need to create the list of observers by calling creation feature
  	-- of subject superclass such that the increase/decrease can notify
  	-- the observer the changes
  	subject_make

    create backgroundColor.make_with_rgb (0.8, 0.8, 0.8)
    create font_const
    point_size := 22
    create vertical_box
    create horizontal_box
    horizontal_box.extend (createTitle(title))
    point_size := 18
    initial_temperature := the_temperature
    temperature := createTemperatureLabel(initial_temperature.out)
    horizontal_box.extend (temperature)
    vertical_box.extend (horizontal_box)
    create horizontal_box
    create button.make_with_text_and_action ("Increase 100", agent increase)
      button.set_font (create {EV_FONT}.make_with_values
      	(font_const.Family_roman,  font_const.weight_bold,
   			 font_const.shape_regular, point_size))
   		create colour.make_with_rgb (0.7, 0, 0)
   		button.set_background_color (colour)
   		create colour.make_with_rgb (1, 1, 1)
   		button.set_foreground_color (colour)
      horizontal_box.extend(button)
    create button.make_with_text_and_action ("Decrease 100", agent decrease)
      button.set_font (create {EV_FONT}.make_with_values
      	(font_const.Family_roman,  font_const.weight_bold,
   			 font_const.shape_regular, point_size))
   		create colour.make_with_rgb (0, 0, 0.8)
   		button.set_background_color (colour)
   		create colour.make_with_rgb (1, 1, 1)
   		button.set_foreground_color (colour)
      horizontal_box.extend(button)
    vertical_box.extend (horizontal_box)

  end

--------------------------------------------------------------------------------
feature -- Create view objects

createTitle(title: STRING) : EV_LABEL
-- Create the title widget
  do
    create Result.make_with_text (title)
    setLabelFont(Result)
    Result.set_background_color (backgroundColor)
    create foregroundColor.make_with_rgb (0,0,0)
    Result.set_foreground_color (foregroundColor)
  end

createTemperatureLabel(label: STRING) : EV_LABEL
  do
    create Result.make_with_text (label)
    setLabelFont(Result)
    Result.set_background_color (backgroundColor)
    create foregroundColor.make_with_rgb (0,0,0)
    Result.set_foreground_color (foregroundColor)
  end

--------------------------------------------------------------------------------
feature -- Actions

increase
  local
  	temp: REAL
  do
  	temp := (temperature.text.to_real + 100)
  	temperature.set_text (temp.out)
  	notify
  end

decrease
  local
  	temp: REAL
  do
  	temp := (temperature.text.to_real - 100)
  	temperature.set_text (temp.out)
  	notify
  end

--------------------------------------------------------------------------------
feature -- Support

setLabelFont(label: EV_LABEL)
  do
    label.set_font (create {EV_FONT}.make_with_values (font_const.Family_roman,
                                                       font_const.weight_bold,
                                                       font_const.shape_regular,
                                                       point_size))
  end

end
