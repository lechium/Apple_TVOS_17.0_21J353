//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAppleMediaAccessory, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryPowerAction
{
    HMDAppleMediaAccessory *_accessory;	// 8 = 0x8
    unsigned long long _targetSleepWakeState;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b1f2c9
+ (id)logCategory;	// IMP=0x0010000000b1f299
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x0010000000b1ed9a
- (void).cxx_destruct;	// IMP=0x0000000000b1ebff
@property(nonatomic) unsigned long long targetSleepWakeState; // @synthesize targetSleepWakeState=_targetSleepWakeState;
@property(nonatomic) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
- (id)attributeDescriptions;	// IMP=0x0000000000b1ea86
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b1e995
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b1e72f
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000b1e729
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000b1e29f
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x0000000000b1e12a
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b1da4b
@property(readonly) Class modelClass;
- (_Bool)isStaleWithAccessory:(id)arg1;	// IMP=0x0000000000b1da39
- (_Bool)isCompatibleWithAction:(id)arg1;	// IMP=0x0000000000b1d987
- (_Bool)isUnsecuringAction;	// IMP=0x0000000000b1d97f
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x0000000000b1d8e2
- (id)associatedAccessories;	// IMP=0x0000000000b1d84a
- (_Bool)requiresDeviceUnlock;	// IMP=0x0000000000b1d842
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b1d564
- (id)dictionaryRepresentation;	// IMP=0x0000000000b1d3fe
- (id)stateDump;	// IMP=0x0000000000b1d352
- (unsigned long long)type;	// IMP=0x0000000000b1d347
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 targetSleepWakeState:(unsigned long long)arg3 actionSet:(id)arg4;	// IMP=0x0000000000b1d2ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly) Class superclass;

@end
