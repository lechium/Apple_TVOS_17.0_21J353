//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry, HMFFuture, HMFPromise, NSString;
@protocol HMDHomeMembershipVerifier, HMDRemoteMessageTransportReachabilityDelegate;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageTransport : HMFMessageTransport
{
    int _transportType;	// 8 = 0x8
    HMDAccountRegistry *_accountRegistry;	// 16 = 0x10
    long long _qualityOfService;	// 24 = 0x18
    id <HMDRemoteMessageTransportReachabilityDelegate> _reachabilityDelegate;	// 32 = 0x20
    id <HMDHomeMembershipVerifier> _homeMembershipVerifier;	// 40 = 0x28
    HMFFuture *_startFuture;	// 48 = 0x30
    HMFPromise *_startPromise;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000cbad01
+ (id)remoteMessageFromMessage:(id)arg1 secure:(_Bool)arg2 accountRegistry:(id)arg3;	// IMP=0x0010000000cba605
+ (unsigned long long)restriction;	// IMP=0x0010000000cba5f8
+ (id)remoteMessageTransportsForProductInfo:(id)arg1;	// IMP=0x0010000000afebde
- (void).cxx_destruct;	// IMP=0x0000000000cba233
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) HMFPromise *startPromise; // @synthesize startPromise=_startPromise;
@property(readonly, nonatomic) HMFFuture *startFuture; // @synthesize startFuture=_startFuture;
@property(readonly, nonatomic) __weak id <HMDHomeMembershipVerifier> homeMembershipVerifier; // @synthesize homeMembershipVerifier=_homeMembershipVerifier;
@property(nonatomic) __weak id <HMDRemoteMessageTransportReachabilityDelegate> reachabilityDelegate; // @synthesize reachabilityDelegate=_reachabilityDelegate;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (id)dumpState;	// IMP=0x0000000000cba11c
- (void)configureWithHomeMembershipVerifier:(id)arg1;	// IMP=0x0000000000cba108
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;	// IMP=0x0000000000cb9f8c
- (_Bool)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;	// IMP=0x0000000000cb9d7b
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;	// IMP=0x0000000000cb9407
- (id)remoteMessageFromMessage:(id)arg1;	// IMP=0x0000000000cb9380
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;	// IMP=0x0000000000cb92cf
- (_Bool)isValidMessage:(id)arg1;	// IMP=0x0000000000cb92c7
- (id)start;	// IMP=0x0000000000cb926d
@property(readonly, nonatomic, getter=isSecure) _Bool secure;
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x0000000000cb9191
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x0000000000cb90dd
- (id)init;	// IMP=0x0000000000cb9035

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

