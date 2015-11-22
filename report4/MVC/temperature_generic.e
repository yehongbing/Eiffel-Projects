note
	description: "Summary description for {TEMPERATURE_GENERIC}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TEMPERATURE_GENERIC
	inherit OBSERVER
		rename
			subject as martian_sensor
			redefine martian_sensor
		end


--------------------------------------------------------------------------------
feature -- Representation

martian_sensor: MARTIAN_TEMPERATURE_CONTROLLER -- Subject that we are viewing
view_temperature: REAL  -- kelvin displayed as view_temperature scale degrees


--------------------------------------------------------------------------------
feature -- Update

update
	do
		convert_from_martian
	end

feature -- Conversion

convert_from_martian
    -- Convert Martan degrees to view_temperature scale degrees
	deferred
	ensure
   		up_to_date_with_subject
	end



end
