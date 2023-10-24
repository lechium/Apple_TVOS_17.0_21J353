//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UITableCellAccessoryButton : UIButton
{
    UIColor *_accessoryTintColor;	// 128 = 0x80
    long long _accessoryType;	// 136 = 0x88
    CDUnknownBlockType _backgroundImageProvider;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000038f736
@property(copy, nonatomic) CDUnknownBlockType backgroundImageProvider; // @synthesize backgroundImageProvider=_backgroundImageProvider;
@property(readonly, nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
- (id)_backgroundImageView;	// IMP=0x000000000038f692
- (id)viewForLastBaselineLayout;	// IMP=0x000000000038f680
- (id)viewForFirstBaselineLayout;	// IMP=0x000000000038f66e
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000000038f5c2
- (void)_reloadBackgroundImage;	// IMP=0x000000000038f541
- (id)initWithFrame:(struct CGRect)arg1 backgroundImageProvider:(CDUnknownBlockType)arg2 accessoryType:(long long)arg3;	// IMP=0x000000000038f40a

@end

