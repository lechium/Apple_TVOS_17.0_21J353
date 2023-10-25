//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID, SMHandle, SMSessionConfiguration, SMSessionMonitorContext;

@protocol SMInitiatorSessionConfigurationProtocol
- (void)promptSafeArrivalWithContext:(SMSessionMonitorContext *)arg1 handler:(void (^)(NSError *))arg2;
- (void)promptTimerEndedVerificationWithContext:(SMSessionMonitorContext *)arg1 handler:(void (^)(NSError *))arg2;
- (void)promptRoundTripAnomalyVerificationWithContext:(SMSessionMonitorContext *)arg1 handler:(void (^)(NSError *))arg2;
- (void)promptDestinationAnomalyVerificationWithContext:(SMSessionMonitorContext *)arg1 handler:(void (^)(NSError *))arg2;
- (void)respondToTriggerPromptForSessionID:(NSUUID *)arg1 response:(long long)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendSafetyCacheForSessionID:(NSUUID *)arg1 handler:(void (^)(NSError *))arg2;
- (void)fetchCurrentSessionStateWithHandler:(void (^)(SMSessionManagerState *, _Bool, NSError *))arg1;
- (void)endSessionForSessionID:(NSUUID *)arg1 reason:(unsigned long long)arg2 handler:(void (^)(NSError *))arg3;
- (void)modifySessionWithConfiguration:(SMSessionConfiguration *)arg1 handler:(void (^)(NSError *))arg2;
- (void)startSessionWithConfiguration:(SMSessionConfiguration *)arg1 handler:(void (^)(NSError *))arg2;
- (void)cancelInitializationForSessionID:(NSUUID *)arg1 handler:(void (^)(NSError *))arg2;
- (void)cancelInitializationWithHandler:(void (^)(NSError *))arg1;
- (void)initializeSessionWithHandle:(SMHandle *)arg1 handler:(void (^)(CKDeviceToDeviceShareInvitationToken *, long long, long long, NSError *))arg2;

@optional
- (void)sendHeartbeatForSessionID:(NSUUID *)arg1 handler:(void (^)(NSError *))arg2;
@end

