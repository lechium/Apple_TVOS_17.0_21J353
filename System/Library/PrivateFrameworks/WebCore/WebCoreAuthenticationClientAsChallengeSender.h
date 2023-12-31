//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAuthenticationClientAsChallengeSender : NSObject
{
    struct AuthenticationClient *m_client;	// 8 = 0x8
}

- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000cbfb60
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000cbfad0
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x0000000000cbf920
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x0000000000cbf890
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x0000000000cbf790
- (void)detachClient;	// IMP=0x0000000000cbf780
- (struct AuthenticationClient *)client;	// IMP=0x0000000000cbf770
- (id)initWithAuthenticationClient:(struct AuthenticationClient *)arg1;	// IMP=0x0000000000cbf740

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

