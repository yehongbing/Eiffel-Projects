note
  description: "Objects that are spacelings greeting earthlings."
  author: "G.J. Gotshalks"
  date: "2013 January 7"
  revision: "V1.0"

class SPACELING
  inherit ANY
          redefine default_create end

--------------------------------------------------------------------------------
feature -- Objects

-- Widget containing then drawing area.

widget: EV_WIDGET
labelFiller: EV_LABEL
backgroundColor: EV_COLOR
foregroundColor: EV_COLOR
font_const: EV_FONT_CONSTANTS
nameTextfield: EV_TEXT_FIELD
labelHello: EV_LABEL

--------------------------------------------------------------------------------
feature {NONE} -- Creation

default_create
    -- Create `Current' by a label, a button and a text area into the `widget'.
  local
    vertical_box: EV_VERTICAL_BOX
    horizontal_box: EV_HORIZONTAL_BOX
    point_size_18: INTEGER
    labelGreetings: EV_LABEL
    labelWhat: EV_LABEL
    labelAsk: EV_LABEL
    buttonSayHello: EV_BUTTON
  do
    create backgroundColor.make_with_rgb (1, 1, 0.8)
    create font_const
    point_size_18 := 18

    create vertical_box
    create labelGreetings.make_with_text ("Greetings Earthling")
      setLabelFont(labelGreetings)
      labelGreetings.set_background_color (backgroundColor)
      create foregroundColor.make_with_rgb (1,0,0)
      labelGreetings.set_foreground_color (foregroundColor)
      vertical_box.extend (labelGreetings)

    create labelWhat.make_with_text ("What is your name?")
      setLabelFont(labelWhat)
      labelWhat.set_background_color (backgroundColor)
      create foregroundColor.make_with_rgb (0,1,1)
      labelWhat.set_foreground_color (foregroundColor)
      vertical_box.extend (labelWhat)

    create horizontal_box
    horizontal_box.extend (createLabelFiller)
    create nameTextfield
      nameTextfield.set_font (create {EV_FONT}.make_with_values
                                                 (font_const.Family_roman,
                                                  font_const.weight_bold,
                                                  font_const.shape_regular,
                                                  point_size_18))
    horizontal_box.extend (nameTextfield)
    horizontal_box.extend (createLabelFiller)
    vertical_box.extend (horizontal_box)

    create labelAsk.make_with_text ("Ask me to say hello")
      setLabelFont(labelAsk)
      labelAsk.set_background_color (backgroundColor)
      create foregroundColor.make_with_rgb (0,1,0)
      labelAsk.set_foreground_color (foregroundColor)
      vertical_box.extend (labelAsk)

    create horizontal_box
    horizontal_box.extend (createLabelFiller)
    create buttonSayHello.make_with_text_and_action ("Say Hello",
                                                     agent sayHelloPressed)
      buttonSayHello.set_font (create {EV_FONT}.make_with_values
      																					 (font_const.Family_roman,
                                                  font_const.weight_bold,
                                                  font_const.shape_regular,
                                                  point_size_18))
    horizontal_box.extend (buttonSayHello)
    horizontal_box.extend (createLabelFiller)
    vertical_box.extend (horizontal_box)

    create labelHello.default_create
      setLabelFont(labelHello)
      labelHello.set_background_color (backgroundColor)
      vertical_box.extend (labelHello)

      vertical_box.extend (createLabelFiller)

    widget := vertical_box
  end

--------------------------------------------------------------------------------
feature -- Actions

sayHelloPressed
  do
    if nameTextField.text.count >0 then
        labelHello.set_text ("Hello " + nameTextField.text)
        create foregroundColor.make_with_rgb (0,0,1)
    else
        labelHello.set_text ("No name, no greeting")
        create foregroundColor.make_with_rgb (1,0,0)
    end
    labelHello.set_foreground_color (foregroundColor)
  end

--------------------------------------------------------------------------------
feature -- Support

setLabelFont(label: EV_LABEL)
  local point_size_18: INTEGER
  do
    point_size_18 := 18
    label.set_font (create {EV_FONT}.make_with_values (font_const.Family_roman,
                                                       font_const.weight_bold,
                                                       font_const.shape_regular,
                                                       point_size_18))
  end

createlabelFiller : EV_LABEL
  do
    create Result.default_create
    Result.set_background_color (backgroundColor)
  end

--------------------------------------------------------------------------------
feature {APPLICATION} -- Initialization

initialize
  do
  end

end
