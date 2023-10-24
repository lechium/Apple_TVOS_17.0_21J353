//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBAnimationStage : NSObject
{
    double _duration;	// 8 = 0x8
    CDUnknownBlockType _preAnimationBlock;	// 16 = 0x10
    CDUnknownBlockType _animationBlock;	// 24 = 0x18
    CDUnknownBlockType _postAnimationBlock;	// 32 = 0x20
}

+ (id)stageWithDuration:(double)arg1 preAnimationBlock:(CDUnknownBlockType)arg2 animationBlock:(CDUnknownBlockType)arg3 postAnimationBlock:(CDUnknownBlockType)arg4;	// IMP=0x004000000001f8e3
+ (id)stageWithDuration:(double)arg1 animationBlock:(CDUnknownBlockType)arg2 postAnimationBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f8b1
+ (id)stageWithDuration:(double)arg1 preAnimationBlock:(CDUnknownBlockType)arg2 animationBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f884
+ (id)stageWithDuration:(double)arg1 animationBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f852
- (void).cxx_destruct;	// IMP=0x002000000001f9d4
@property(readonly, nonatomic) CDUnknownBlockType postAnimationBlock; // @synthesize postAnimationBlock=_postAnimationBlock;
@property(readonly, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(readonly, nonatomic) CDUnknownBlockType preAnimationBlock; // @synthesize preAnimationBlock=_preAnimationBlock;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;

@end
