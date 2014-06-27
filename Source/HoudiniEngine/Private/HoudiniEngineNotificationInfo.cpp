/*
 * PROPRIETARY INFORMATION.  This software is proprietary to
 * Side Effects Software Inc., and is not to be reproduced,
 * transmitted, or disclosed in any way without written permission.
 *
 * Produced by:
 *      Mykola Konyk
 *      Side Effects Software Inc
 *      123 Front Street West, Suite 1401
 *      Toronto, Ontario
 *      Canada   M5J 2M2
 *      416-504-9876
 *
 */

#include "HoudiniEnginePrivatePCH.h"


FHoudiniEngineNotificationInfo::FHoudiniEngineNotificationInfo() :
	FNotificationInfo(FText()),
	bScheduledRemoved(0),
	bScheduledUpdate(0)
{

}

FHoudiniEngineNotificationInfo::FHoudiniEngineNotificationInfo(const FText& InText) :
	FNotificationInfo(InText),
	bScheduledRemoved(0),
	bScheduledUpdate(0)
{

}
