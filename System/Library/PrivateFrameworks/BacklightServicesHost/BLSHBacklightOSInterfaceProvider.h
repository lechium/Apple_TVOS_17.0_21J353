//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHBacklightOSTimerProvider.h"

@class BLSHCriticalAssertProvider, BLSHSuppressionEvent, BLSHWatchdogProvider, BSContinuousMachTimer, CBDisplayStateClient, CMSuppressionManager, NSDate, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol BLSCBDisplayStateDelegate, BLSHBacklightPlatformProvider, BLSHWatchdogInvalidatable, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLSHBacklightOSInterfaceProvider : BLSHBacklightOSTimerProvider
{
    id <BLSHBacklightPlatformProvider> _platformProvider;	// 8 = 0x8
    BLSHWatchdogProvider *_watchdogProvider;	// 16 = 0x10
    BLSHCriticalAssertProvider *_criticalAssertProvider;	// 24 = 0x18
    NSMutableDictionary *_lock_sceneObservers;	// 32 = 0x20
    NSMutableSet *_lock_sceneWorkspaces;	// 40 = 0x28
    BLSHSuppressionEvent *_lock_lastSuppressionEvent;	// 48 = 0x30
    CBDisplayStateClient *_displayStateClient;	// 56 = 0x38
    CMSuppressionManager *_suppressionManager;	// 64 = 0x40
    BSContinuousMachTimer *_setCBDisplayModeTimer;	// 72 = 0x48
    struct os_unfair_lock_s _lock;	// 80 = 0x50
    long long _lock_cbDisplayMode;	// 88 = 0x58
    long long _lock_cbFlipbookState;	// 96 = 0x60
    _Bool _lock_suppressionServiceActive;	// 104 = 0x68
    _Bool _lock_caFlipbookEnabled;	// 105 = 0x69
    _Bool _lock_caFlipbookSuppressed;	// 106 = 0x6a
    _Bool _lock_caBlanked;	// 107 = 0x6b
    _Bool _lock_flipbookTransparent;	// 108 = 0x6c
    _Bool _deviceSupportsAlwaysOn;	// 109 = 0x6d
    _Bool _lock_kernelSpecialMode;	// 110 = 0x6e
    _Bool _displayStateClientSupported;	// 111 = 0x6f
    float _backlightDimmedFactor;	// 112 = 0x70
    id <BLSHWatchdogInvalidatable> _lock_watchdogTimer;	// 120 = 0x78
    unsigned long long _lock_watchdogType;	// 128 = 0x80
    double _completionDelayForTesting;	// 136 = 0x88
    unsigned long long _flipbookDiagnosticHistoryFrameLimit;	// 144 = 0x90
    unsigned long long _flipbookDiagnosticHistoryMemoryLimit;	// 152 = 0x98
    id <BLSCBDisplayStateDelegate> _cbDisplayStateDelegate;	// 160 = 0xa0
}

+ (void)setSharedProvider:(id)arg1;	// IMP=0x0010000000003e93
+ (id)sharedProvider;	// IMP=0x0010000000003e59
- (void).cxx_destruct;	// IMP=0x00000000000072a4
@property(retain, setter=setCBDisplayStateDelegate:) id <BLSCBDisplayStateDelegate> cbDisplayStateDelegate; // @synthesize cbDisplayStateDelegate=_cbDisplayStateDelegate;
@property(readonly, nonatomic) unsigned long long flipbookDiagnosticHistoryMemoryLimit; // @synthesize flipbookDiagnosticHistoryMemoryLimit=_flipbookDiagnosticHistoryMemoryLimit;
@property(readonly, nonatomic) unsigned long long flipbookDiagnosticHistoryFrameLimit; // @synthesize flipbookDiagnosticHistoryFrameLimit=_flipbookDiagnosticHistoryFrameLimit;
- (_Bool)isTailspinAvailable;	// IMP=0x0000000000007242
- (void)writeTailspinForWatchdog:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007097
- (_Bool)panicForWatchdog:(id)arg1;	// IMP=0x0000000000007025
- (void)abortForWatchdog:(unsigned long long)arg1 payload:(void *)arg2 payloadSize:(unsigned int)arg3 explanation:(id)arg4;	// IMP=0x0000000000006fb6
@property(nonatomic) double completionDelayForTesting;
- (id)identifier;	// IMP=0x0000000000006eb1
- (id)osInterfaceProvider;	// IMP=0x0000000000006ea8
- (id)abortContext;	// IMP=0x0000000000006d9f
@property(nonatomic, getter=isFlipbookTransparent) _Bool flipbookTransparent;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)didCompleteSwitchToFlipbookState:(long long)arg1 withError:(id)arg2;	// IMP=0x0000000000006a96
- (void)didCompleteTransitionToDisplayMode:(long long)arg1 withError:(id)arg2;	// IMP=0x000000000000675b
- (id)removeSceneObserver:(id)arg1 forSceneIdentityToken:(id)arg2;	// IMP=0x0000000000006490
- (id)addSceneObserver:(id)arg1 forSceneIdentityToken:(id)arg2;	// IMP=0x000000000000608e
- (void)didDetectSignificantUserInteraction;	// IMP=0x0000000000006034
- (void)endSuppressionService;	// IMP=0x0000000000005faa
- (void)startSuppressionServiceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005cb5
@property(readonly, nonatomic) BLSHSuppressionEvent *lastSuppressionEvent;
@property(readonly, nonatomic, getter=isSuppressionServiceActive) _Bool suppressionServiceActive;
@property(readonly, nonatomic) _Bool deviceSupportsAlwaysOn;
- (id)observeSignificantTimeChangeWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005933
- (id)systemSleepMonitor;	// IMP=0x000000000000591a
- (id)createFlipbook;	// IMP=0x0000000000005901
- (id)createSystemActivityAssertionWithIdentifier:(id)arg1;	// IMP=0x00000000000058b4
- (id)createPowerAssertionWithIdentifier:(id)arg1;	// IMP=0x0000000000005867
- (id)scheduleWatchdogWithDelegate:(id)arg1 explanation:(id)arg2 timeout:(double)arg3;	// IMP=0x000000000000584a
- (void)willUnblank;	// IMP=0x0000000000005840
- (void)setShowingBlankingWindow:(_Bool)arg1 fadeDuration:(double)arg2;	// IMP=0x0000000000005823
@property(readonly, nonatomic, getter=isShowingBlankingWindow) _Bool showingBlankingWindow;
- (void)switchToFlipbookState:(long long)arg1;	// IMP=0x00000000000055e5
@property(readonly, nonatomic) long long cbFlipbookState;
@property(readonly, nonatomic) _Bool supportsFlipbookState;
- (void)transitionToDisplayMode:(long long)arg1 withDuration:(double)arg2;	// IMP=0x0000000000004f56
@property(readonly, nonatomic) long long cbDisplayMode;
- (void)dispatchToMainQueueAfterSecondsDelay:(double)arg1 identifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004ed6
@property(nonatomic, getter=isKernelAlwaysOnMode) _Bool kernelAlwaysOnMode;
@property(nonatomic, getter=isCAFlipbookSuppressed, setter=setCAFlipbookSuppressed:) _Bool caFlipbookSuppressed;
@property(nonatomic, getter=isCAFlipbookEnabled, setter=setCAFlipbookEnabled:) _Bool caFlipbookEnabled;
@property(nonatomic, getter=isCABlanked, setter=setCABlanked:) _Bool caBlanked;
- (id)sceneWithIdentityToken:(id)arg1;	// IMP=0x0000000000004976
- (void)deregisterSceneWorkspace:(id)arg1;	// IMP=0x0000000000004915
- (void)registerSceneWorkspace:(id)arg1;	// IMP=0x00000000000048b4
- (void)registerHandlersForService:(id)arg1;	// IMP=0x00000000000047c1
- (id)initWithPlatformProvider:(id)arg1;	// IMP=0x0000000000003ed5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDate *now;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTesting) _Bool testing;

@end

