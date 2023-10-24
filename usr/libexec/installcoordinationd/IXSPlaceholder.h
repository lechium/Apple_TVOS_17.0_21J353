//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPlaceholderAttributes, IXPlaceholderSeed, IXSOwnedDataPromise, IXSPromisedInMemoryData, IXSPromisedInMemoryDictionary, MIStoreMetadata, NSArray, NSData, NSDictionary, NSError, NSString, NSUUID;

@interface IXSPlaceholder
{
    _Bool _sentDidBegin;	// 8 = 0x8
    _Bool _configurationComplete;	// 9 = 0x9
    _Bool _creatorHadWebPlaceholderInstallEntitlement;	// 10 = 0xa
    NSUUID *_iconPromiseUUID;	// 16 = 0x10
    NSUUID *_entitlementsPromiseUUID;	// 24 = 0x18
    NSUUID *_infoPlistLoctablePromiseUUID;	// 32 = 0x20
    NSUUID *_metadataPromiseUUID;	// 40 = 0x28
    NSUUID *_sinfPromiseUUID;	// 48 = 0x30
    NSArray *_appExtensionPlaceholdersPromiseUUIDs;	// 56 = 0x38
    NSUUID *_localizationDictionaryPromiseUUID;	// 64 = 0x40
    IXSOwnedDataPromise *_icon;	// 72 = 0x48
    IXSOwnedDataPromise *_entitlements;	// 80 = 0x50
    IXSOwnedDataPromise *_infoPlistLoctable;	// 88 = 0x58
    NSArray *_appExtensionPlaceholders;	// 96 = 0x60
    IXPlaceholderAttributes *_attributes;	// 104 = 0x68
    IXSPromisedInMemoryData *_metadataPromise;	// 112 = 0x70
    IXSPromisedInMemoryData *_sinfPromise;	// 120 = 0x78
    IXSPromisedInMemoryDictionary *_localizationDictionaryPromise;	// 128 = 0x80
    NSError *_awakeningError;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000016cf0
- (void).cxx_destruct;	// IMP=0x0010000000021459
@property(readonly, nonatomic) _Bool creatorHadWebPlaceholderInstallEntitlement; // @synthesize creatorHadWebPlaceholderInstallEntitlement=_creatorHadWebPlaceholderInstallEntitlement;
@property(retain, nonatomic) NSError *awakeningError; // @synthesize awakeningError=_awakeningError;
@property(retain, nonatomic) IXSPromisedInMemoryDictionary *localizationDictionaryPromise; // @synthesize localizationDictionaryPromise=_localizationDictionaryPromise;
@property(retain, nonatomic) IXSPromisedInMemoryData *sinfPromise; // @synthesize sinfPromise=_sinfPromise;
@property(retain, nonatomic) IXSPromisedInMemoryData *metadataPromise; // @synthesize metadataPromise=_metadataPromise;
@property(copy, nonatomic) IXPlaceholderAttributes *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSArray *appExtensionPlaceholders; // @synthesize appExtensionPlaceholders=_appExtensionPlaceholders;
@property(retain, nonatomic) IXSOwnedDataPromise *infoPlistLoctable; // @synthesize infoPlistLoctable=_infoPlistLoctable;
@property(retain, nonatomic) IXSOwnedDataPromise *entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) IXSOwnedDataPromise *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool configurationComplete; // @synthesize configurationComplete=_configurationComplete;
@property(nonatomic) _Bool sentDidBegin; // @synthesize sentDidBegin=_sentDidBegin;
@property(retain, nonatomic) NSUUID *localizationDictionaryPromiseUUID; // @synthesize localizationDictionaryPromiseUUID=_localizationDictionaryPromiseUUID;
@property(retain, nonatomic) NSArray *appExtensionPlaceholdersPromiseUUIDs; // @synthesize appExtensionPlaceholdersPromiseUUIDs=_appExtensionPlaceholdersPromiseUUIDs;
@property(retain, nonatomic) NSUUID *sinfPromiseUUID; // @synthesize sinfPromiseUUID=_sinfPromiseUUID;
@property(retain, nonatomic) NSUUID *metadataPromiseUUID; // @synthesize metadataPromiseUUID=_metadataPromiseUUID;
@property(retain, nonatomic) NSUUID *infoPlistLoctablePromiseUUID; // @synthesize infoPlistLoctablePromiseUUID=_infoPlistLoctablePromiseUUID;
@property(retain, nonatomic) NSUUID *entitlementsPromiseUUID; // @synthesize entitlementsPromiseUUID=_entitlementsPromiseUUID;
@property(retain, nonatomic) NSUUID *iconPromiseUUID; // @synthesize iconPromiseUUID=_iconPromiseUUID;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000021022
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x0010000000020e4b
- (void)promiseDidReset:(id)arg1;	// IMP=0x0010000000020c9c
- (void)promiseDidComplete:(id)arg1;	// IMP=0x0010000000020bdc
- (void)promiseDidBegin:(id)arg1;	// IMP=0x00100000000209ff
@property(readonly, copy) NSString *description;
- (_Bool)_materialize;	// IMP=0x001000000001dae8
- (_Bool)_validateClientEntitlements:(id *)arg1;	// IMP=0x001000000001d80c
- (void)decommission;	// IMP=0x001000000001d57f
- (void)_decommissionPromise:(id)arg1;	// IMP=0x001000000001d4c0
- (id)subPromiseUUIDs;	// IMP=0x001000000001d0c6
- (id)_promiseUUIDsForPromise:(id)arg1;	// IMP=0x001000000001cedb
- (unsigned long long)totalBytesNeededOnDisk;	// IMP=0x001000000001cba3
@property(readonly, nonatomic) unsigned long long installType; // @dynamic installType;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy, nonatomic) NSString *bundleName; // @dynamic bundleName;
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000001c5b5
- (void)_cancelPromise:(id)arg1 forReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x001000000001c455
- (void)setPercentComplete:(double)arg1;	// IMP=0x001000000001c420
- (double)percentComplete;	// IMP=0x001000000001bda0
- (void)setComplete:(_Bool)arg1;	// IMP=0x001000000001bd6b
- (_Bool)isComplete;	// IMP=0x001000000001bce8
- (void)_materializeIfReady;	// IMP=0x001000000001bb68
- (_Bool)_isReadyToMaterialize;	// IMP=0x001000000001b239
@property(readonly, nonatomic) NSDictionary *localizationDictionary; // @dynamic localizationDictionary;
- (id);	// IMP=0x001000000001ac85
@property(readonly, copy, nonatomic) MIStoreMetadata *metadata; // @dynamic metadata;
- (_Bool)awakeFromSerializationWithLookupBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0010000000016cf8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000016a3c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001671f
- (id)initWithSeed:(id)arg1 fromConnection:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000016650
- (_Bool)_internal_checkInitWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000164ba
- (oneway void)_remote_setConfigurationCompleteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024603
- (oneway void)_remote_getAppExtensionPlaceholderPromises:(CDUnknownBlockType)arg1;	// IMP=0x00100000000241f8
- (oneway void)_remote_hasAppExtensionPlaceholderPromises:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024096
- (oneway void)_remote_setAppExtensionPlaceholderPromiseUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002380c
- (oneway void)_remote_getInfoPlistLoctablePromise:(CDUnknownBlockType)arg1;	// IMP=0x00100000000235b7
- (oneway void)_remote_hasInfoPlistLoctablePromise:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023455
- (oneway void)_remote_setInfoPlistLoctablePromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023223
- (oneway void)_remote_getEntitlementsPromise:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022fce
- (oneway void)_remote_hasEntitlementsPromise:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022e6c
- (oneway void)_remote_setEntitlementsPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022c3a
- (oneway void)_remote_getLocalizationDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022ab4
- (oneway void)_remote_setLocalizationPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022882
- (oneway void)_remote_getIconPromise:(CDUnknownBlockType)arg1;	// IMP=0x001000000002262d
- (oneway void)_remote_hasIconPromise:(CDUnknownBlockType)arg1;	// IMP=0x00100000000224cb
- (oneway void)_remote_setIconPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022299
- (oneway void)_remote_getAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000022113
- (oneway void)_remote_setAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021fea
- (oneway void)_remote_getLaunchProhibitedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021e70
- (oneway void)_remote_setLaunchProhibited:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021d00
- (oneway void)_remote_getSinfDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021b7a
- (oneway void)_remote_setSinfPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002193c
- (oneway void)_remote_getMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000217b6
- (oneway void)_remote_setMetadataPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021578

// Remaining properties
@property(readonly, copy, nonatomic) IXPlaceholderSeed *clientSeed; // @dynamic clientSeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) IXPlaceholderSeed *seed; // @dynamic seed;
@property(readonly, copy, nonatomic) NSData *sinfData; // @dynamic sinfData;
@property(readonly) Class superclass;

@end
