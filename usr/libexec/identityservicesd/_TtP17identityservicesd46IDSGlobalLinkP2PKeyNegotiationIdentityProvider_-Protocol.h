//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSPushToken;

@protocol _TtP17identityservicesd46IDSGlobalLinkP2PKeyNegotiationIdentityProvider_
- (void (^)(void))addPreKeyChangeHandler:(void (^)(void))arg1;
- (struct __SecKey *)publicKeyForPushToken:(IDSPushToken *)arg1;
@property(nonatomic, readonly) struct __SecKey *previousLocalPrivatePreKey;
@property(nonatomic, readonly) struct __SecKey *previousLocalPublicPreKey;
@property(nonatomic, readonly) struct __SecKey *localPrivatePreKey;
@property(nonatomic, readonly) struct __SecKey *localPublicPreKey;
@end

