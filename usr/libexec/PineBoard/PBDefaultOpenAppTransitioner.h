//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSString, PBApplicationLaunchBreadcrumbs, PBOpenAppTransition, PBSystemGestureHandle, TVSConcurrentTransactionManager, TVSSerialTransactionManager;
@protocol BSInvalidatable;

@interface PBDefaultOpenAppTransitioner : NSObject
{
    id <BSInvalidatable> _stateCaptureHandle;	// 8 = 0x8
    TVSSerialTransactionManager *_foregroundOpenAppTransactionManager;	// 16 = 0x10
    TVSConcurrentTransactionManager *_backgroundOpenAppTransactionManager;	// 24 = 0x18
    NSHashTable *_openAppObservers;	// 32 = 0x20
    NSMutableArray *_coldBootQueuedTransitions;	// 40 = 0x28
    PBApplicationLaunchBreadcrumbs *_deepLinkingAppHistory;	// 48 = 0x30
    PBOpenAppTransition *_activeTransition;	// 56 = 0x38
    PBSystemGestureHandle *_cancelActiveTransitionGesture;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x00200000000730ca
+ (id)dependencyDescription;	// IMP=0x001000000007303b
- (void).cxx_destruct;	// IMP=0x00200000000752cb
@property(readonly, nonatomic) PBSystemGestureHandle *cancelActiveTransitionGesture; // @synthesize cancelActiveTransitionGesture=_cancelActiveTransitionGesture;
@property(retain, nonatomic) PBOpenAppTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(readonly, nonatomic) PBApplicationLaunchBreadcrumbs *deepLinkingAppHistory; // @synthesize deepLinkingAppHistory=_deepLinkingAppHistory;
@property(readonly, nonatomic) NSMutableArray *coldBootQueuedTransitions; // @synthesize coldBootQueuedTransitions=_coldBootQueuedTransitions;
@property(readonly, nonatomic) NSHashTable *openAppObservers; // @synthesize openAppObservers=_openAppObservers;
@property(readonly, nonatomic) TVSConcurrentTransactionManager *backgroundOpenAppTransactionManager; // @synthesize backgroundOpenAppTransactionManager=_backgroundOpenAppTransactionManager;
@property(readonly, nonatomic) TVSSerialTransactionManager *foregroundOpenAppTransactionManager; // @synthesize foregroundOpenAppTransactionManager=_foregroundOpenAppTransactionManager;
@property(readonly, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
- (id)stateDumpBuilder;	// IMP=0x0010000000075232
- (void)transactionManager:(id)arg1 didInterruptTransaction:(id)arg2 forTransaction:(id)arg3;	// IMP=0x001000000007509f
- (void)transactionManager:(id)arg1 willInterruptTransaction:(id)arg2 forTransaction:(id)arg3;	// IMP=0x0010000000074fa2
- (void)transactionManager:(id)arg1 didCompleteTransaction:(id)arg2;	// IMP=0x0010000000074b24
- (void)transactionManager:(id)arg1 willBeginTransaction:(id)arg2;	// IMP=0x0010000000074965
- (void)openAppTransition:(id)arg1 willReportSystemCompletionWithError:(id)arg2;	// IMP=0x00100000000748e9
- (void)openAppTransitionWillStartAnimation:(id)arg1;	// IMP=0x0010000000074765
- (void)openAppTransition:(id)arg1 willLaunchProcess:(id)arg2;	// IMP=0x00100000000745f2
- (void)_updateActiveTransitionSystemGesture;	// IMP=0x0010000000074406
- (void)_handleDeepLinkingForTransaction:(id)arg1;	// IMP=0x001000000007417d
- (void)_deactivateSceneHandle:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000073e20
- (void)_deactivateFocusedAppWithOptions:(id)arg1;	// IMP=0x0010000000073b96
- (void)_addOpenAppTransitionIfPossible:(id)arg1;	// IMP=0x001000000007352e
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000073517
- (void)addObserver:(id)arg1;	// IMP=0x0010000000073500
- (void)handleFocusedAppRequestDeactivationFromFailure:(_Bool)arg1;	// IMP=0x001000000007341b
- (void)addOpenAppTransition:(id)arg1;	// IMP=0x0010000000073408
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (void)dealloc;	// IMP=0x00100000000732f8
- (id)init;	// IMP=0x0010000000073151

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

