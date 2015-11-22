note
  description: "Objects that provide Centigrade info about Kelvin temperatures"
  author: "Jonathan S. Ostroff"
  date: "2003 Feb. 27"
  revision: "1.0"

class FAHRENHEIT_VIEW
  inherit TEMPERATURE_VIEW

create make

--------------------------------------------------------------------------------
feature -- Updating

up_to_date_with_subject: BOOLEAN
    -- is this observer up to date with its subject
  do
    Result := delta( view_temperature
                   , (1.8*(kelvin_sensor.temperature - 273.18) + 32).truncated_to_real
                   , .001)
  ensure then
  	Result = delta( view_temperature
  	              , (1.8*(kelvin_sensor.temperature - 273.18) + 32).truncated_to_real
  	              , .001)
  end

--------------------------------------------------------------------------------
feature -- Commands

print_message
  do
    print( "Fahrenheit temperature is "
         + view_temperature.out + "%N")
  end

--------------------------------------------------------------------------------
feature -- Conversion

convert_from_kelvin
    -- Convert Kelvin degrees to Fahrenheit degrees
  do
  	view_temperature := (1.8*(kelvin_sensor.temperature - 273.18) + 32).truncated_to_real
  end

end
