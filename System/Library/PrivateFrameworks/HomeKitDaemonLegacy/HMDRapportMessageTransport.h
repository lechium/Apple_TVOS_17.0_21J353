//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAppleAccountManager, HMDRapportMessaging;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDRapportMessageTransport
{
    HMDRapportMessaging *_rapportMessaging;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
    HMDAppleAccountManager *_appleAccountManager;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000007e4fca
+ (unsigned long long)restriction;	// IMP=0x00100000007e4fbf
- (void).cxx_destruct;	// IMP=0x00000000007e4c40
@property(readonly, nonatomic) HMDAppleAccountManager *appleAccountManager; // @synthesize appleAccountManager=_appleAccountManager;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDRapportMessaging *rapportMessaging; // @synthesize rapportMessaging=_rapportMessaging;
- (id)_rpOptions:(id)arg1 stringForKey:(id)arg2;	// IMP=0x00000000007e4bb4
- (void)_didReceiveRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007e3f5d
- (void)_addSourceDeviceIdentifierToPayload:(id)arg1 withRemoteMessage:(id)arg2;	// IMP=0x00000000007e3c41
- (id)_serializeRemoteMessage:(id)arg1 withResponseErrorData:(id)arg2 serializationError:(id *)arg3;	// IMP=0x00000000007e3b3c
- (void)_sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e33b3
- (void)_setSharedUserIDSIdentifierForDevice:(id)arg1 idsIdentifier:(id)arg2;	// IMP=0x00000000007e31b3
- (id)_deviceForIDSIdentifier:(id)arg1 deviceIdentifier:(id)arg2;	// IMP=0x00000000007e307e
- (id)_IDSIdentifierForDestination:(id)arg1;	// IMP=0x00000000007e2f5e
- (void)_configureRapport;	// IMP=0x00000000007e2e30
- (void)rapportMessaging:(id)arg1 idsIdentifier:(id)arg2 didAppearReachable:(_Bool)arg3;	// IMP=0x00000000007e2db6
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e2da4
- (_Bool)isValidMessage:(id)arg1;	// IMP=0x00000000007e2d13
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x00000000007e2b6f
- (id)start;	// IMP=0x00000000007e2a7e
- (int)transportType;	// IMP=0x00000000007e2a73
- (_Bool)isSecure;	// IMP=0x00000000007e2a6b
- (id)initWithAccountRegistry:(id)arg1 rapportMessaging:(id)arg2 logEventSubmitter:(id)arg3 appleAccountManager:(id)arg4;	// IMP=0x00000000007e2992
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x00000000007e28c5

@end

