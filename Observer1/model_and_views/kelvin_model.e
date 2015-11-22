note
  description: "Objects that represent a temperature sensor in degrees Kelvin"
  author: "Gunnar Gotshalks"
  date: "2006 October 28"

class  KELVIN_MODEL

inherit
  SUBJECT rename make as subject_make end

create make

--------------------------------------------------------------------------------
feature{NONE} -- Initialization

make -- a temperature sensor initially at 0 degrees Kelvin
  do  subject_make
  ensure -- from SENSOR
    -- Invariant ensures correct temperature
  end

feature -- Access

temperature: REAL -- of the sensor

feature -- Element change

set_temperature (a_value: REAL)
  -- Set sensor 'temperature' to 'a_value'.
  require a_value_within_bounds: a_value >= 0
  do
    temperature := a_value
    notify
  ensure temp_assigned: temperature = a_value
  end

invariant
  temp_non_negative: temperature >= 0

end
