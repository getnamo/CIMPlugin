#pragma once

#include "CoreUObject.h"
#include "CIMBluePrintLibrary.generated.h"

UCLASS()
class UCIMBluePrintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	/**
	 * Sends press event to the specified custom button
	 *
	 * @param ButtonID (in) the button you wish to execute the event. Valid range is 1-12.
	 */
	UFUNCTION(BlueprintCallable, Category = "Custom Input Mapping (cim)")
	static void CustomPressButton(int32 ButtonID=1);

	/**
	 * Sends release event to the specified custom button
	 *
	 * @param ButtonID (in) the button you wish to execute the event. Valid range is 1-12.
	 */
	UFUNCTION(BlueprintCallable, Category = "Custom Input Mapping (cim)")
	static void CustomReleaseButton(int32 ButtonID=1);


	/**
	 * Updates the specified custom axis with the new float value.
	 *
	 * @param AxisID (in) Axis ID for event. Valid range is 1-12. ID's 1-6 relates to Custom Axis 1-6, ID's 7-9 to Custom Axis X-Z, and ID's 10-12 to Custom Axis Pitch,Yaw, and Roll.
	 * @param Value (in) New value
	 */
	UFUNCTION(BlueprintCallable, Category = "Custom Input Mapping (cim)")
	static void CustomSetAxisValue(int32 AxisID=1, float Value=0.f);
};