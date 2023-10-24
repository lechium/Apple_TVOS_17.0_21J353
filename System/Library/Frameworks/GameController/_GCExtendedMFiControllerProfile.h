//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCExtendedMFiControllerProfile : NSObject
{
}

+ (void)determineCapabilitiesWithServiceInfo:(id)arg1 initInfo:(CDStruct_fc41fe5e *)arg2;	// IMP=0x0010000000053f1e
+ (void)populateInitInfo:(CDStruct_fc41fe5e *)arg1 forLogicalDevice:(id)arg2;	// IMP=0x0010000000053e5e
+ (id)logicalDevice:(id)arg1 makeControllerInputDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;	// IMP=0x001000000005191f
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x0010000000051828
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x0010000000051814
+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;	// IMP=0x00100000000517aa
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;	// IMP=0x001000000005179d
+ (_Bool)physicalDeviceUsesACHomeForMenu:(id)arg1;	// IMP=0x00100000000516a2
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;	// IMP=0x001000000005168a
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;	// IMP=0x0010000000051672
+ (id)deviceManager;	// IMP=0x0010000000051544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
