//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSymbolContentTransition, _UIImageViewPendingSymbolContentTransition;
@protocol _UIImageViewSymbolAnimationPresetClient;

__attribute__((visibility("hidden")))
@interface _UIImageViewSymbolAnimationPresetManager : NSObject
{
    NSMutableArray *_activeSymbolEffects;	// 8 = 0x8
    NSMutableArray *_pendingSymbolEffects;	// 16 = 0x10
    NSSymbolContentTransition *_activeSymbolContentTransition;	// 24 = 0x18
    _UIImageViewPendingSymbolContentTransition *_pendingSymbolContentTransition;	// 32 = 0x20
    id <_UIImageViewSymbolAnimationPresetClient> _client;	// 40 = 0x28
}

+ (id)managerForClient:(id)arg1;	// IMP=0x0060000000ff1aac
- (void).cxx_destruct;	// IMP=0x0000000000ff2f3d
@property(nonatomic) __weak id <_UIImageViewSymbolAnimationPresetClient> client; // @synthesize client=_client;
- (void)discardPendingSymbolContentTransitions;	// IMP=0x0000000000ff2e98
- (void)activeSymbolContentTransitionDidComplete:(id)arg1;	// IMP=0x0000000000ff2ddb
- (void)activatePendingSymbolContentTransition:(id)arg1;	// IMP=0x0000000000ff2d71
- (id)pendingSymbolContentTransitionForSettingSymbolImage:(id)arg1;	// IMP=0x0000000000ff2c7a
- (void)addPendingSymbolContentTransition:(id)arg1 fromSymbolImage:(id)arg2 toSymbolImage:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000ff2c39
- (_Bool)_symbolEffect:(id)arg1 collidesWithSymbolEffect:(id)arg2 forAddingEffect:(_Bool)arg3;	// IMP=0x0000000000ff2b77
- (void)removeAllSymbolEffectsWithOptions:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ff29af
- (void)_removeSymbolEffectsOfType:(id)arg1 options:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 forAddingNewEffect:(_Bool)arg5;	// IMP=0x0000000000ff2503
- (void)removeSymbolEffectsOfType:(id)arg1 options:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000ff24e1
- (void)activeSymbolEffectDidComplete:(id)arg1;	// IMP=0x0000000000ff2322
- (void)_activateActiveSymbolEffectEntry:(id)arg1;	// IMP=0x0000000000ff2042
- (void)activatePendingSymbolEffects;	// IMP=0x0000000000ff1e92
- (void)addPendingSymbolEffect:(id)arg1 options:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000ff1d82
- (void)addActiveSymbolEffect:(id)arg1 options:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000ff1c69
- (_Bool)hasPendingAnimationsForImage:(id)arg1;	// IMP=0x0000000000ff1b92
- (id)init;	// IMP=0x0000000000ff1af5

@end

