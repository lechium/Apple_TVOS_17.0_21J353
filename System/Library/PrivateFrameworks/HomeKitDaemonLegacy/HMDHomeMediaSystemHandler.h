//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDHomeMediaSystemControllerMessageHandler, HMDStereoPairSettingsController, HMFMessageDispatcher, NSArray, NSMutableDictionary, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDHomeMediaSystemHandlerDataSource, HMDHomeMediaSystemHandlerDelegate, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDHomeMediaSystemHandler : HMFObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSMutableDictionary *_uuidToMediaSystems;	// 24 = 0x18
    id <HMDHomeMediaSystemHandlerDataSource> _dataSource;	// 32 = 0x20
    id <HMDHomeMediaSystemHandlerDelegate> _delegate;	// 40 = 0x28
    NSUUID *_parentUUID;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMFMessageDispatcher *_messageDispatcher;	// 64 = 0x40
    NSNotificationCenter *_notificationCenter;	// 72 = 0x48
    HMDHome *_home;	// 80 = 0x50
    HMDHomeMediaSystemControllerMessageHandler *_messageHandler;	// 88 = 0x58
    HMDStereoPairSettingsController *_stereoPairSettingsController;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000036ce68
+ (id)logCategory;	// IMP=0x001000000036ce38
- (void).cxx_destruct;	// IMP=0x000000000036c65e
@property(retain, nonatomic) HMDStereoPairSettingsController *stereoPairSettingsController; // @synthesize stereoPairSettingsController=_stereoPairSettingsController;
@property(retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property __weak id <HMDHomeMediaSystemHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDHomeMediaSystemHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)destinationForMediaSystem:(id)arg1;	// IMP=0x000000000036c479
- (void)_userAssistantAccessControlDidUpdate:(id)arg1 accessories:(id)arg2;	// IMP=0x000000000036bec2
- (id)_currentMediaSystemIfPrimary;	// IMP=0x000000000036bcec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000036b931
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036b67e
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x000000000036b5f9
- (id)uuidToMediaSystems;	// IMP=0x000000000036b5e4
- (id)eventStoreReadHandle;	// IMP=0x000000000036b56a
- (id)eventForwarder;	// IMP=0x000000000036b4f0
- (id)localAndRemoteSubscriptionProvider;	// IMP=0x000000000036b476
- (id)backingStoreObjectsForVersion:(long long)arg1;	// IMP=0x000000000036b293
- (void)_handleUpdateMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000036b00e
- (void)_handleRemoveMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000036ab6a
- (void)confirmPrimaryResidentIfFirstMediaSystem;	// IMP=0x000000000036a957
- (void)subscribeToSettingsForNewlyAddedMediaSystem:(id)arg1;	// IMP=0x000000000036a801
- (void)addMediaSystem:(id)arg1;	// IMP=0x000000000036a5ff
- (void)_handleAddMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000036a111
- (void)addMediaSystemWithGroupIdentifier:(id)arg1 usingData:(id)arg2;	// IMP=0x0000000000369e38
- (void)addMediaSystemsWithIdentifiers:(id)arg1 usingData:(id)arg2;	// IMP=0x0000000000369da1
- (id)mediaSystemData:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000369cff
- (id)identifiersInMediaSystemData:(id)arg1;	// IMP=0x0000000000369ce3
- (void)mergeMediaSystemData:(id)arg1;	// IMP=0x0000000000369b61
- (void)messageHandlerRemoveMediaSystem:(id)arg1 builderSession:(id)arg2 message:(id)arg3;	// IMP=0x0000000000369805
- (void)messageHandlerUpdateMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000369045
- (void)messageHandlerAddMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000367f78
- (void)routeMediaSystemWithMessage:(id)arg1;	// IMP=0x0000000000367f0f
- (id)processedMediaSystemBuilderMessageFor:(id)arg1;	// IMP=0x0000000000367e95
- (id)mediaSystemForAccessory:(id)arg1;	// IMP=0x0000000000367dc5
- (void)configure:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 queue:(id)arg4 messageDispatcher:(id)arg5 notificationCenter:(id)arg6;	// IMP=0x00000000003679a1
- (id)logIdentifier;	// IMP=0x0000000000367951
- (id)attributeDescriptions;	// IMP=0x000000000036780c
- (id)privateDescription;	// IMP=0x00000000003677fa
- (void)notifyOfRemovedMediaSystem:(id)arg1;	// IMP=0x00000000003676ce
- (void)unsubscribeToSettingsForMediaSystem:(id)arg1;	// IMP=0x0000000000367578
- (void)handleRemovedMediaSystem:(id)arg1;	// IMP=0x00000000003674b5
- (void)removeMediaSystem:(id)arg1;	// IMP=0x00000000003672cd
- (void)updateMediaSystem:(id)arg1;	// IMP=0x0000000000367169
- (id)mediaSystemWithUUID:(id)arg1;	// IMP=0x00000000003670e0
- (id)filteredMediaSystems;	// IMP=0x0000000000367089
@property(readonly, copy) NSArray *mediaSystems;
- (id)initWithMediaSystems:(id)arg1;	// IMP=0x0000000000366f4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
