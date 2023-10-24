//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIMenuSystem.h"

@class NSArray, UIMenu, UIResponder, _UIMenuBuilder;

__attribute__((visibility("hidden")))
@interface _UIMainMenuSystem : UIMenuSystem
{
    _UIMenuBuilder *_automaticallyRebuildingBuilder;	// 8 = 0x8
    UIResponder *_initialBuildingResponderOverride;	// 16 = 0x10
}

+ (id)_sharedSystem;	// IMP=0x00400000000ee863
- (void).cxx_destruct;	// IMP=0x00000000000eeb3f
- (_Bool)_buildMenuWithBuilder:(id)arg1 fromResponderChain:(id)arg2 atLocation:(struct CGPoint)arg3 inCoordinateSpace:(id)arg4;	// IMP=0x00000000000eeb10
- (void)_setInitialBuildingResponder:(id)arg1;	// IMP=0x00000000000eeadf
@property(readonly, nonatomic) UIMenu *_rootMenu;
@property(readonly, nonatomic) NSArray *_keyCommands;
- (void)_automaticallyRebuildIfNeeded;	// IMP=0x00000000000ee9a7
- (void)setNeedsRebuild;	// IMP=0x00000000000ee95d
- (void)dealloc;	// IMP=0x00000000000ee92e
- (id)_init;	// IMP=0x00000000000ee8f8

@end
