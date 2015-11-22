note
  description: "Fahrenheit temperature controller"
  author: "G.J. Gotshalks"

class TEMPERATURE_FAHRENHEIT
inherit TEMPERATURE_GENERIC
	rename make as ob_make
	redefine
		update, convert_from_martian
	end
create make

--------------------------------------------------------------------------------
feature -- Objects

temperature: REAL

horizontal_box: EV_HORIZONTAL_BOX

backgroundColor: EV_COLOR
foregroundColor: EV_COLOR

font_const: EV_FONT_CONSTANTS
point_size: INTEGER

temperature_label: EV_LABEL

--------------------------------------------------------------------------------
feature {NONE} -- Creation

  make(title : STRING; b_colour, f_colour : EV_COLOR; model: MARTIAN_TEMPERATURE_CONTROLLER)
  do
    backgroundColor := b_colour
    foregroundColor := f_colour
    create font_const
    point_size := 22
    create horizontal_box
    horizontal_box.extend (createTitle(title))
    point_size := 18
    --
    convert_from_martian
    temperature_label := createTemperatureLabel(temperature.out)
    horizontal_box.extend (temperature_label)

  end

--------------------------------------------------------------------------------
feature -- Create view objects

createTitle(title: STRING) : EV_LABEL
		-- Create the title widget
  do
    create Result.make_with_text (title)
    setLabelFont(Result)
    Result.set_background_color (backgroundColor)
    Result.set_foreground_color (foregroundColor)
  end

createTemperatureLabel(label: STRING) : EV_LABEL
  do
    create Result.make_with_text (label)
    setLabelFont(Result)
    Result.set_background_color (backgroundColor)
    Result.set_foreground_color (foregroundColor)
  end

--------------------------------------------------------------------------------
feature -- As one of the observers, the specific update function to be defined here
update
  do
	convert_from_martian
	temperature_label := createTemperatureLabel(temperature.out)
  end

convert_from_martian
  do
  	temperature := (martian_sensor.temperature.text.to_real * (0.45) - 13)
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
