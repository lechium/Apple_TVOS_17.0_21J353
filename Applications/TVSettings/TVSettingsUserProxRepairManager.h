//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSRecursiveLock, NSString, PBSIgnoreUserProfileAccountNotificationsAssertion, PBSUserProfile, RBSAssertion, SFAuthenticateAccountsService, TVSettingsUserProfilesValidator, UMUserPersonaContext;
@protocol TVSettingsUserProxRepairManagerDelegate;

@interface TVSettingsUserProxRepairManager : NSObject
{
    id <TVSettingsUserProxRepairManagerDelegate> _delegate;	// 8 = 0x8
    SFAuthenticateAccountsService *_authService;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    PBSUserProfile *_userProfile;	// 32 = 0x20
    NSRecursiveLock *_lock;	// 40 = 0x28
    PBSIgnoreUserProfileAccountNotificationsAssertion *_ignoreAccountNotificationAssertion;	// 48 = 0x30
    RBSAssertion *_processAssertion;	// 56 = 0x38
    TVSettingsUserProfilesValidator *_userProfilesValidator;	// 64 = 0x40
    ACAccountStore *_accountStore;	// 72 = 0x48
    NSArray *_signedInAccounts;	// 80 = 0x50
    UMUserPersonaContext *_initialPersonaContext;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000006c488
@property(retain, nonatomic) UMUserPersonaContext *initialPersonaContext; // @synthesize initialPersonaContext=_initialPersonaContext;
@property(retain, nonatomic) NSArray *signedInAccounts; // @synthesize signedInAccounts=_signedInAccounts;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) TVSettingsUserProfilesValidator *userProfilesValidator; // @synthesize userProfilesValidator=_userProfilesValidator;
@property(retain, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) PBSIgnoreUserProfileAccountNotificationsAssertion *ignoreAccountNotificationAssertion; // @synthesize ignoreAccountNotificationAssertion=_ignoreAccountNotificationAssertion;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) PBSUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) SFAuthenticateAccountsService *authService; // @synthesize authService=_authService;
@property(nonatomic) __weak id <TVSettingsUserProxRepairManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelIfNotConnectedYet;	// IMP=0x001000000006c248
- (void)_cleanUp;	// IMP=0x001000000006c0b8
- (void)_finishWithError:(id)arg1;	// IMP=0x001000000006b9fc
- (void)_finish;	// IMP=0x001000000006af95
- (void)_restorePersona;	// IMP=0x001000000006adfb
- (void)_adoptPersona;	// IMP=0x001000000006aa30
- (void)_handleAuthServiceProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0010000000069e22
- (void)authenticateAccountsService:(id)arg1 didFinishAuthentication:(id)arg2;	// IMP=0x0010000000069d16
- (void)authenticateAccountsService:(id)arg1 didAttemptSignInWithAccountType:(unsigned int)arg2;	// IMP=0x0010000000069c70
- (void)authenticateAccountsService:(id)arg1 willAttemptSignInWithAccountType:(unsigned int)arg2;	// IMP=0x0010000000069bca
- (_Bool)authenticateAccountsService:(id)arg1 shouldSignInAccounts:(id)arg2;	// IMP=0x0010000000069658
- (void)stop;	// IMP=0x0010000000069480
- (void)dealloc;	// IMP=0x0010000000069442
- (void)startWithUser:(id)arg1 needsCDPRepair:(_Bool)arg2;	// IMP=0x00100000000689e1
- (id)init;	// IMP=0x001000000006896c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

