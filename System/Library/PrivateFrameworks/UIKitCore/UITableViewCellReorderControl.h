//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIColor, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl
{
    UITableViewCell *_cell;	// 128 = 0x80
    struct CGPoint _downPoint;	// 136 = 0x88
    double _focalY;	// 152 = 0x98
    double _focalHeight;	// 160 = 0xa0
    UIImageView *_imageView;	// 168 = 0xa8
    UIColor *_accessoryTintColor;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000001027e0b
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
- (id)_imageView;	// IMP=0x0000000001027de5
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000001027d99
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001027d44
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001027cb5
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001027c14
- (_Bool)shouldTrack;	// IMP=0x0000000001027bbf
- (void)setTracking:(_Bool)arg1;	// IMP=0x0000000001027b7e
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000001027ad2
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000001027a78
- (void)_updateImageView;	// IMP=0x0000000001027a24
- (void)layoutSubviews;	// IMP=0x0000000001027924
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;	// IMP=0x00000000010278a3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000102786e
- (id)initWithTableViewCell:(id)arg1;	// IMP=0x00000000010275dd
- (id)grabberImage;	// IMP=0x00000000010273f5

@end
