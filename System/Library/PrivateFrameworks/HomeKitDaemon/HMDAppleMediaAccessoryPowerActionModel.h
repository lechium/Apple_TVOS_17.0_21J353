//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryPowerActionModel
{
}

+ (id)properties;	// IMP=0x0010000000b1d0d2
+ (Class)cd_entityClass;	// IMP=0x0010000000a0d09e
- (void)loadModelWithActionInformation:(id)arg1;	// IMP=0x0000000000b1cff8
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000a0cf47
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000a0ce30

// Remaining properties
@property(retain, nonatomic) NSUUID *accessoryUUID; // @dynamic accessoryUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *targetSleepWakeState; // @dynamic targetSleepWakeState;

@end
