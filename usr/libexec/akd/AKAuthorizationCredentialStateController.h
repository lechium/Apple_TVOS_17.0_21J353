//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKClient;

@interface AKAuthorizationCredentialStateController : NSObject
{
    AKClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000077092
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (_Bool)_verifyUserID:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x0010000000076e9f
- (id)_fetchDeveloperTeamWithClientID:(id)arg1 withAltDSID:(id)arg2;	// IMP=0x0010000000076c39
- (id)_fetchDeveloperTeamWithTeamID:(id)arg1 withAltDSID:(id)arg2;	// IMP=0x00100000000769ae
- (_Bool)_isDeviceTrustedForRequest:(id)arg1;	// IMP=0x00100000000768f0
- (_Bool)_demoModeEnabled;	// IMP=0x00100000000768a0
- (void)_getCredentialStateWithStateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075722
- (long long)_internalCredentialStateForUserState:(long long)arg1 error:(id)arg2;	// IMP=0x00100000000756b8
- (void)_verifyClientInformationForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075499
- (void)getCredentialStateForClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007536e
- (long long)getInternalCredentialStateForCredentialRequestContext:(id)arg1;	// IMP=0x0010000000074ebb
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000074680
- (id)initWithClient:(id)arg1;	// IMP=0x0010000000074615
- (id)init;	// IMP=0x00100000000745ea

@end

