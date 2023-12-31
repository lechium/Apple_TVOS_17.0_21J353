//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBulletinBoardNotification, HMFMessageDispatcher, NSArray, NSHashTable, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoardNotificationServiceGroup : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSSet *_cameraProfileUUIDs;	// 16 = 0x10
    NSSet *_associatedServiceUUIDs;	// 24 = 0x18
    NSHashTable *_cameraProfilesTable;	// 32 = 0x20
    NSHashTable *_associatedServicesTable;	// 40 = 0x28
    HMDBulletinBoardNotification *_bulletinBoardNotification;	// 48 = 0x30
    NSUUID *_messageTargetUUID;	// 56 = 0x38
    NSArray *_associatedServices;	// 64 = 0x40
    NSArray *_cameraProfiles;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
    HMFMessageDispatcher *_msgDispatcher;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000a52f3
+ (id)logCategory;	// IMP=0x00100000000a52c3
- (void).cxx_destruct;	// IMP=0x00000000000a4f5b
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(retain, nonatomic) NSArray *associatedServices; // @synthesize associatedServices=_associatedServices;
@property __weak HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a4d8d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a4a47
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000000a47e3
- (id)actionContextForCameraProfileID:(id)arg1;	// IMP=0x00000000000a3a6c
- (id)_cameraProfileWithID:(id)arg1;	// IMP=0x00000000000a38b6
- (id)dumpState;	// IMP=0x00000000000a348c
- (void)setAssociatedServicesTable:(id)arg1;	// IMP=0x00000000000a3368
@property(readonly, copy, nonatomic) NSHashTable *associatedServicesTable; // @synthesize associatedServicesTable=_associatedServicesTable;
- (void)setCameraProfilesTable:(id)arg1;	// IMP=0x00000000000a32ce
@property(readonly, copy, nonatomic) NSHashTable *cameraProfilesTable; // @synthesize cameraProfilesTable=_cameraProfilesTable;
@property(retain, nonatomic) NSSet *associatedServiceUUIDs; // @synthesize associatedServiceUUIDs=_associatedServiceUUIDs;
@property(retain, nonatomic) NSSet *cameraProfileUUIDs; // @synthesize cameraProfileUUIDs=_cameraProfileUUIDs;
- (void)_sendNotification:(id)arg1;	// IMP=0x00000000000a2efc
- (id)_prepareServiceGroupPayload;	// IMP=0x00000000000a2de6
- (void)_updateAssociatedServicesTable:(id)arg1;	// IMP=0x00000000000a2c4e
- (void)_updateAssociatedServices:(id)arg1 associatedCameras:(id)arg2;	// IMP=0x00000000000a254f
- (void)_configureServices;	// IMP=0x00000000000a17af
- (id)_cameraNotificationGeneratingServicesForAccessory:(id)arg1;	// IMP=0x00000000000a130d
- (id)_accessoriesInRoom:(id)arg1 ofHome:(id)arg2;	// IMP=0x00000000000a1065
- (_Bool)_isDefaultRoom:(id)arg1 ofHome:(id)arg2;	// IMP=0x00000000000a0fad
- (void)configureBulletinNotification;	// IMP=0x00000000000a0e5c
- (_Bool)_isNotificationGeneratingService:(id)arg1;	// IMP=0x00000000000a0d76
- (_Bool)_isAlarmService:(id)arg1;	// IMP=0x00000000000a0d35
- (_Bool)_isSupportedAssociationService:(id)arg1;	// IMP=0x00000000000a0c33
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg1;	// IMP=0x00000000000a0ab6
- (void)_registerNotificationHandlers;	// IMP=0x00000000000a09c6
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000000a0929
- (void)dealloc;	// IMP=0x00000000000a08bb
- (id)initWithBulletinBoardNotification:(id)arg1;	// IMP=0x00000000000a078c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

