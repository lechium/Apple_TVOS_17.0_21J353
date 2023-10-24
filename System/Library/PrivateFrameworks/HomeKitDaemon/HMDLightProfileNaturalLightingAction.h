//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDLightProfile, NSArray, NSNotificationCenter, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDLightProfileNaturalLightingAction
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _naturalLightingEnabled;	// 12 = 0xc
    HMDLightProfile *_lightProfile;	// 16 = 0x10
    NSUUID *_lightProfileUUID;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
    NSArray *_lightServices;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00600000005b92fb
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x00600000005b8dc0
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000005b8db8
+ (id)actionWithDictionaryRepresentation:(id)arg1 actionSet:(id)arg2;	// IMP=0x00600000005b8af7
- (void).cxx_destruct;	// IMP=0x00000000005b89a7
@property(retain, nonatomic) NSArray *lightServices; // @synthesize lightServices=_lightServices;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy) NSUUID *lightProfileUUID; // @synthesize lightProfileUUID=_lightProfileUUID;
- (id)attributeDescriptions;	// IMP=0x00000000005b8759
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000005b7ed3
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x00000000005b7aa8
- (Class)modelClass;	// IMP=0x00000000005b7a97
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;	// IMP=0x00000000005b74df
- (void)handleAccessoryProfileAddedNotification:(id)arg1;	// IMP=0x00000000005b719e
- (id)stateDump;	// IMP=0x00000000005b718c
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000005b7087
- (id)dictionaryRepresentation;	// IMP=0x00000000005b6f4f
- (unsigned long long)type;	// IMP=0x00000000005b6f44
- (_Bool)isActionForCharacteristic:(id)arg1;	// IMP=0x00000000005b6e65
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005b6cf0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005b6920
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property(retain) HMDLightProfile *lightProfile; // @synthesize lightProfile=_lightProfile;
- (id)writeRequestForTransitionStartWithLightProfile:(id)arg1 startDate:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x00000000005b6779
- (_Bool)isUnsecuringAction;	// IMP=0x00000000005b6771
- (id)associatedAccessories;	// IMP=0x00000000005b66b6
- (_Bool)isStaleWithAccessory:(id)arg1;	// IMP=0x00000000005b65a1
- (_Bool)isCompatibleWithAction:(id)arg1;	// IMP=0x00000000005b64e0
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x00000000005b6424
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3 actionSet:(id)arg4;	// IMP=0x00000000005b6368
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3 actionSet:(id)arg4 notificationCenter:(id)arg5;	// IMP=0x00000000005b6217

@end
