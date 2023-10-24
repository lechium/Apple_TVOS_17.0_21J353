//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemGestureArbiter, PBSystemGestureExpectation, PBSystemGestureKeychordAssistant, PBSystemGestureTable, TVSObserverSet;
@protocol BSInvalidatable, PBSystemGestureDeferringPolicy, PBSystemGestureManagerDebugPublisher, PBSystemGestureRecipeDataSource, PBSystemGestureRecognizerManager;

@interface PBSystemGestureManager : NSObject
{
    id <PBSystemGestureRecognizerManager> _gestureRecognizerManager;	// 8 = 0x8
    PBSystemGestureTable *_table;	// 16 = 0x10
    PBSystemGestureArbiter *_arbiter;	// 24 = 0x18
    id <PBSystemGestureDeferringPolicy> _deferringPolicy;	// 32 = 0x20
    PBSystemGestureKeychordAssistant *_keychordAssistant;	// 40 = 0x28
    TVSObserverSet *_observers;	// 48 = 0x30
    PBSystemGestureExpectation *_testingExpectation;	// 56 = 0x38
    id <BSInvalidatable> _stateCaptureHandle;	// 64 = 0x40
    id <PBSystemGestureManagerDebugPublisher> _debugPublisher;	// 72 = 0x48
    id <PBSystemGestureRecipeDataSource> _dataSource;	// 80 = 0x50
}

+ (id)_gestureRecognizerForDescriptor:(id)arg1;	// IMP=0x00200000000bf640
+ (id)sharedInstance;	// IMP=0x00100000000bc98b
+ (id)dependencyDescription;	// IMP=0x00100000000bc8fc
+ (id)_commandsForSystemGesture:(unsigned long long)arg1;	// IMP=0x001000000009109d
+ (unsigned long long)_systemGestureForTestName:(id)arg1;	// IMP=0x0010000000091049
- (void).cxx_destruct;	// IMP=0x00100000000bf915
@property(readonly, nonatomic) id <PBSystemGestureRecipeDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PBSystemGestureManagerDebugPublisher> debugPublisher; // @synthesize debugPublisher=_debugPublisher;
@property(readonly, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(readonly, nonatomic) PBSystemGestureExpectation *testingExpectation; // @synthesize testingExpectation=_testingExpectation;
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) PBSystemGestureKeychordAssistant *keychordAssistant; // @synthesize keychordAssistant=_keychordAssistant;
@property(readonly, nonatomic) id <PBSystemGestureDeferringPolicy> deferringPolicy; // @synthesize deferringPolicy=_deferringPolicy;
@property(readonly, nonatomic) PBSystemGestureArbiter *arbiter; // @synthesize arbiter=_arbiter;
@property(readonly, nonatomic) PBSystemGestureTable *table; // @synthesize table=_table;
@property(readonly, nonatomic) id <PBSystemGestureRecognizerManager> gestureRecognizerManager; // @synthesize gestureRecognizerManager=_gestureRecognizerManager;
- (void)_notifyObserversDidDisableGestureRecognizerWithAllowedPressTypes:(id)arg1;	// IMP=0x00100000000bf7db
- (void)_notifyObserversDidEnableGestureRecognizerWithAllowedPressTypes:(id)arg1;	// IMP=0x00100000000bf724
- (void)_cancelAllGestureRecognizers;	// IMP=0x00100000000bf60c
- (void)_setupAssistantStateDidChange;	// IMP=0x00100000000bf432
- (_Bool)_prepareGestureRecognizerMatchingDescriptor:(id)arg1;	// IMP=0x00100000000bf25e
- (_Bool)_prepareGestureRecognizersMatchingDescriptors:(id)arg1;	// IMP=0x00100000000bf0ba
- (CDUnknownBlockType)_systemGestureRecipeProviderBlock;	// IMP=0x00100000000befec
- (id)_systemGestureRecipeForSystemGestureType:(unsigned long long)arg1;	// IMP=0x00100000000befb0
- (void)_systemGestureRecognizerStateChanged:(id)arg1;	// IMP=0x00100000000be89d
- (void)removeHandle:(id)arg1 forSystemGestureRecipe:(id)arg2 withReason:(id)arg3;	// IMP=0x00100000000be453
- (void)deactivateHandle:(id)arg1;	// IMP=0x00100000000bdead
- (void)activateHandle:(id)arg1;	// IMP=0x00100000000bd87a
- (id)expectSystemGesture:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bd62b
- (void)addSystemKeychordGestureWithPressTypes:(id)arg1 minimumPressDuration:(double)arg2 target:(id)arg3 action:(SEL)arg4;	// IMP=0x00100000000bd614
- (void)cancelSystemGesture:(unsigned long long)arg1;	// IMP=0x00100000000bd528
- (void)cancelGestureRecognizersWithPressType:(long long)arg1 forReason:(id)arg2;	// IMP=0x00100000000bd2ca
- (id)stateDump;	// IMP=0x00100000000bd1da
- (void)setupAssistantDidFinish;	// IMP=0x00100000000bd1c7
- (id)windowForSystemGestures;	// IMP=0x00100000000bd1a0
- (id)addObserver:(id)arg1;	// IMP=0x00100000000bd179
- (id)newHandleForSystemGesture:(unsigned long long)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bce88
- (void)dealloc;	// IMP=0x00100000000bcd64
- (id)init;	// IMP=0x00100000000bcd0a
- (id)initWithSystemGestureRecognizerManager:(id)arg1;	// IMP=0x00100000000bccf5
- (id)initWithSystemGestureRecognizerManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x00100000000bca12
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0010000000090b26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

