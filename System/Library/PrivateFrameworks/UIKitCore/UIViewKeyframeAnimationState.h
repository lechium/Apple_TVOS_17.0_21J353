//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewAnimationState.h"

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIViewKeyframeAnimationState : UIViewAnimationState
{
    double _frameDuration;	// 280 = 0x118
    double _frameStartTime;	// 288 = 0x120
    long long _calculationMode;	// 296 = 0x128
    NSMutableSet *_keyframeLayers;	// 304 = 0x130
    NSMutableDictionary *_keyframeLayersForCurrentKeyFrameDict;	// 312 = 0x138
    _Bool _inFrame;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00000000013b8f44
- (void)cleanupTrackedLayers;	// IMP=0x00000000013b8e1f
- (void)pop;	// IMP=0x00000000013b88c0
- (id)_updateAnimationFrameWithAnimationProperties:(id)arg1;	// IMP=0x00000000013b8848
- (id)_createDeferredAnimationForKey:(id)arg1;	// IMP=0x00000000013b87ef
- (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(CDUnknownBlockType)arg3;	// IMP=0x00000000013b83d2
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;	// IMP=0x00000000013b8119
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000013b80c8
- (_Bool)_isKeyframeAnimation;	// IMP=0x00000000013b80c0
- (id)init;	// IMP=0x00000000013b8063

@end
