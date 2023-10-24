//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CUStateEvent, CUStateMachine, HMDHierarchicalStateMachineState, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHierarchicalStateMachine : HMFObject
{
    _Bool _allowSelfStateTransitions;	// 8 = 0x8
    CUStateMachine *_cuStateMachine;	// 16 = 0x10
    CUStateEvent *_eventCausingStateTransition;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    HMDHierarchicalStateMachineState *_currentHSMState;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000cef625
- (void).cxx_destruct;	// IMP=0x0000000000cef3aa
@property __weak HMDHierarchicalStateMachineState *currentHSMState; // @synthesize currentHSMState=_currentHSMState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CUStateEvent *eventCausingStateTransition; // @synthesize eventCausingStateTransition=_eventCausingStateTransition;
@property(readonly, nonatomic) _Bool allowSelfStateTransitions; // @synthesize allowSelfStateTransitions=_allowSelfStateTransitions;
@property(retain, nonatomic) CUStateMachine *cuStateMachine; // @synthesize cuStateMachine=_cuStateMachine;
- (void)setHSMInternalCurrentState:(id)arg1;	// IMP=0x0000000000cef289
- (id)stateWithName:(id)arg1;	// IMP=0x0000000000cef13b
- (void)getCurrentHSMStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cef083
- (void)setStates:(id)arg1;	// IMP=0x0000000000ceefb8
@property(retain, nonatomic) HMDHierarchicalStateMachineState *initialState; // @dynamic initialState;
- (void)transitionToState:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ceed9f
- (void)transitionToState:(id)arg1;	// IMP=0x0000000000ceed23
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000ceec45
- (void)dispatchEvent:(id)arg1;	// IMP=0x0000000000ceeb8d
- (void)invalidate;	// IMP=0x0000000000ceeb1c
- (void)start;	// IMP=0x0000000000ceeaab
- (id)initWithQueue:(id)arg1 allowSelfStateTransitions:(_Bool)arg2;	// IMP=0x0000000000ceea0b
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000cee9f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
