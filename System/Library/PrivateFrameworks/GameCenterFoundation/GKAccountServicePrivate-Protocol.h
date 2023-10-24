//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKAccountService-Protocol.h>

@class NSDictionary, NSString;

@protocol GKAccountServicePrivate <GKAccountService>
- (oneway void)isICloudAvailableWithHandler:(void (^)(_Bool, NSError *))arg1;
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)accountEdited:(NSString *)arg1 alias:(NSString *)arg2 firstName:(NSString *)arg3 lastName:(NSString *)arg4 handler:(void (^)(void))arg5;
- (oneway void)authenticationCancelled;
- (oneway void)setupAccountForParameters:(NSDictionary *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getDevicePushTokenWithHandler:(void (^)(NSData *))arg1;
- (oneway void)getAccountAuthTokenWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)validateAccountWithUsername:(NSString *)arg1 password:(NSString *)arg2 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg3;
- (oneway void)accountCreated:(NSString *)arg1 playerID:(NSString *)arg2 authenticationToken:(NSString *)arg3 alias:(NSString *)arg4 altDSID:(NSString *)arg5 finished:(_Bool)arg6 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg7;
- (oneway void)accountCreated:(NSString *)arg1 playerID:(NSString *)arg2 authenticationToken:(NSString *)arg3 alias:(NSString *)arg4 finished:(_Bool)arg5 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg6;
- (oneway void)authenticatePlayerWithUsername:(NSString *)arg1 password:(NSString *)arg2 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg3;
- (oneway void)switchLocalPlayerWithAltDSID:(NSString *)arg1 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg2;
- (oneway void)authenticateNonActivePlayerWithUsername:(NSString *)arg1 password:(NSString *)arg2 altDSID:(NSString *)arg3 usingFastPath:(_Bool)arg4 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg5;
- (oneway void)authenticatePlayerWithUsername:(NSString *)arg1 password:(NSString *)arg2 altDSID:(NSString *)arg3 usingFastPath:(_Bool)arg4 handler:(void (^)(GKAuthenticateResponse *, NSError *))arg5;
@end

