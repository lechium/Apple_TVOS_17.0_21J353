//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _UITransitionState : NSObject
{
    long long _transitionDirection;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    NSDate *_beginDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004f3acd
@property(readonly, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(readonly, nonatomic) long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
- (id)description;	// IMP=0x00000000004f3a01
- (_Bool)isCompatibleWithTransitionInDirection:(long long)arg1;	// IMP=0x00000000004f39de
@property(readonly, nonatomic) long long effectiveTransitionDirection;
- (void)cleanupWithFinishedState:(_Bool)arg1 completedState:(_Bool)arg2;	// IMP=0x00000000004f3992
- (void)markBeginDate;	// IMP=0x00000000004f3969
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithTransitionDirection:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f38dd

@end

