#pragma once

struct EKeysCIM
{
	//Buttons
	static const FKey CustomButton1;
	static const FKey CustomButton2;
	static const FKey CustomButton3;
	static const FKey CustomButton4;
	static const FKey CustomButton5;
	static const FKey CustomButton6;
	static const FKey CustomButton7;
	static const FKey CustomButton8;
	static const FKey CustomButton9;
	static const FKey CustomButton10;
	static const FKey CustomButton11;
	static const FKey CustomButton12;

	//Axis
	static const FKey CustomAxis1;
	static const FKey CustomAxis2;
	static const FKey CustomAxis3;
	static const FKey CustomAxis4;
	static const FKey CustomAxis5;
	static const FKey CustomAxis6;

	static const FKey CustomAxisX;
	static const FKey CustomAxisY;
	static const FKey CustomAxisZ;

	static const FKey CustomAxisPitch;
	static const FKey CustomAxisYaw;
	static const FKey CustomAxisRoll;

	static const FKey Unknown;
};

class FCIMPlugin : public ICIMPlugin
{
public:
	/** IModuleInterface implementation */
	void StartupModule();
	void ShutdownModule();

	//Custom Input Mapping Forwarding
	void PressButton(int buttonID);
	void ReleaseButton(int buttonID);

	void SetAxisValue(int axisID, float value);
};