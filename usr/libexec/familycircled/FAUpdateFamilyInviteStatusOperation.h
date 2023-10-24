//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSURL;

@interface FAUpdateFamilyInviteStatusOperation
{
    NSString *_inviteCode;	// 8 = 0x8
    NSURL *_requestUrl;	// 16 = 0x10
    long long _inviteStatus;	// 24 = 0x18
    NSDictionary *_additionalRequestParameters;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000005344
@property(readonly, copy) NSDictionary *additionalRequestParameters; // @synthesize additionalRequestParameters=_additionalRequestParameters;
@property(readonly) long long inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(readonly, copy) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(readonly, copy) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
- (id)updateInviteStatus;	// IMP=0x0010000000005162
- (id)initWithNetworkService:(id)arg1 inviteCode:(id)arg2 inviteStatus:(long long)arg3 requestUrl:(id)arg4 additionalRequestParameters:(id)arg5;	// IMP=0x0010000000005076

@end

