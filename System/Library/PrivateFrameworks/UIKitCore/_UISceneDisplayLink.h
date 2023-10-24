//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLink : NSObject
{
    NSMutableArray *_targetsAndActions;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

+ (id)sceneDisplayLinkForWindowScene:(id)arg1;	// IMP=0x00100000006a029c
- (void).cxx_destruct;	// IMP=0x00000000006a0d3b
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_displayLinkTick:(id)arg1;	// IMP=0x00000000006a0967
- (void)_updateStatus;	// IMP=0x00000000006a0759
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;	// IMP=0x00000000006a0747
- (void)unregisterTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000006a045e
- (void)registerTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000006a039e
- (id)initWithScene:(id)arg1;	// IMP=0x00000000006a033a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

