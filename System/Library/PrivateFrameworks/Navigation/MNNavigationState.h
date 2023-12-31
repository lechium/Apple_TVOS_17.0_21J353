//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNLocationProviderCLParameters, MNNavigationStateManager, MNNavigationTraceManager, MNSimulationLocationProvider;

__attribute__((visibility("hidden")))
@interface MNNavigationState : NSObject
{
    double _locationUpdateInterval;	// 8 = 0x8
    double _suggestionUpdateFrequency;	// 16 = 0x10
    MNNavigationStateManager *_stateManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000105866
@property(readonly, nonatomic) __weak MNNavigationStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) double suggestionUpdateFrequency; // @synthesize suggestionUpdateFrequency=_suggestionUpdateFrequency;
@property(readonly, nonatomic) double locationUpdateInterval; // @synthesize locationUpdateInterval=_locationUpdateInterval;
- (_Bool)_isSelectorValidForForwarding:(SEL)arg1;	// IMP=0x0000000000105826
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000001057d6
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000010575d
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000105632
- (void)changeUserOptions:(id)arg1;	// IMP=0x000000000010562c
- (void)postEnterState;	// IMP=0x0000000000105626
- (void)preEnterState;	// IMP=0x0000000000105620
- (void)leaveState;	// IMP=0x000000000010561a
- (void)enterState;	// IMP=0x0000000000105614
- (void)dealloc;	// IMP=0x0000000000105586
- (id)initWithStateManager:(id)arg1;	// IMP=0x00000000001054ab
- (id)init;	// IMP=0x0000000000105497
@property(readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property(readonly, nonatomic) _Bool shouldClearStoredRoutes;
@property(readonly, nonatomic) MNLocationProviderCLParameters *clParameters;
@property(readonly, nonatomic) unsigned long long desiredLocationProviderType;
@property(readonly, nonatomic) _Bool requiresLocationAccess;
@property(readonly, nonatomic) _Bool requiresHighMemoryThreshold;
@property(readonly, nonatomic) unsigned long long type;

@end

