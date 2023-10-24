//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDMultiUserController, NSString;

@interface AMSDMultiUserService : NSObject
{
    AMSDMultiUserController *_multiUserController;	// 8 = 0x8
}

+ (id)_sanitizeError:(id)arg1;	// IMP=0x002000000002f59e
+ (id)sharedService;	// IMP=0x0010000000029f1d
+ (Class)machService;	// IMP=0x0010000000029f0c
- (void).cxx_destruct;	// IMP=0x002000000002f834
@property(readonly, nonatomic) AMSDMultiUserController *multiUserController; // @synthesize multiUserController=_multiUserController;
- (void)multiUserTokenForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f724
- (id)_multiUserTokenForHomeuser:(id)arg1 home:(id)arg2 database:(id)arg3 qualityOfService:(long long)arg4;	// IMP=0x001000000002e996
- (void)_multiUserTokenForHomeIdentifier:(id)arg1 HomeUserIdentifier:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002dcf0
- (void)setiTunesAccount:(id)arg1 forHomeWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002dc89
- (void);	// IMP=0x001000000002d962
- (void)multiUserTokenForAccount:(id)arg1 homeUserIdentifier:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d335
- (void)invalidateMultiUserTokenForAccount:(id)arg1 homeUserIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cb56
- (void)importMultiUserTokenWithInfoDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c4a4
- (void)iTunesAccountIsHomeOwner:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bc45
- (void)generateInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002a02d
- (id)initWithMultiUserController:(id)arg1;	// IMP=0x0010000000029fc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
