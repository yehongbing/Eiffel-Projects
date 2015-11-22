note
  description: "Objects that provide Centigrade info about Kelvin temperatures"
  author: "Jonathan S. Ostroff"
  date: "2003 Feb. 27"
  revision: "1.0"

class KELVIN_VIEW
  inherit TEMPERATURE_VIEW

create make

--------------------------------------------------------------------------------
feature -- Updating

up_to_date_with_subject: BOOLEAN
  -- is this observer up to date with its subject
  do
    Result := delta( view_temperature
                   , kelvin_sensor.temperature
                   , .001)
  ensure then
  	Result = delta( view_temperature
  	              , kelvin_sensor.temperature
  	              , .001)
  end

--------------------------------------------------------------------------------
feature -- Commands

print_message
  do
    print( "Kelvin temperature is "
         + view_temperature.out + "%N")
  end

--------------------------------------------------------------------------------
feature -- Conversion

convert_from_kelvin
  -- Convert Kelvin degrees to Fahrenheit degrees
  do
  	view_temperature := kelvin_sensor.temperature
  end

end
