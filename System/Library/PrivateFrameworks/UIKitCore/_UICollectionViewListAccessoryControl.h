//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIColor, UIImageView;
@protocol UITableConstants;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListAccessoryControl : UIControl
{
    UIImageView *_imageView;	// 128 = 0x80
    _Bool _needsImageViewUpdate;	// 136 = 0x88
    long long _type;	// 144 = 0x90
    id <UITableConstants> _constants;	// 152 = 0x98
    CDUnknownBlockType _actionHandler;	// 160 = 0xa0
    UIColor *_accessoryTintColor;	// 168 = 0xa8
    UIColor *_accessoryBackgroundColor;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000948fbd
@property(retain, nonatomic) UIColor *accessoryBackgroundColor; // @synthesize accessoryBackgroundColor=_accessoryBackgroundColor;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <UITableConstants> constants; // @synthesize constants=_constants;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)_renderedImage;	// IMP=0x0000000000948f32
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000948f06
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000948eda
- (void)layoutSubviews;	// IMP=0x0000000000948dc2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000948d50
- (void)_updateImageViewIfNeeded;	// IMP=0x0000000000948a97
- (void)_setNeedsImageViewUpdate;	// IMP=0x0000000000948a7a
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000948a16
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000009489d5
- (void)_executeActionHandler;	// IMP=0x0000000000948891
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x00000000009487fb
- (id)initWithType:(long long)arg1 constants:(id)arg2;	// IMP=0x00000000009486a4

@end

