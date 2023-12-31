//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreUtils/CUState.h>

@class HMDHierarchicalStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HMDHierarchicalStateMachineState : CUState
{
    HMDHierarchicalStateMachine *_hsm;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000043d185
- (void).cxx_destruct;	// IMP=0x000000000043d116
@property(nonatomic) __weak HMDHierarchicalStateMachine *hsm; // @synthesize hsm=_hsm;
- (long long)_internalEventHandler:(id)arg1;	// IMP=0x000000000043cf48
- (void)_registerForEventHandler;	// IMP=0x000000000043cea4
- (void)onInitialTransition:(id)arg1;	// IMP=0x000000000043cce6
- (void)handleExitEvent:(id)arg1;	// IMP=0x000000000043cb67
- (void)handleEnterEvent:(id)arg1;	// IMP=0x000000000043c9e8
- (long long)handleEvent:(id)arg1;	// IMP=0x000000000043c9dd
- (id)initWithName:(id)arg1 parent:(id)arg2;	// IMP=0x000000000043c991

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

