//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDeviceSetupSessionInternal, HMDHomeManager, HMFActivity, NSError, NSObject, NSString, NSUUID;
@protocol HMDDeviceSetupSessionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupSession : HMFObject
{
    HMFActivity *_activity;	// 8 = 0x8
    _Bool _open;	// 16 = 0x10
    NSUUID *_accessoryUUID;	// 24 = 0x18
    NSString *_accessoryIDSIdentifier;	// 32 = 0x20
    NSString *_setupClientBundleID;	// 40 = 0x28
    unsigned long long _startTime;	// 48 = 0x30
    NSError *_sessionError;	// 56 = 0x38
    unsigned long long _endTime;	// 64 = 0x40
    NSString *_category;	// 72 = 0x48
    id <HMDDeviceSetupSessionDelegate> _delegate;	// 80 = 0x50
    NSUUID *_identifier;	// 88 = 0x58
    HMDHomeManager *_homeManager;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_clientQueue;	// 104 = 0x68
    HMDDeviceSetupSessionInternal *_internal;	// 112 = 0x70
    CDUnknownBlockType _upSecondsFactory;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x00100000002b967d
+ (_Bool)isRoleSupported:(long long)arg1;	// IMP=0x00100000002b9649
- (void).cxx_destruct;	// IMP=0x00000000002b87cf
@property(readonly) CDUnknownBlockType upSecondsFactory; // @synthesize upSecondsFactory=_upSecondsFactory;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(readonly, nonatomic) HMDDeviceSetupSessionInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDDeviceSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *category; // @synthesize category=_category;
@property unsigned long long endTime; // @synthesize endTime=_endTime;
@property(copy) NSError *sessionError; // @synthesize sessionError=_sessionError;
@property unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy) NSString *setupClientBundleID; // @synthesize setupClientBundleID=_setupClientBundleID;
@property(copy) NSString *accessoryIDSIdentifier; // @synthesize accessoryIDSIdentifier=_accessoryIDSIdentifier;
@property(copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)setupTrackingInfo;	// IMP=0x00000000002b84c1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000002b844d
- (void)_sendRequestData:(id)arg1;	// IMP=0x00000000002b8229
- (void)_handleReceiveData:(id)arg1;	// IMP=0x00000000002b818c
- (void)close:(id)arg1;	// IMP=0x00000000002b8029
- (void)_handleClose:(id)arg1;	// IMP=0x00000000002b7e72
- (void)_closeWithError:(id)arg1;	// IMP=0x00000000002b7833
- (void)open;	// IMP=0x00000000002b7762
- (void)__registerForMessages;	// IMP=0x00000000002b7613
- (id)messageDispatcher;	// IMP=0x00000000002b75c3
- (id)messageDestination;	// IMP=0x00000000002b755a
@property(readonly) long long role;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b7433
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3 upSecondsFactory:(CDUnknownBlockType)arg4;	// IMP=0x00000000002b7012
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 homeManager:(id)arg3;	// IMP=0x00000000002b6ff9
- (id)init;	// IMP=0x00000000002b6f51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

