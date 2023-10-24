//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet, NSObject, NSString, UIScreen, UIWindowScene;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClientInputDestination
{
    _Bool _deactivatedBySystemAnimation;	// 24 = 0x18
    _Bool _resignActiveByControlCenter;	// 25 = 0x19
    _Bool _hadFocusBeforeOverlay;	// 26 = 0x1a
    UIWindowScene *_suppressedScene;	// 32 = 0x20
    int _hostedCount;	// 40 = 0x28
    UIScreen *_lastScreen;	// 48 = 0x30
    _Bool _resigningByOtherApp;	// 56 = 0x38
    NSObject<OS_os_transaction> *_clientChangeResponseTransaction;	// 64 = 0x40
    struct os_unfair_lock_s _clientChangeResponseLock;	// 72 = 0x48
    NSString *_keyboardSceneIdentifierEnteringForeground;	// 80 = 0x50
    _Bool _updatingKeyWindow;	// 88 = 0x58
    NSString *_focusedSceneIdentityStringOrIdentifier;	// 96 = 0x60
    NSMutableSet *_pendingKeyboardGrabs;	// 104 = 0x68
    NSMutableSet *_activePIDs;	// 112 = 0x70
    NSMutableDictionary *_callerIDs;	// 120 = 0x78
}

+ (id)currentBundleIdentifier;	// IMP=0x006000000147c38e
- (void).cxx_destruct;	// IMP=0x00000000014852b0
@property(nonatomic) _Bool updatingKeyWindow; // @synthesize updatingKeyWindow=_updatingKeyWindow;
@property(retain, nonatomic) NSMutableDictionary *callerIDs; // @synthesize callerIDs=_callerIDs;
@property(retain, nonatomic) NSMutableSet *activePIDs; // @synthesize activePIDs=_activePIDs;
@property(retain, nonatomic) NSMutableSet *pendingKeyboardGrabs; // @synthesize pendingKeyboardGrabs=_pendingKeyboardGrabs;
@property(copy, nonatomic) NSString *focusedSceneIdentityStringOrIdentifier; // @synthesize focusedSceneIdentityStringOrIdentifier=_focusedSceneIdentityStringOrIdentifier;
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001484c4a
- (void)queue_setKeyboardDisabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001484b21
- (void)queue_activeProcessResignWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000001484a11
- (void)keyboardUIDidChange:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x0000000001484612
- (void)syncKeyboardUIChangeInfo:(id)arg1;	// IMP=0x000000000148453f
- (void)queue_keyboardUIDidChange:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x0000000001484310
- (void)handleKeyboardUIDidChange:(id)arg1;	// IMP=0x0000000001482f23
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x0000000001482719
- (void)queue_endInputSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000014825d7
- (void)peekApplicationEvent:(id)arg1;	// IMP=0x0000000001481fbd
- (_Bool)_sceneFocusUpdatePermittedForWindow:(id)arg1;	// IMP=0x0000000001481b59
- (_Bool)_sceneFocusPermittedForApplication;	// IMP=0x0000000001481b16
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000014815b7
- (void)completeMoveKeyboard;	// IMP=0x000000000148153d
- (void)updateWindowState;	// IMP=0x00000000014814f0
- (void)setWindowEnabled:(_Bool)arg1 force:(_Bool)arg2;	// IMP=0x000000000148123e
- (void)setWindowEnabled:(_Bool)arg1;	// IMP=0x000000000148122a
- (void)resignFirstResponderIfNeeded;	// IMP=0x0000000001481049
- (_Bool)allowedToEnableKeyboardWindow;	// IMP=0x0000000001480d78
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0000000001480cb8
- (void)clearKeyboardSceneIdentifierEnteringForeground:(id)arg1;	// IMP=0x0000000001480c14
- (void)setKeyboardSceneIdentifierEnteringForegroundForScene:(id)arg1;	// IMP=0x0000000001480bd8
- (void)sceneDidActivate:(id)arg1;	// IMP=0x0000000001480bc6
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0000000001480bb4
- (_Bool)allowedToShowKeyboard;	// IMP=0x0000000001480b6b
- (_Bool)needsToShowKeyboardForViewServiceHost;	// IMP=0x0000000001480b32
- (_Bool)needsToShowKeyboard;	// IMP=0x0000000001480af9
- (struct CGRect)keyboardFrameIncludingRemoteIAV;	// IMP=0x0000000001480a9d
- (void)finishWithHostedWindow;	// IMP=0x0000000001480a48
- (id)prepareForHostedWindowWithScene:(id)arg1;	// IMP=0x00000000014809b6
- (_Bool)wantsToShowKeyboardForViewServiceHost;	// IMP=0x00000000014809a4
- (_Bool)wantsToShowKeyboard;	// IMP=0x0000000001480922
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;	// IMP=0x00000000014807d9
- (void)removeWindowHostingPID:(int)arg1 callerID:(id)arg2;	// IMP=0x0000000001480625
- (void)addWindowHostingPID:(int)arg1 callerID:(id)arg2;	// IMP=0x00000000014804ea
- (_Bool)hasWindowHostingCallerID:(id)arg1;	// IMP=0x00000000014803bf
- (_Bool)hasWindowHostingPID:(int)arg1;	// IMP=0x0000000001480344
- (_Bool)isHostedInAnotherProcess;	// IMP=0x0000000001480277
- (void)applicationKeyWindowDidChange:(id)arg1;	// IMP=0x000000000147fffd
- (id)_activeScreen;	// IMP=0x000000000147ff1f
- (unsigned long long)localSceneCount;	// IMP=0x000000000147fd90
- (void)signalToProxyKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000147fc6e
- (_Bool)_didHandleKeyboardClientChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(_Bool)arg2 isLocalEvent:(_Bool)arg3;	// IMP=0x000000000147ee31
- (void)_layoutKeyboardViews:(id)arg1;	// IMP=0x000000000147eb58
- (void)_preserveInputViewsForClientChange:(_Bool)arg1 snapshotIfNecessary:(_Bool)arg2;	// IMP=0x000000000147eb46
- (_Bool)inputDestinationDidChange:(_Bool)arg1 withIAVHeight:(double)arg2 isIAVRelevant:(_Bool)arg3 notifyRemote:(_Bool)arg4 forScene:(id)arg5;	// IMP=0x000000000147ddbc
- (_Bool)shouldIgnoreInputDestinationChange:(_Bool)arg1 withIAVHeight:(double)arg2;	// IMP=0x000000000147dd33
- (void)setSuppressingKeyboard:(_Bool)arg1 forScene:(id)arg2;	// IMP=0x000000000147d83e
- (void)didBecomeActive:(id)arg1;	// IMP=0x000000000147d82c
- (void)willResignActive:(id)arg1;	// IMP=0x000000000147d826
- (void)didRemoveDeactivationReason:(id)arg1;	// IMP=0x000000000147d640
- (void)willAddDeactivationReason:(id)arg1;	// IMP=0x000000000147d4a5
- (void)didSuspend:(id)arg1;	// IMP=0x000000000147d2fa
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x000000000147c7b3
- (void)willResume:(id)arg1;	// IMP=0x000000000147c421
- (void)restorePreservedInputViewsIfNecessary;	// IMP=0x000000000147c34c
- (_Bool)shouldSnapshot;	// IMP=0x000000000147c2f1
- (void)setSnapshotting:(_Bool)arg1;	// IMP=0x000000000147c146
- (void)setCurrentClientState:(id)arg1;	// IMP=0x000000000147c070
- (void)didFailArbiterConnection;	// IMP=0x000000000147c02d
- (void)configureArbiterCommunication:(id)arg1;	// IMP=0x000000000147be72
- (void)stopConnection;	// IMP=0x000000000147be31
- (void)startConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000147bbe5
- (void)startConnection;	// IMP=0x000000000147bbd1
- (id)currentHostedPIDs;	// IMP=0x000000000147bb81
- (id)init;	// IMP=0x000000000147b90b

@end

