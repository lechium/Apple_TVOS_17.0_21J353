//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI21SceneTabBarController : NSObject
{
    MISSING_TYPE *_tabBarInfo;	// 0 = 0x0
    MISSING_TYPE *previousSelectedIndex;	// 0 = 0x0
    MISSING_TYPE *hasSetTabbarIndex;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000002d2635
- (void)willTerminate:(id)arg1;	// IMP=0x00000000002d25be
- (void)willResignActive:(id)arg1;	// IMP=0x00000000002d250a
- (void)updateWithTabBarItems:(id)arg1 setSelectedIdentifierFromDefaults:(_Bool)arg2 appContext:(id)arg3;	// IMP=0x00000000002d2488
- (void)setSelectedIndexForTabBarItemIdentifier:(id)arg1;	// IMP=0x00000000002d12a2
- (id)init;	// IMP=0x00000000002d1175
@property(nonatomic) _Bool tabBarHidden;
- (_Bool)isTabBarHidden;	// IMP=0x00000000002d0dad
@property(nonatomic) unsigned long long selectedIndex;
@property(nonatomic, readonly) NSArray *tabBarItems;

@end

