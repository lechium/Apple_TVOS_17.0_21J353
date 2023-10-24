//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, FBDisplayManager, FBProcessManager, FBSSystemService, FBSceneManager, FBSystemService, MISSING_TYPE, NSArray, NSError, NSMutableOrderedSet, NSMutableSet, NSString, PBAppInfoController, PBApplicationRepairService, PBKeyboardPreferenceObserver;
@protocol BSInvalidatable;

@interface PBProcessManager : NSObject
{
    NSMutableOrderedSet *_recentApplicationBundleIdentifiers;	// 8 = 0x8
    FBSSystemService *_systemService;	// 16 = 0x10
    FBSystemService *_fbSystemAppService;	// 24 = 0x18
    FBSceneManager *_fbSceneManager;	// 32 = 0x20
    FBProcessManager *_fbProcessManager;	// 40 = 0x28
    FBDisplayManager *_fbDisplayManager;	// 48 = 0x30
    PBAppInfoController *_appInfoController;	// 56 = 0x38
    NSMutableSet *_pendingSnapshots;	// 64 = 0x40
    MISSING_TYPE *_preventProcessLaunchMonitor;	// 72 = 0x48
    PBApplicationRepairService *_repairService;	// 80 = 0x50
    PBKeyboardPreferenceObserver *_keyboardPreferenceObserver;	// 88 = 0x58
    BSCompoundAssertion *_preventKioskRelaunchBundleIDsCompoundAssertion;	// 96 = 0x60
    id <BSInvalidatable> _airPlayProcessLaunchAssertion;	// 104 = 0x68
    NSError *_lastAppLaunchCompletionError;	// 112 = 0x70
}

+ (id)sharedInstance;	// IMP=0x0020000000229774
+ (id)dependencyDescription;	// IMP=0x001000000022964d
- (void).cxx_destruct;	// IMP=0x002000000022fdfb
@property(readonly, nonatomic) NSError *lastAppLaunchCompletionError; // @synthesize lastAppLaunchCompletionError=_lastAppLaunchCompletionError;
@property(readonly, nonatomic) id <BSInvalidatable> airPlayProcessLaunchAssertion; // @synthesize airPlayProcessLaunchAssertion=_airPlayProcessLaunchAssertion;
@property(readonly, nonatomic) BSCompoundAssertion *preventKioskRelaunchBundleIDsCompoundAssertion; // @synthesize preventKioskRelaunchBundleIDsCompoundAssertion=_preventKioskRelaunchBundleIDsCompoundAssertion;
@property(readonly, nonatomic) PBKeyboardPreferenceObserver *keyboardPreferenceObserver; // @synthesize keyboardPreferenceObserver=_keyboardPreferenceObserver;
@property(readonly, nonatomic) PBApplicationRepairService *repairService; // @synthesize repairService=_repairService;
- (void)appTransitioner:(id)arg1 didCompleteAppTransition:(id)arg2;	// IMP=0x001000000022fbe5
- (_Bool)_shouldRelaunchKioskForTerminatingProcessWithBundleID:(id)arg1;	// IMP=0x001000000022fb02
- (void)terminateCurrentApplicationIfRestrictedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000022f277
- (void)restoreSystemFromSleepWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000022ef63
- (void)prepareSystemForSleepWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000022eecd
- (void)keyboardPreferenceObserver:(id)arg1 didUpdateFromKeyboardStyle:(long long)arg2 toKeyboardStyle:(long long)arg3;	// IMP=0x001000000022ea86
- (void)preventProcessLaunchMonitor:(id)arg1 updatedBundleIDsAdding:(id)arg2 removing:(id)arg3;	// IMP=0x001000000022e59a
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x001000000022dcb6
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x001000000022d462
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x001000000022d45c
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;	// IMP=0x001000000022d3e3
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x001000000022d07d
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x001000000022cff2
- (void)_handleFairplayLaunchFailureForApplication:(id)arg1;	// IMP=0x001000000022cfd9
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(_Bool)arg2;	// IMP=0x001000000022cf69
- (void)systemService:(id)arg1 prepareForShutdownWithOptions:(id)arg2 origin:(id)arg3;	// IMP=0x001000000022ccfe
- (void)_openAppFromRequest:(id)arg1 bundleIdentifier:(id)arg2 URL:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000022c766
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022b9f0
- (_Bool)_handleSpecialURL:(id)arg1;	// IMP=0x001000000022b1dc
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x001000000022af29
- (id)systemServiceApplicationInfoProvider:(id)arg1;	// IMP=0x001000000022aeff
- (id)preventKioskRelaunchForTerminatingBundleIDs:(id)arg1 reason:(id)arg2;	// IMP=0x001000000022accb
- (id)preventKioskRelaunchWithReason:(id)arg1 forTerminatingApplications:(CDUnknownBlockType)arg2;	// IMP=0x001000000022aa79
- (void)reboot;	// IMP=0x001000000022a9f9
- (void)relaunch;	// IMP=0x001000000022a9dd
- (void)ensureTVAirPlayRunning;	// IMP=0x001000000022a9d7
- (void)killApplication:(id)arg1 removeFromRecents:(_Bool)arg2;	// IMP=0x001000000022a70a
- (void)openApplication:(id)arg1 launchURL:(id)arg2 options:(id)arg3 suspended:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000022a347
- (_Bool)isProcessRunningForBundleID:(id)arg1;	// IMP=0x001000000022a161
- (_Bool)isAirPlayViewServicePID:(int)arg1;	// IMP=0x001000000022a009
- (_Bool)isSiriViewServicePID:(int)arg1;	// IMP=0x0010000000229eb1
@property(readonly, copy, nonatomic) NSArray *recentApplicationBundleIdentifiers;
- (void)_setupRecentApplicationIdentifiers:(id)arg1;	// IMP=0x0010000000229d35
- (void)dealloc;	// IMP=0x0010000000229c5e
- (id)init;	// IMP=0x001000000022993e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
