#include "CIMBluePrintLibrary.h"
#include "CIMPluginPrivatePCH.h"
#include "CIMBluePrintLibrary.h"
#include "ICIMPlugin.h"


UCIMBluePrintLibrary::UCIMBluePrintLibrary(const FObjectInitializer& PCIP)
: Super(PCIP)
{
}

void UCIMBluePrintLibrary::CustomPressButton(int32 buttonID)
{
	if (ICIMPlugin::IsAvailable())
	{
		ICIMPlugin::Get().PressButton(buttonID);
	}
}

void UCIMBluePrintLibrary::CustomReleaseButton(int32 buttonID)
{
	if (ICIMPlugin::IsAvailable())
	{
		ICIMPlugin::Get().ReleaseButton(buttonID);
	}
}

void UCIMBluePrintLibrary::CustomSetAxisValue(int32 axisID, float value)
{
	if (ICIMPlugin::IsAvailable())
	{
		ICIMPlugin::Get().SetAxisValue(axisID, value);
	}
}