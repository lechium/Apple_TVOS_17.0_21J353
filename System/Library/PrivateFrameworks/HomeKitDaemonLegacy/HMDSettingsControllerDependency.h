//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDSettingsMessageHandler, HMFMessageDispatcher, NSArray, NSString, NSUUID;
@protocol HMDSettingTransactionReceiverProtocol, HMDSettingsBackingStoreController, HMDSettingsMessageHandlerProtocol, HMDSettingsMetadataParserProtocol, HMDUserSettingsInitialValueProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSettingsControllerDependency : NSObject
{
    NSUUID *_parentIdentifier;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    NSArray *_keyPathsToPrune;	// 24 = 0x18
    id <HMDSettingTransactionReceiverProtocol> _transactionReceiver;	// 32 = 0x20
    id <HMDSettingsBackingStoreController> _backingStoreController;	// 40 = 0x28
    NSString *_codingKey;	// 48 = 0x30
    id <HMDUserSettingsInitialValueProviding> _migrationProvider;	// 56 = 0x38
    id <HMDSettingsMetadataParserProtocol> _metadataParser;	// 64 = 0x40
    NSString *_metadataFileName;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    HMFMessageDispatcher *_messageDispatcher;	// 88 = 0x58
    HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol> *_internalMessageHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000068834d
@property(readonly) id <HMDSettingsMetadataParserProtocol> metadataParser; // @synthesize metadataParser=_metadataParser;
@property(readonly) __weak id <HMDUserSettingsInitialValueProviding> migrationProvider; // @synthesize migrationProvider=_migrationProvider;
@property(readonly) NSString *codingKey; // @synthesize codingKey=_codingKey;
@property(readonly) id <HMDSettingsBackingStoreController> backingStoreController;
@property __weak id <HMDSettingTransactionReceiverProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
@property(readonly, copy) NSArray *keyPathsToPrune; // @synthesize keyPathsToPrune=_keyPathsToPrune;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
- (id)createSettingModelWithName:(id)arg1 parent:(id)arg2 type:(id)arg3 properties:(id)arg4;	// IMP=0x0000000000688190
- (id)createSettingGroupModelWithName:(id)arg1 parent:(id)arg2;	// IMP=0x00000000006880d9
- (id)createSettingRootGroupModelWithParentModelID:(id)arg1;	// IMP=0x0000000000688054
- (id)loadMetadata;	// IMP=0x0000000000687e44
- (id)settingValueForValue:(id)arg1 type:(id)arg2 constraintModels:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000687ac6
- (id)settingModelForUpdateWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 value:(id)arg3;	// IMP=0x0000000000687948
@property(readonly) id <HMDSettingsMessageHandlerProtocol> messageHandler;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 backingStoreController:(id)arg3;	// IMP=0x0000000000687863
- (id)initWithParentUUID:(id)arg1 logName:(id)arg2 queue:(id)arg3 metadataFileName:(id)arg4 codingKey:(id)arg5 messageHandler:(id)arg6 migrationProvider:(id)arg7;	// IMP=0x000000000068782b
- (id)initWithParentUUID:(id)arg1 logName:(id)arg2 queue:(id)arg3 metadataFileName:(id)arg4 codingKey:(id)arg5 messageHandler:(id)arg6 migrationProvider:(id)arg7 keyPathsToPrune:(id)arg8;	// IMP=0x0000000000687639

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

