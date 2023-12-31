//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVSStateMachine;
@protocol OS_os_log, PBSplitViewStateMachineTransitionHandling;

@interface PBSplitViewStateMachine : NSObject
{
    id <PBSplitViewStateMachineTransitionHandling> _transitionHandler;	// 8 = 0x8
    TVSStateMachine *_machine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001a4c7b
- (void)unhide;	// IMP=0x00100000001a4b58
- (void)hide;	// IMP=0x00100000001a4b33
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a4ad9
- (void)presentWithApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a4a7a
@property(readonly, nonatomic, getter=isPresented) _Bool presented;
@property(retain, nonatomic) NSObject<OS_os_log> *log;
- (id)initWithTransitionHandler:(id)arg1;	// IMP=0x00100000001a3318

@end

