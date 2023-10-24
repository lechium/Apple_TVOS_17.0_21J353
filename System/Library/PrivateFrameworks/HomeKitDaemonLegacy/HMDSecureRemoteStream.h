//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDDevice, HMDSecureRemoteStreamInternal, HMDUser, HMFPairingIdentity, NSArray, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSecureRemoteStream : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _open;	// 24 = 0x18
    _Bool _idle;	// 25 = 0x19
    _Bool _authenticated;	// 26 = 0x1a
    _Bool _supportsSharedIdentities;	// 27 = 0x1b
    long long _qualityOfService;	// 32 = 0x20
    NSNumber *_maximumRemoteStreams;	// 40 = 0x28
    NSDate *_lastActivity;	// 48 = 0x30
    HMDDevice *_peerDevice;	// 56 = 0x38
    long long _role;	// 64 = 0x40
    NSUUID *_sessionID;	// 72 = 0x48
    HMDUser *_peer;	// 80 = 0x50
    HMFPairingIdentity *_peerIdentity;	// 88 = 0x58
    HMDSecureRemoteStreamInternal *_remoteSession;	// 96 = 0x60
    HMDDevice *_currentDevice;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x0010000000b0aee2
- (void).cxx_destruct;	// IMP=0x0000000000b070db
@property(nonatomic) _Bool supportsSharedIdentities; // @synthesize supportsSharedIdentities=_supportsSharedIdentities;
@property(readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) HMDSecureRemoteStreamInternal *remoteSession; // @synthesize remoteSession=_remoteSession;
@property(retain, nonatomic) HMFPairingIdentity *peerIdentity; // @synthesize peerIdentity=_peerIdentity;
@property(retain, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) long long role; // @synthesize role=_role;
- (id)logIdentifier;	// IMP=0x0000000000b06fc9
- (void)__handleDeviceRemovedFromAccount:(id)arg1;	// IMP=0x0000000000b06f35
- (void)__handleAccountRemovedFromRegistry:(id)arg1;	// IMP=0x0000000000b06ea1
- (void)__handleRemovedIdentity:(id)arg1;	// IMP=0x0000000000b06e0d
- (void)handleSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;	// IMP=0x0000000000b06d1a
- (void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000b06bd1
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b06b07
- (void)stop;	// IMP=0x0000000000b06ab5
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000b069de
- (void)closedWithError:(id)arg1;	// IMP=0x0000000000b0694a
- (void)_configureWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b06227
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b06169
@property(readonly, copy) NSDate *lastActivity; // @synthesize lastActivity=_lastActivity;
- (void)setIdle:(_Bool)arg1;	// IMP=0x0000000000b06000
@property(readonly, getter=isIdle) _Bool idle; // @synthesize idle=_idle;
- (void)setAuthenticated:(_Bool)arg1;	// IMP=0x0000000000b05f89
@property(readonly, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (void)setOpen:(_Bool)arg1;	// IMP=0x0000000000b05f12
@property(readonly, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void)setMaximumRemoteStreams:(id)arg1;	// IMP=0x0000000000b05e87
@property(readonly, copy) NSNumber *maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain) HMDDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)dealloc;	// IMP=0x0000000000b059b7
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 clientMode:(_Bool)arg3 sessionID:(id)arg4 accountRegistry:(id)arg5;	// IMP=0x0000000000b05731

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end
