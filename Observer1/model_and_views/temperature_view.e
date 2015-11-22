note
  description: "Abstract view for temperatures"
  author: "Jonathan S. Ostroff"
  date: "2003 Feb. 27"
  revised_by: "Gunnar Gotsahlks"
  date_revision: "2010 February 15"
  revision: "2.0"

deferred class TEMPERATURE_VIEW
  inherit OBSERVER
   rename update as display, subject as kelvin_sensor
   redefine kelvin_sensor, make
   end

--------------------------------------------------------------------------------
feature -- Representation

kelvin_sensor: KELVIN_MODEL -- Subject that we are viewing
view_temperature: REAL    -- kelvin displayed as view_temperature scale degrees

--------------------------------------------------------------------------------
feature {NONE} -- Initialization

make (km: KELVIN_MODEL)
    -- a view of temperature
  do
  	Precursor(km)
    convert_from_kelvin
  end

--------------------------------------------------------------------------------
feature -- Updating

display
    -- update view of subject
  do
    convert_from_kelvin
    print_message
  end

--------------------------------------------------------------------------------
feature -- Commands

print_message
    -- Print the temperature in the current scale
  deferred
  end

--------------------------------------------------------------------------------
feature -- Conversion

convert_from_kelvin
    -- Convert Kelvin degrees to view_temperature scale degrees
  deferred
  ensure
    up_to_date_with_subject
  end

--------------------------------------------------------------------------------
feature {NONE} -- Query

delta(x,y,e:REAL):BOOLEAN
    -- difference between 'x' and 'y' to some epsilon 'e'
  do
    Result := (x-y).abs <= e
  ensure
    Result = ((x-y).abs <= e)
  end

end
