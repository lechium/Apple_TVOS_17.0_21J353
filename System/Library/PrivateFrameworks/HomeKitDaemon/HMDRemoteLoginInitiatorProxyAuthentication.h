//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginInitiatorProxyAuthentication
{
    NSDictionary *_authResults;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00600000000116f8
- (void).cxx_destruct;	// IMP=0x000000000001165d
@property(readonly, nonatomic) NSDictionary *authResults; // @synthesize authResults=_authResults;
- (void)_authenticate;	// IMP=0x0000000000011112
- (void)authenticate;	// IMP=0x00000000000110a1
- (int)loginType;	// IMP=0x0000000000011096
- (id)description;	// IMP=0x000000000001102a
- (void)dealloc;	// IMP=0x0000000000010f3a
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 authResults:(id)arg6;	// IMP=0x0000000000010ea3

@end

