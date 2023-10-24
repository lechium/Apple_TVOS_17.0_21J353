//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUIFoundation/NSObject-Protocol.h>

@class NSString, SRUIFStateMachine;

@protocol SRUIFStateMachineDelegate <NSObject>
- (void)stateMachine:(SRUIFStateMachine *)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;

@optional
- (void)stateMachine:(SRUIFStateMachine *)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3 eventTimeStamp:(double)arg4;
- (NSString *)stateMachine:(SRUIFStateMachine *)arg1 descriptionForEvent:(long long)arg2;
@end

