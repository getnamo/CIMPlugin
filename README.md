UE4 Custom Input Mapping
=======

A simple plugin exposing 12 axes and 12 buttons for custom input mapping.

## Quick Setup ##
1. Create new or open a project. 
2. Browse to your project (typically found at *Documents/Unreal Project/{Your Project Root}*)
3. Copy the plugin folder into your *{Project root}/Plugins* folder, create if missing.
5. Reopen your project again.
6. Select Window->Plugins. Click on Installed and you should see a category called Input and a plugin called Custom Input Mapping Plugin now available and enabled. (If it isn't automatically enabled, select Enabled. The editor will warn you to restart, click restart.)
7. The plugin should be enabled and ready to use. 

## Usage ##

### Setting up Custom Input Mapping

1. In a blueprint where you have access to the value you wish to expose to an axis or an event that you wish to trigger button, right click on graph.
2. type "cim" to narrow to functions related to this plugin.
3. a)If you want to set an axis select the node "Custom Set Axis Value".
4. a)Select an AxisID. Valid input is 1-12, where 1-6 relates to Custom Axis 1-6, 7-9 relates to Custom Axis X,Y, & Z, and 10-12 relates to Custom Axis Pitch, Yaw, and Roll. Feed in the new axis value to the Value parameter.
3. b)If you want to cause a button event select the node "Custom Press Button" or "Custom Release Button"
4. b)Select a ButtonID. Valid input is 1-12.
5. Your custom input is now forwarded to the custom input mapping events and they will properly emit button press/release events and update axis values all of which is available in a global context.


### Using Input Mapping ###

 1.	For a good example start with a template project.
 3.	Select Edit->Project Settings.
 4.	Select Engine->Input
 5.	Under Action Mappings and Axis Mappings expand the category you wish to add custom input to. For example if you want to add Forward motion in the standard 3rd person template, click the + sign in MoveForward.
 6.	Change None to the binding you want and adjust the scale to fit. The CIM events should be near the bottom.
 7.	Play and test your scaling adjust as needed.

(Optional) Use key and axis events in any input derived class blueprint (such as controller or a possessed pawn). Note note that any events you override will cause Engine->Input mapping to stop working for that bind.
