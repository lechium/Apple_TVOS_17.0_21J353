//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCSonyDualSenseControllerProfile : NSObject
{
}

+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;	// IMP=0x001000000005967b
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;	// IMP=0x00100000000594bf
+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x0010000000059462
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x001000000005937d
+ (void)physicalDevice:(id)arg1 getAdaptiveTriggersStatusesWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000059098
+ (void)physicalDevice:(id)arg1 setAdaptiveTriggersPayload:(id)arg2 forIndex:(int)arg3;	// IMP=0x001000000005897e
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058721
+ (void)physicalDevice:(id)arg1 setSensorsActive:(_Bool)arg2;	// IMP=0x00100000000586d4
+ (void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000584a4
+ (_Bool)physicalDeviceSupportsMotion:(id)arg1;	// IMP=0x001000000005849c
+ (void)physicalDevice:(id)arg1 setLight:(id)arg2;	// IMP=0x0010000000058394
+ (void)physicalDevice:(id)arg1 getLightWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000580f1
+ (id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2;	// IMP=0x0010000000058076
+ (id)logicalDevice:(id)arg1 makeControllerInputDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;	// IMP=0x0010000000056507
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x00100000000563bc
+ (id)logicalDeviceControllerDetailedProductCategory:(id)arg1;	// IMP=0x00100000000562e6
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x00100000000562d2
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;	// IMP=0x00100000000562ba
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;	// IMP=0x00100000000562a2
+ (id)deviceManager;	// IMP=0x0010000000056174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
