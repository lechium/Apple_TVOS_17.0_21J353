//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNNode, SCNOffscreenRenderer, SCNScene, SKTransition;

__attribute__((visibility("hidden")))
@interface SCNRendererTransitionContext : NSObject
{
    double _transitionStartTime;	// 8 = 0x8
    SKTransition *_transition;	// 16 = 0x10
    SCNScene *_outgoingScene;	// 24 = 0x18
    SCNNode *_outgoingPointOfView;	// 32 = 0x20
    CDUnknownBlockType completionHandler;	// 40 = 0x28
    struct __C3DFXPass *_transitionPass;	// 48 = 0x30
    SCNOffscreenRenderer *_renderers[2];	// 56 = 0x38
}

@property(retain, nonatomic) SCNNode *outgoingPointOfView; // @synthesize outgoingPointOfView=_outgoingPointOfView;
@property(nonatomic) double transitionStartTime; // @synthesize transitionStartTime=_transitionStartTime;
@property(retain, nonatomic) SKTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) SCNScene *outgoingScene; // @synthesize outgoingScene=_outgoingScene;
- (void)dealloc;	// IMP=0x00000000001b4008
- (id)prepareRendererAtIndex:(int)arg1 withScene:(id)arg2 renderSize:(struct CGSize)arg3 pointOfView:(id)arg4 parentRenderer:(id)arg5;	// IMP=0x00000000001b3e8d
- (struct __C3DFXPass *)transitionPass;	// IMP=0x00000000001b3e39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b3d97

@end

