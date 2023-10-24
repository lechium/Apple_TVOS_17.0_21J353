//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicMetadata, HMDHAPAccessory, HMDService, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCharacteristic : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_notificationRegistrations;	// 16 = 0x10
    _Bool _notificationRegisteredWithRemoteGateway;	// 24 = 0x18
    _Bool _broadcastNotificationEnabled;	// 25 = 0x19
    NSSet *_hapCharacteristicTuples;	// 32 = 0x20
    id _previousValue;	// 40 = 0x28
    NSNumber *_stateNumber;	// 48 = 0x30
    HMDCharacteristicMetadata *_metadata;	// 56 = 0x38
    id _lastKnownValue;	// 64 = 0x40
    NSDate *_lastKnownValueUpdateTime;	// 72 = 0x48
    NSDate *_notificationEnabledTime;	// 80 = 0x50
    NSData *_notificationContext;	// 88 = 0x58
    NSData *_authorizationData;	// 96 = 0x60
    HMDHAPAccessory *_accessory;	// 104 = 0x68
    HMDService *_service;	// 112 = 0x70
    NSString *_characteristicType;	// 120 = 0x78
    NSNumber *_characteristicInstanceID;	// 128 = 0x80
    long long _characteristicProperties;	// 136 = 0x88
}

+ (id)currentTargetStateCharacteristicTypeMap;	// IMP=0x0010000000614910
+ (id)logCategory;	// IMP=0x00100000006148e0
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006148d8
+ (_Bool)value:(id)arg1 differentThan:(id)arg2;	// IMP=0x00100000006148c5
+ (CDUnknownBlockType)sortComparatorForCharacteristicDictionary;	// IMP=0x00100000006148b8
- (void).cxx_destruct;	// IMP=0x000000000061476d
@property(nonatomic) long long characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(nonatomic) _Bool broadcastNotificationEnabled; // @synthesize broadcastNotificationEnabled=_broadcastNotificationEnabled;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
- (id)attributeDescriptions;	// IMP=0x00000000006140a1
- (id)logIdentifier;	// IMP=0x0000000000613f56
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000613578
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000612fa0
- (id)contextDataForWriteRequestWithIdentifier:(id)arg1;	// IMP=0x0000000000612d1b
@property(readonly) _Bool supportsNotificationContext;
@property(readonly) _Bool shouldIgnoreCacheValueForRead;
- (void)updateService:(id)arg1 accessory:(id)arg2;	// IMP=0x00000000006128ce
- (_Bool)deregisterNotificationForClientIdentifier:(id)arg1;	// IMP=0x0000000000612871
- (_Bool)deregisterNotificationIfNotLastForClientIdentifier:(id)arg1;	// IMP=0x0000000000612857
- (void)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2;	// IMP=0x000000000061283f
- (_Bool)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2 removeLast:(_Bool)arg3;	// IMP=0x0000000000612529
@property(retain, nonatomic) NSDate *notificationEnabledTime; // @synthesize notificationEnabledTime=_notificationEnabledTime;
- (_Bool)isNotificationEnabledForClientIdentifierPrefix:(id)arg1;	// IMP=0x0000000000612291
- (id)localClientIdentifiersWithNotificationsEnabled;	// IMP=0x0000000000612197
- (_Bool)isNotificationEnabledForClientIdentifier:(id)arg1;	// IMP=0x0000000000612121
- (_Bool)isNonClientNotificationEnabled;	// IMP=0x0000000000611fd3
- (_Bool)isNonBulletinNotificationEnabled;	// IMP=0x0000000000611e54
- (_Bool)isNonHomeNotificationsEnabled;	// IMP=0x0000000000611cc6
- (_Bool)isClientNotificationEnabled;	// IMP=0x0000000000611b78
- (_Bool)isNotificationEnabled;	// IMP=0x0000000000611b30
- (_Bool)supportsWrite;	// IMP=0x0000000000611b1b
- (_Bool)supportsRead;	// IMP=0x0000000000611b07
- (_Bool)supportsNotification;	// IMP=0x0000000000611af5
- (id)validateValue:(id)arg1 outValue:(id *)arg2;	// IMP=0x00000000006119cf
- (id)validateValueForNotify:(id)arg1 outValue:(id *)arg2;	// IMP=0x0000000000611940
- (id)validateValueForWrite:(id)arg1 outValue:(id *)arg2;	// IMP=0x00000000006118b1
- (id)getCharacteristicDictionaryForMigrationFixup;	// IMP=0x000000000061189a
@property(readonly, copy, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(copy, nonatomic, setter=setStateNumber:) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
- (_Bool)isValueUpdatedFromHAPCharacteristic:(id)arg1;	// IMP=0x00000000006112c3
- (void)updateLastKnownValue;	// IMP=0x0000000000610f14
- (void)getLastKnownValueUpdateTime:(id *)arg1 stateNumber:(id *)arg2 notificationContext:(id *)arg3;	// IMP=0x0000000000610e86
- (void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 notificationContext:(id)arg4;	// IMP=0x00000000006108ac
@property(readonly, copy, nonatomic) id value;
@property(readonly, nonatomic) long long properties;
- (id)characteristicForHAPAccessory:(id)arg1;	// IMP=0x000000000061039d
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(readonly, copy, nonatomic) NSString *type;
- (void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2;	// IMP=0x0000000000610222
- (void)unconfigure;	// IMP=0x0000000000610115
- (void)configureWithCharacteristic:(id)arg1;	// IMP=0x000000000060fe14
- (id)_characteristicDictionaryWithAuthData:(_Bool)arg1;	// IMP=0x000000000060fcbc
- (id)getCharacteristicDictionary;	// IMP=0x000000000060fca8
- (_Bool)updateWithDictionary:(id)arg1;	// IMP=0x000000000060f9ac
- (id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2;	// IMP=0x000000000060f7a2
@property(readonly, nonatomic) NSString *serializedIdentifier;
- (id)dumpState;	// IMP=0x000000000060f006
@property(readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
- (id)characteristicTypeDescription;	// IMP=0x000000000060ee71
@property(readonly, copy, nonatomic) NSSet *notificationRegistrations;
- (id)shortDescription;	// IMP=0x000000000060ed5c
@property(retain, nonatomic) NSData *notificationContext; // @synthesize notificationContext=_notificationContext;
@property(retain, nonatomic) NSDate *lastKnownValueUpdateTime; // @synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime;
@property(retain, nonatomic) id lastKnownValue; // @synthesize lastKnownValue=_lastKnownValue;
@property(readonly, nonatomic) HMDCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(retain, nonatomic) NSSet *hapCharacteristicTuples; // @synthesize hapCharacteristicTuples=_hapCharacteristicTuples;
@property(nonatomic) _Bool notificationRegisteredWithRemoteGateway; // @synthesize notificationRegisteredWithRemoteGateway=_notificationRegisteredWithRemoteGateway;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;	// IMP=0x000000000060e85b
- (id)init;	// IMP=0x000000000060e740
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
