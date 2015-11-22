note
	description: "View Controller for a graph"
  author: "G.J. Gotshalks"
  date: "2013 January 7"
  revision: "V1.0"

class FUNCTION_GRAPH_VC

create make

--------------------------------------------------------------------------------
feature -- Communications

delegate: CALCULATOR_VIEW_CONTROLLER
dataSource: CALCULATOR_VIEW_CONTROLLER

--------------------------------------------------------------------------------
feature -- Objects

fontToUse: EV_FONT
font_const: EV_FONT_CONSTANTS
graphArea: EV_DRAWING_AREA
height: INTEGER
width:INTEGER
labelFunction: EV_LABEL

--------------------------------------------------------------------------------
feature -- Constants

point_size_18: INTEGER = 18

--------------------------------------------------------------------------------
feature {NONE} -- Creation

make (view : EV_VERTICAL_BOX;
      theDelegate: CALCULATOR_VIEW_CONTROLLER
      theDataSource: CALCULATOR_VIEW_CONTROLLER)
    --
  local
    button: EV_BUTTON
    horizontalBox: EV_HORIZONTAL_BOX
  do
  	delegate := theDelegate
  	dataSource := theDataSource
  	create font_const
  	create fontToUse.make_with_values (font_const.Family_typewriter,
                                       font_const.weight_bold,
                                       font_const.shape_regular,
                                       point_size_18)
    view.wipe_out
    create horizontalBox
      horizontalBox.set_background_color (create {EV_COLOR}.make_with_rgb(0,0,1))
    create button.make_with_text_and_action ("Calculator Pad",
             agent delegate.returnFromGraphVC)
      addButtonToBox(button, horizontalBox)
      horizontalBox.disable_item_expand (button)
    view.extend (horizontalBox)
    view.disable_item_expand (horizontalBox)

    create labelFunction.make_with_text ("y = ???")
      labelFunction.set_background_color (create {EV_COLOR}.make_with_rgb(1,1,0))
      addLabelToBox(labelFunction, view)
    create graphArea
      view.extend (graphArea)

    graphArea.clear
    height := graphArea.height
    width := graphArea.width
  end

--------------------------------------------------------------------------------
feature {NONE} -- Support

plotGraph
  local
    xView, prevXview: INTEGER
    yView, prevYview: INTEGER
    scale: REAL
    xValue, xValueMin, xValueMax, xIncrement: REAL
    yValue,yValueMin, yValueMax : REAL
  do
    graphArea.set_foreground_color (create {EV_COLOR}.make_with_rgb(0,1,0))
    graphArea.set_line_width (2)
    scale := 10/width.to_real
    xValueMin := -width.to_real/2 * scale
    xValueMax := -xValueMin
    xValue := xValueMin
    xIncrement := (xValueMax - xValueMin)/width
    yValueMax := xIncrement * height/2
    yValueMin := -yValueMax

    from
      prevXview := 0
      prevYview := (height*(yValueMax - dataSource.getYvalueForXvalue (xValueMin))
                   /(yValueMax - yValueMin)).truncated_to_integer
    until xValue > xValueMax
    loop
      xView := xView + 1
      xValue := xValue + xIncrement
    	yValue := dataSource.getYvalueForXvalue (xValue)
    	yView := (height*(yValueMax - yValue)/(yValueMax - yValueMin)).truncated_to_integer
      graphArea.draw_segment (prevXView, prevYview, xView, yView)
      prevXview := xView
      prevYview := yView
    end
  end

drawAxis
  do
    graphArea.draw_segment(width//2, 0, width//2, height)
    graphArea.draw_segment(0, height//2, width, height//2)
  end

addButtonToBox(label: EV_BUTTON; box: EV_BOX)
  do
    label.set_font (fontToUse)
    box.extend (label)
  end

addLabelToBox(label: EV_LABEL; box: EV_BOX)
  do
    label.set_font (fontToUse)
    box.extend (label)
    box.disable_item_expand (label)
  end

--------------------------------------------------------------------------------
feature -- Exported

load_view
  do
  	labelFunction.set_text("y = " + dataSource.getFunctionDescription)
    drawAxis
    plotGraph
  end
end
