//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TIImageCacheClient, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    TIImageCacheClient *_store;	// 8 = 0x8
    NSSet *_layouts;	// 16 = 0x10
    NSMutableSet *_activeRenderers;	// 24 = 0x18
    _UIActionWhenIdle *_idleAction;	// 32 = 0x20
}

+ (_Bool)enabledForTraitCollection:(id)arg1;	// IMP=0x0060000000a7fac5
+ (_Bool)enabled;	// IMP=0x0060000000a7f966
+ (id)sharedInstance;	// IMP=0x0060000000a7f929
- (void).cxx_destruct;	// IMP=0x0000000000a825cb
@property(retain, nonatomic) _UIActionWhenIdle *idleAction; // @synthesize idleAction=_idleAction;
- (void)decrementExpectedRender:(id)arg1;	// IMP=0x0000000000a824d0
- (void)incrementExpectedRender:(id)arg1;	// IMP=0x0000000000a82452
- (void)updateCacheForInputModes:(id)arg1;	// IMP=0x0000000000a822d7
- (id)uniqueLayoutsFromInputModes:(id)arg1;	// IMP=0x0000000000a82131
- (void)_didIdleAndShouldWait;	// IMP=0x0000000000a820bc
- (void)_didIdle;	// IMP=0x0000000000a8208b
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;	// IMP=0x0000000000a80994
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0000000000a80834
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;	// IMP=0x0000000000a800e1
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2 traitCollection:(id)arg3;	// IMP=0x0000000000a80006
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;	// IMP=0x0000000000a7fe70
- (void)purge;	// IMP=0x0000000000a7fe5a
- (void)clearNonPersistentCache;	// IMP=0x0000000000a7fe41
- (void)commitTransaction;	// IMP=0x0000000000a7fe28
- (void)dealloc;	// IMP=0x0000000000a7fd9d
- (id)init;	// IMP=0x0000000000a7fba9

@end
