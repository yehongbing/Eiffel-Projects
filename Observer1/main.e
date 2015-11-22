note
  description: "System's root class"
  author: "Gunnar Gotshalks"
  date: "2006 October 28"

class MAIN

create make

--------------------------------------------------------------------------------
feature -- Initialization

make
  do
    create k_model.make
    create f_view.make(k_model)
    create c_view.make(k_model)
    create k_view.make(k_model)
    create f2_view.make(k_model)
    print("Four views -- duplicate Farenheit to get fourth view%N"
         + "Increase from 0 Celcius to 15 Celcius in 5 degree increments%N%N")
    simulate_temp_changes(273.18)

    k_model.detach (f_view)
    print("%N-------%N"
         + "Detach first farenheit view and repeat previous run%N%N")
    simulate_temp_changes(273.18)

  end

simulate_temp_changes(starting_temp : REAL)
    -- Set model temperature to staring_temp and display all views for that
    -- temperature and the next three temperatures in 5 Celcius degree intervals.
  local i: INTEGER -- Loop index
  do
    from
      i := 1
      k_model.set_temperature (starting_temp)
    until i > 3
    loop
      print("%N")
      k_model.set_temperature (k_model.temperature + 5)
      i := i + 1
    end
  end
--------------------------------------------------------------------------------
feature {NONE} -- Model & Views

k_model: KELVIN_MODEL
f_view: FAHRENHEIT_VIEW
c_view: CENTIGRADE_VIEW
k_view: KELVIN_VIEW
f2_view: FAHRENHEIT_VIEW

end
