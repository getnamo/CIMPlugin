#include "CIMPluginPrivatePCH.h"

#include "ICIMPlugin.h"
#include "FCIMPlugin.h"
#include "Slate.h"

IMPLEMENT_MODULE(FCIMPlugin, CIMPlugin)

#define LOCTEXT_NAMESPACE "CIMPlugin"

//Private API - This is where the magic happens

//Define each FKey const in a .cpp so we can compile
const FKey EKeysCIM::CustomButton1("CustomButton1");
const FKey EKeysCIM::CustomButton2("CustomButton2");
const FKey EKeysCIM::CustomButton3("CustomButton3");
const FKey EKeysCIM::CustomButton4("CustomButton4");
const FKey EKeysCIM::CustomButton5("CustomButton5");
const FKey EKeysCIM::CustomButton6("CustomButton6");
const FKey EKeysCIM::CustomButton7("CustomButton7");
const FKey EKeysCIM::CustomButton8("CustomButton8");
const FKey EKeysCIM::CustomButton9("CustomButton9");
const FKey EKeysCIM::CustomButton10("CustomButton10");
const FKey EKeysCIM::CustomButton11("CustomButton11");
const FKey EKeysCIM::CustomButton12("CustomButton12");
const FKey EKeysCIM::CustomAxis1("CustomAxis1");
const FKey EKeysCIM::CustomAxis2("CustomAxis2");
const FKey EKeysCIM::CustomAxis3("CustomAxis3");
const FKey EKeysCIM::CustomAxis4("CustomAxis4");
const FKey EKeysCIM::CustomAxis5("CustomAxis5");
const FKey EKeysCIM::CustomAxis6("CustomAxis6");
const FKey EKeysCIM::CustomAxisX("CustomAxisX");
const FKey EKeysCIM::CustomAxisY("CustomAxisY");
const FKey EKeysCIM::CustomAxisZ("CustomAxisZ");
const FKey EKeysCIM::CustomAxisPitch("CustomAxisPitch");
const FKey EKeysCIM::CustomAxisYaw("CustomAxisYaw");
const FKey EKeysCIM::CustomAxisRoll("CustomAxisRoll");

const FKey EKeysCIM::Unknown("Unknown");	//this key is never added or registered, only used to absorb wrong inputs


//Init and Runtime
void FCIMPlugin::StartupModule()
{
	//Register all input mapping keys and axes
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton1, LOCTEXT("CustomButton1", "Custom Button 1"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton2, LOCTEXT("CustomButton2", "Custom Button 2"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton3, LOCTEXT("CustomButton3", "Custom Button 3"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton4, LOCTEXT("CustomButton4", "Custom Button 4"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton5, LOCTEXT("CustomButton5", "Custom Button 5"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton6, LOCTEXT("CustomButton6", "Custom Button 6"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton7, LOCTEXT("CustomButton7", "Custom Button 7"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton8, LOCTEXT("CustomButton8", "Custom Button 8"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton9, LOCTEXT("CustomButton9", "Custom Button 9"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton10, LOCTEXT("CustomButton10", "Custom Button 10"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton11, LOCTEXT("CustomButton11", "Custom Button 11"), FKeyDetails::GamepadKey));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomButton12, LOCTEXT("CustomButton12", "Custom Button 12"), FKeyDetails::GamepadKey));

	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxis1, LOCTEXT("CustomAxis1", "Custom Axis 1"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxis2, LOCTEXT("CustomAxis2", "Custom Axis 2"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxis3, LOCTEXT("CustomAxis3", "Custom Axis 3"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxis4, LOCTEXT("CustomAxis4", "Custom Axis 4"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxis5, LOCTEXT("CustomAxis5", "Custom Axis 5"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxis6, LOCTEXT("CustomAxis6", "Custom Axis 6"), FKeyDetails::FloatAxis));

	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxisX, LOCTEXT("CustomAxisX", "Custom Axis X"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxisY, LOCTEXT("CustomAxisY", "Custom Axis Y"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxisZ, LOCTEXT("CustomAxisZ", "Custom Axis Z"), FKeyDetails::FloatAxis));

	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxisPitch, LOCTEXT("CustomAxisPitch", "Custom Axis Pitch"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxisYaw, LOCTEXT("CustomAxisYaw", "Custom Axis Yaw"), FKeyDetails::FloatAxis));
	EKeys::AddKey(FKeyDetails(EKeysCIM::CustomAxisRoll, LOCTEXT("CustomAxisRoll", "Custom Axis Roll"), FKeyDetails::FloatAxis));
}

#undef LOCTEXT_NAMESPACE

void FCIMPlugin::ShutdownModule()
{
}

FKey GetFKeyForButtonID(int button)
{
	switch (button){
	case 1:
		return EKeysCIM::CustomButton1;
		break;
	case 2:
		return EKeysCIM::CustomButton2;
		break;
	case 3:
		return EKeysCIM::CustomButton3;
		break;
	case 4:
		return EKeysCIM::CustomButton4;
		break;
	case 5:
		return EKeysCIM::CustomButton5;
		break;
	case 6:
		return EKeysCIM::CustomButton6;
		break;
	case 7:
		return EKeysCIM::CustomButton7;
		break;
	case 8:
		return EKeysCIM::CustomButton8;
		break;
	case 9:
		return EKeysCIM::CustomButton9;
		break;
	case 10:
		return EKeysCIM::CustomButton10;
		break;
	case 11:
		return EKeysCIM::CustomButton11;
		break;
	case 12:
		return EKeysCIM::CustomButton1;
		break;
	default:
		return EKeysCIM::Unknown;
		break;
	}
}

FKey GetFKeyForAxisID(int axis)
{
	switch (axis){
	case 1:
		return EKeysCIM::CustomAxis1;
		break;
	case 2:
		return EKeysCIM::CustomAxis2;
		break;
	case 3:
		return EKeysCIM::CustomAxis3;
		break;
	case 4:
		return EKeysCIM::CustomAxis4;
		break;
	case 5:
		return EKeysCIM::CustomAxis5;
		break;
	case 6:
		return EKeysCIM::CustomAxis6;
		break;
	case 7:
		return EKeysCIM::CustomAxisX;
		break;
	case 8:
		return EKeysCIM::CustomAxisY;
		break;
	case 9:
		return EKeysCIM::CustomAxisZ;
		break;
	case 10:
		return EKeysCIM::CustomAxisPitch;
		break;
	case 11:
		return EKeysCIM::CustomAxisYaw;
		break;
	case 12:
		return EKeysCIM::CustomAxisRoll;
		break;
	default:
		return EKeysCIM::Unknown;
		break;
	}
}

//buttons 1-12 are valid
void FCIMPlugin::PressButton(int button)
{
	FKey key = GetFKeyForButtonID(button);
	if (key != EKeysCIM::Unknown)
		FSlateApplication::Get().OnControllerButtonPressed(key, 0, 0);
}
void FCIMPlugin::ReleaseButton(int button)
{
	FKey key = GetFKeyForButtonID(button);
	if (key != EKeysCIM::Unknown)
		FSlateApplication::Get().OnControllerButtonReleased(key, 0, 0);
}

void FCIMPlugin::SetAxisValue(int axisID, float value)
{
	FKey key = GetFKeyForAxisID(axisID);
	if (key != EKeysCIM::Unknown)
		FSlateApplication::Get().OnControllerAnalog(key, 0, value);
}
