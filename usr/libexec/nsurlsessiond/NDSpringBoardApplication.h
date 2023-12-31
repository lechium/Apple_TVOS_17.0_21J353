//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface NDSpringBoardApplication
{
    NSObject<OS_dispatch_source> *_delayTimer;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_nonDiscretionaryGracePeriodTimer;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_extendedNonDiscretionaryGracePeriodTimer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_transitionalDiscretionaryStateTimer;	// 64 = 0x40
    NDSpringBoardApplication *_containingApplication;	// 72 = 0x48
}

+ (id)requestDelayQueue;	// IMP=0x002000000003c7fd
- (void).cxx_destruct;	// IMP=0x002000000003c491
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x001000000003c404
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x001000000003c260
- (void)applicationWasSuspended:(id)arg1 pid:(int)arg2;	// IMP=0x001000000003c22a
- (void)applicationBackgroundUpdatesTurnedOn:(id)arg1;	// IMP=0x001000000003c1f4
- (void)applicationBackgroundUpdatesTurnedOff:(id)arg1;	// IMP=0x001000000003c1be
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x001000000003c188
- (void)startTransitionalDiscretionaryPeriodTimer;	// IMP=0x001000000003c124
- (void)disableTransitionalDiscretionaryPeriodTimer;	// IMP=0x001000000003c0db
- (void)setupTransitionalDiscretionaryPeriodTimer;	// IMP=0x001000000003c00c
- (void)removeObserver:(id)arg1;	// IMP=0x001000000003be9f
- (void)addObserver:(id)arg1;	// IMP=0x001000000003bc73
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x001000000003bc04
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x001000000003bb95
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x001000000003bad4
- (_Bool)canBeSuspended;	// IMP=0x001000000003bacc
- (_Bool)isForeground;	// IMP=0x001000000003ba5d
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x001000000003ba55
- (_Bool)shouldElevateDiscretionaryPriority;	// IMP=0x001000000003ba4d
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000003b927
- (void)_onqueue_resetRequestDelay;	// IMP=0x001000000003b86f
- (void)setupDelayTimer;	// IMP=0x001000000003b798
- (_Bool)supportsWakes;	// IMP=0x001000000003b790
- (_Bool)usesContainerManagerForAVAsset;	// IMP=0x001000000003b788
- (id)containerURL;	// IMP=0x001000000003b711
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000003b59b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

