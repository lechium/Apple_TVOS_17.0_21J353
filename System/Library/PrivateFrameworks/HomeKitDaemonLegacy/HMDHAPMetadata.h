//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPMetadata, NSDictionary, NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface HMDHAPMetadata : HMFObject
{
    _Bool _incomplete;	// 8 = 0x8
    NSNumber *_version;	// 16 = 0x10
    NSNumber *_schemaVersion;	// 24 = 0x18
    NSDictionary *_rawPlist;	// 32 = 0x20
    HAPMetadata *_hapMetadata;	// 40 = 0x28
    NSSet *_hmRequiresDeviceUnlockTuples;	// 48 = 0x30
    NSDictionary *_hmAllowableSecuringWrites;	// 56 = 0x38
    NSDictionary *_hmWakeOnOperationsFilter;	// 64 = 0x40
    NSDictionary *_hmAccessoryCategories;	// 72 = 0x48
    NSSet *_hmBlacklistedServices;	// 80 = 0x50
    NSSet *_hmBlacklistedCharacteristics;	// 88 = 0x58
    NSSet *_hmBlacklistedServicesFromApp;	// 96 = 0x60
    NSSet *_hmBlacklistedCharacteristicsFromApp;	// 104 = 0x68
    NSSet *_hmNotificationAutoEnabledTuples;	// 112 = 0x70
    NSSet *_hmBulletinBoardEnabledTuples;	// 120 = 0x78
    NSSet *_hmCoalesceNotificationsTuples;	// 128 = 0x80
    NSDictionary *_assistantServiceNameHAPTypeMap;	// 136 = 0x88
    NSDictionary *_assistantServiceHAPTypeNameMap;	// 144 = 0x90
    NSDictionary *_assistantCharacteristics;	// 152 = 0x98
    NSDictionary *_assistantChrHAPTypeNameMap;	// 160 = 0xa0
    NSDictionary *_assistantUnits;	// 168 = 0xa8
}

+ (_Bool)isHomedVersionSupported:(id)arg1;	// IMP=0x006000000021cce2
+ (void)resetShouldUploadToCloudAfterHomedReady;	// IMP=0x006000000021ccd5
+ (_Bool)shouldUploadToCloudAfterHomedReady;	// IMP=0x006000000021ccc9
+ (void)prepareMetadata;	// IMP=0x006000000021c5b7
+ (_Bool)isAdminPrivilegeRequiredForWritingCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x006000000021c54d
+ (_Bool)isOwnerPrivilegeRequiredForWritingCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x006000000021c498
+ (id)dataFromMetadataDictionaryWithKey:(id)arg1;	// IMP=0x006000000021c3cb
+ (id)legacyV3DataForCloud;	// IMP=0x006000000021c3a8
+ (id)legacyV3DataForIDS;	// IMP=0x006000000021c385
+ (_Bool)isServiceType:(id)arg1 compatibleWithAccessoryCategoryType:(id)arg2;	// IMP=0x006000000021c2d5
+ (void)updateLocalMetadataWithMetadata:(id)arg1;	// IMP=0x006000000021c210
+ (void)updateLocalMetadataWithBuiltinMetadata;	// IMP=0x006000000021c0f6
+ (void)_logCurrentMetadata;	// IMP=0x006000000021bfb4
+ (id)getSharedInstance;	// IMP=0x006000000021bbf5
+ (id)getBuiltinInstance;	// IMP=0x006000000021b68f
+ (id)metadataCache;	// IMP=0x006000000021b65f
+ (id)metadataWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x006000000021b4e3
+ (id)metadataWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x006000000021b326
- (void).cxx_destruct;	// IMP=0x000000000021948d
@property(retain, nonatomic) NSDictionary *assistantUnits; // @synthesize assistantUnits=_assistantUnits;
@property(retain, nonatomic) NSDictionary *assistantChrHAPTypeNameMap; // @synthesize assistantChrHAPTypeNameMap=_assistantChrHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantCharacteristics; // @synthesize assistantCharacteristics=_assistantCharacteristics;
@property(retain, nonatomic) NSDictionary *assistantServiceHAPTypeNameMap; // @synthesize assistantServiceHAPTypeNameMap=_assistantServiceHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantServiceNameHAPTypeMap; // @synthesize assistantServiceNameHAPTypeMap=_assistantServiceNameHAPTypeMap;
@property(retain, nonatomic) NSSet *hmCoalesceNotificationsTuples; // @synthesize hmCoalesceNotificationsTuples=_hmCoalesceNotificationsTuples;
@property(retain, nonatomic) NSSet *hmBulletinBoardEnabledTuples; // @synthesize hmBulletinBoardEnabledTuples=_hmBulletinBoardEnabledTuples;
@property(retain, nonatomic) NSSet *hmNotificationAutoEnabledTuples; // @synthesize hmNotificationAutoEnabledTuples=_hmNotificationAutoEnabledTuples;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristicsFromApp; // @synthesize hmBlacklistedCharacteristicsFromApp=_hmBlacklistedCharacteristicsFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedServicesFromApp; // @synthesize hmBlacklistedServicesFromApp=_hmBlacklistedServicesFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristics; // @synthesize hmBlacklistedCharacteristics=_hmBlacklistedCharacteristics;
@property(retain, nonatomic) NSSet *hmBlacklistedServices; // @synthesize hmBlacklistedServices=_hmBlacklistedServices;
@property(retain, nonatomic) NSDictionary *hmAccessoryCategories; // @synthesize hmAccessoryCategories=_hmAccessoryCategories;
@property(retain, nonatomic) NSDictionary *hmWakeOnOperationsFilter; // @synthesize hmWakeOnOperationsFilter=_hmWakeOnOperationsFilter;
@property(retain, nonatomic) NSDictionary *hmAllowableSecuringWrites; // @synthesize hmAllowableSecuringWrites=_hmAllowableSecuringWrites;
@property(retain, nonatomic) NSSet *hmRequiresDeviceUnlockTuples; // @synthesize hmRequiresDeviceUnlockTuples=_hmRequiresDeviceUnlockTuples;
@property(retain, nonatomic) HAPMetadata *hapMetadata; // @synthesize hapMetadata=_hapMetadata;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(nonatomic) _Bool incomplete; // @synthesize incomplete=_incomplete;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (id)statusHAPCharacteristicTypesForServiceType;	// IMP=0x000000000021916d
- (id)disallowedAssistantCharacteristicTypesByServiceType;	// IMP=0x000000000021913d
- (id)aliasedHAPServiceTypes;	// IMP=0x000000000021910d
- (id)aliasedHAPCharacteristicTypes;	// IMP=0x00000000002190dd
- (_Bool)checkTupleExistsInSet:(id)arg1 forChrType:(id)arg2 svcType:(id)arg3;	// IMP=0x0000000000219034
- (_Bool)parseAndSetAssistantUnits:(id)arg1;	// IMP=0x0000000000218cd7
- (_Bool)parseAndSetAssistantCharacteristics:(id)arg1;	// IMP=0x000000000021830f
- (_Bool)parseAndSetAssistantServices:(id)arg1;	// IMP=0x0000000000217f34
- (id)parseCharacteristicArray:(id)arg1;	// IMP=0x0000000000217c40
- (id)parseServiceArray:(id)arg1;	// IMP=0x000000000021794c
- (void)parseAndSetHMCategories:(id)arg1;	// IMP=0x000000000021755f
- (void)parseAndSetWakeOnOperationsFilter:(id)arg1;	// IMP=0x000000000021716e
- (void)parseAndSetAllowableSecuringWrites:(id)arg1;	// IMP=0x0000000000216d77
- (id)parseMetadataTupleSetFromPlist:(id)arg1;	// IMP=0x0000000000216c37
- (_Bool)parseAndSetAssistantMetadataWithAssistantPlist:(id)arg1;	// IMP=0x00000000002169ca
- (_Bool)parseAndSetHMMetadataWithHMPlist:(id)arg1;	// IMP=0x0000000000216330
- (id)parseAndSetRawPlist:(id)arg1;	// IMP=0x0000000000216040
- (_Bool)disallowsAssistantServiceType:(id)arg1 characteristicType:(id)arg2;	// IMP=0x0000000000215f91
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 getActionType:(_Bool)arg3;	// IMP=0x0000000000215c4a
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;	// IMP=0x0000000000215ae7
- (id)mapFromAssistantUnitName:(id)arg1;	// IMP=0x0000000000215a6d
- (id)mapToAssistantUnitName:(id)arg1;	// IMP=0x00000000002159f3
- (id)mapCharacteristicValueType:(id)arg1;	// IMP=0x0000000000215949
- (id)characteristicValueUnit:(id)arg1;	// IMP=0x00000000002158cf
- (id)getStatusCharacteristicTypes:(id)arg1 forServiceType:(id)arg2;	// IMP=0x0000000000215812
- (id)getCharacteristicTypeAlias:(id)arg1;	// IMP=0x0000000000215798
- (id)getAliasedCharacteristicTypes:(id)arg1;	// IMP=0x0000000000215563
- (id)getServiceTypeAlias:(id)arg1;	// IMP=0x00000000002154e9
- (id)getAliasedServiceType:(id)arg1;	// IMP=0x00000000002152ff
- (id)mapWriteCharacteristicFromAssistantName:(id)arg1;	// IMP=0x0000000000215216
- (id)mapReadCharacteristicFromAssistantName:(id)arg1;	// IMP=0x000000000021512d
- (id)mapToAssistantCharacteristicName:(id)arg1;	// IMP=0x0000000000214fed
- (id)mapToAssistantServiceSubtypeName:(id)arg1 accessoryCategory:(id)arg2;	// IMP=0x0000000000214f15
- (id)mapToAssistantServiceSubtypeName:(id)arg1;	// IMP=0x0000000000214ea9
- (id)mapFromAssistantServiceName:(id)arg1;	// IMP=0x0000000000214e2f
- (id)mapToAssistantServiceName:(id)arg1;	// IMP=0x0000000000214d4f
- (_Bool)supportsLocalization:(id)arg1;	// IMP=0x0000000000214cbc
- (id)serviceSubtypeForValue:(id)arg1 forServiceType:(id)arg2;	// IMP=0x0000000000214bad
- (id)categoryTypeFromName:(id)arg1;	// IMP=0x00000000002149cb
- (id)categoryForType:(id)arg1;	// IMP=0x00000000002148a2
- (id)categoryForIdentifier:(id)arg1;	// IMP=0x00000000002147ae
- (id)audioAccessoryCategory;	// IMP=0x0000000000214769
- (id)categoryForOther;	// IMP=0x0000000000214712
- (_Bool)shouldRefreshValueForCharacteristicWithType:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000214662
- (_Bool)shouldFilterEnableNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000214535
- (_Bool)shouldFilterChangeNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000214408
- (_Bool)shouldHomeAppShowTileForServiceType:(id)arg1;	// IMP=0x00000000002143a8
- (_Bool)shouldEnableHomeNotificationForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000002141f8
- (_Bool)shouldAutoEnableNotificationForCharacteristic:(id)arg1 ofService:(id)arg2;	// IMP=0x0000000000214101
- (_Bool)isSecondsDownCounterCharacteristicType:(id)arg1;	// IMP=0x00000000002140a1
- (_Bool)generateNotificationOnConfigurationForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000213ff1
- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;	// IMP=0x0000000000213f91
- (_Bool)shouldFilterCharacteristicOfTypeFromApp:(id)arg1;	// IMP=0x0000000000213f23
- (_Bool)shouldFilterServiceOfTypeFromApp:(id)arg1;	// IMP=0x0000000000213eb5
- (_Bool)shouldFilterCharacteristicOfType:(id)arg1;	// IMP=0x0000000000213e01
- (_Bool)shouldFilterServiceOfType:(id)arg1;	// IMP=0x0000000000213d4d
- (_Bool)shouldCoalesceCharacteristicNotifications:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000213cba
- (_Bool)isTargetCharacteristic:(id)arg1;	// IMP=0x0000000000213c5a
- (_Bool)requiresTimedWrite:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000213bb2
- (_Bool)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000213b1f
- (_Bool)shouldAllowToWakeSuspendedAccessoryForOperation:(long long)arg1 service:(id)arg2 characteristicType:(id)arg3 value:(id)arg4;	// IMP=0x00000000002133ff
- (_Bool)allowsSecuringWriteFor:(id)arg1 withValue:(id)arg2;	// IMP=0x0000000000213344
- (id)descriptionForCharacteristicType:(id)arg1;	// IMP=0x00000000002132ca
- (id)descriptionForServiceType:(id)arg1;	// IMP=0x0000000000213250
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000212c33
- (_Bool)supportsAuthorizationData:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000212ba3
- (_Bool)isStandardServiceType:(id)arg1;	// IMP=0x0000000000212b35
- (_Bool)isStandardCharacteristicType:(id)arg1;	// IMP=0x0000000000212ac7
- (id)serviceTypeFromName:(id)arg1;	// IMP=0x0000000000212a4d
- (id)serviceNameFromType:(id)arg1;	// IMP=0x00000000002129d3
- (id)characteristicTypeFromName:(id)arg1;	// IMP=0x0000000000212959
- (id)characteristicNameFromType:(id)arg1;	// IMP=0x00000000002128df
- (id)xpcData:(_Bool)arg1;	// IMP=0x0000000000212782
- (id)initWithFullPlist:(id)arg1 hapMetadata:(id)arg2;	// IMP=0x00000000002126fb
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000212602
- (id)initWithFullPlist:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002124b2

@end

