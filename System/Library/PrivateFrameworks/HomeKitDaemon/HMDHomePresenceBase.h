//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDNotificationRegistration, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomePresenceBase : HMFObject
{
    HMDHome *_home;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSString *_logString;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    HMFMessageDispatcher *_msgDispatcher;	// 40 = 0x28
    HMDNotificationRegistration *_notificationRegistration;	// 48 = 0x30
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x001000000076ae48
+ (id)logCategory;	// IMP=0x001000000076ae18
+ (id)messageTargetUUIDFromHomeUUID:(id)arg1;	// IMP=0x001000000076ad4e
- (void).cxx_destruct;	// IMP=0x000000000076b23d
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000076b135
- (void)residentChanged;	// IMP=0x000000000076b12f
- (void)handleHomeDataLoadedNotification:(id)arg1;	// IMP=0x000000000076b129
- (void)_registerForMessages;	// IMP=0x000000000076b0db
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000076b06b
- (void)_initialize:(id)arg1;	// IMP=0x000000000076ae87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

