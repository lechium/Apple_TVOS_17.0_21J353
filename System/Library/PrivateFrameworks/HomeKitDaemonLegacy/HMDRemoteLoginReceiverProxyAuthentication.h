//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginProxyAuthenticationRequest;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginReceiverProxyAuthentication
{
    HMDRemoteLoginProxyAuthenticationRequest *_request;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x006000000049e924
- (void).cxx_destruct;	// IMP=0x000000000049e8fb
@property(readonly, nonatomic) HMDRemoteLoginProxyAuthenticationRequest *request; // @synthesize request=_request;
- (void)_authenticate;	// IMP=0x000000000049e71a
- (void)authenticate;	// IMP=0x000000000049e6a9
- (id)description;	// IMP=0x000000000049e616
- (void)dealloc;	// IMP=0x000000000049e526
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6;	// IMP=0x000000000049e48f

@end

