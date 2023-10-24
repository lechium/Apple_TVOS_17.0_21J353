//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class APSConfiguration, APSCourierConnection, NSData, NSDictionary, NSError, NSString, PCConnectionManager;

@protocol APSCourierConnectionDelegate <NSObject>
- (double)currentKeepAliveInterval;
- (void)courierConnection:(APSCourierConnection *)arg1 parserErrorMessage:(NSString *)arg2 OnInterface:(long long)arg3;
- (void)courierConnection:(APSCourierConnection *)arg1 errorOccured:(NSError *)arg2 onInterface:(long long)arg3;
- (void)courierConnection:(APSCourierConnection *)arg1 streamEndedOnInterface:(long long)arg2 withReason:(unsigned int)arg3;
- (unsigned long long)courierConnection:(APSCourierConnection *)arg1 dataReceived:(NSData *)arg2 onInterface:(long long)arg3 withGeneration:(unsigned long long)arg4 isWakingMessage:(_Bool)arg5;
- (void)courierConnection:(APSCourierConnection *)arg1 disconnectStreamOnInterface:(long long)arg2 withReason:(unsigned int)arg3;
- (void)courierConnection:(APSCourierConnection *)arg1 connectionManager:(PCConnectionManager *)arg2 handleEvent:(int)arg3 context:(NSDictionary *)arg4 onInterface:(long long)arg5;

@optional
- (void)courierConnection:(APSCourierConnection *)arg1 failedToFindKeepAliveProxyOnInterface:(long long)arg2;
- (void)courierConnection:(APSCourierConnection *)arg1 failedToObtainKeepAliveProxyOnInterface:(long long)arg2;
- (void)courierConnection:(APSCourierConnection *)arg1 failedToForceKeepAliveProxyOnInterface:(long long)arg2;
- (void)courierConnection:(APSCourierConnection *)arg1 connectionEstablishTimerFiredOnInterface:(long long)arg2;
- (void)courierConnection:(APSCourierConnection *)arg1 keepAliveResponseTimerFiredOnInterface:(long long)arg2;
- (void)courierConnectionHasConnected:(APSCourierConnection *)arg1 context:(NSDictionary *)arg2 enabledPackedFormat:(_Bool)arg3 secureHandshakeEnabled:(_Bool)arg4 onInterface:(long long)arg5;
- (void)courierConnection:(APSCourierConnection *)arg1 hasDeterminedServerHostname:(NSString *)arg2 onInterface:(long long)arg3;
- (void)courierConnection:(APSCourierConnection *)arg1 receivedServerBag:(APSConfiguration *)arg2;
@end

