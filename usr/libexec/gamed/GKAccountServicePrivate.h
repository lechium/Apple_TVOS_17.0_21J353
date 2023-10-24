//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKAccountServicePrivate
{
}

+ (id)lastContactsIntegrationConsentVersionDisplayedForPlayer:(id)arg1;	// IMP=0x002000000000f751
+ (id)lastFriendSuggestionsVersionDisplayedForPlayer:(id)arg1;	// IMP=0x001000000000f4e6
+ (id)lastProfilePrivacyVersionDisplayedForPlayer:(id)arg1;	// IMP=0x001000000000f27b
+ (id)lastPersonalizationVersionDisplayedForPlayer:(id)arg1;	// IMP=0x001000000000f010
+ (unsigned long long)lastPrivacyNoticeVersionDisplayedForPlayer:(id)arg1;	// IMP=0x001000000000ed5f
+ (unsigned long long)lastWelcomeWhatsNewCopyVersionDisplayedForPlayer:(id)arg1;	// IMP=0x001000000000eaae
+ (void)populateLastOnboardingVersionsDisplayedForPlayer:(id)arg1;	// IMP=0x001000000000e966
+ (unsigned long long)requiredEntitlements;	// IMP=0x001000000000e95b
+ (Class)interfaceClass;	// IMP=0x001000000000e94a
- (void)updateClientSettings:(CDUnknownBlockType)arg1;	// IMP=0x0020000000024d78
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000248c8
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000024502
- (oneway void)authenticationCancelled;	// IMP=0x00100000000244ad
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022af5
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022783
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000021935
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000020afd
- (void)_continueAuthenticationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ee2e
- (void)_notifyAllClientsPlayerAuthenticatedFromClient:(id)arg1 withCredential:(id)arg2 replyGroup:(id)arg3;	// IMP=0x001000000001e8da
- (void)_appInitWithGroup:(id)arg1;	// IMP=0x001000000001db3b
- (void)_loadProfileWithGroup:(id)arg1;	// IMP=0x001000000001d3bf
- (void)notifyClient:(id)arg1 authenticationDidChangeWithError:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d122
- (oneway void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 usingFastPath:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001c3ad
- (oneway void)switchLocalPlayerWithAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b508
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 usingFastPath:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001a607
- (void)_preloadDataForGameCenterTabs;	// IMP=0x001000000001a1b3
- (void)_fetchCredentialsForNonActivePlayerForUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001977f
- (void)_fetchCredentialsForAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000194b9
- (void)_fetchCredentialsForUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000018a21
- (void)_primeCacheWithGroup:(id)arg1;	// IMP=0x001000000001869a
- (id)_authenticatedLocalPlayerWithUsername:(id)arg1 inContext:(id)arg2 isValid:(_Bool *)arg3;	// IMP=0x0010000000017d17
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017cf2
- (void)_syncPlayerOnboardingParametersInManagedObjectContext:(id)arg1 withServerResult:(id)arg2;	// IMP=0x0010000000017099
- (void)_initGameForLaunchedApp:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000158f6
- (void)renewAuthToken;	// IMP=0x0010000000014fcc
- (void)_postLaunchEventsForGame:(id)arg1 moc:(id)arg2;	// IMP=0x0010000000014a0e
- (void)_addAchievementPointsEntryForGame:(id)arg1 record:(id)arg2 profile:(id)arg3 moc:(id)arg4;	// IMP=0x00100000000147ae
- (void)_addGameListEntryForGame:(id)arg1 profile:(id)arg2 moc:(id)arg3;	// IMP=0x00100000000145c0
- (void)_constructAuthenticationResponseWithError:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013d84
- (oneway void)getDevicePushTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013cf6
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013bea
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 validateOnly:(_Bool)arg4 active:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000011fe4
- (void)_authenticateUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 validateOnly:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000010509
- (void)updateBadgeCounts;	// IMP=0x001000000000fdf8
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x001000000000fd80
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f9bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

