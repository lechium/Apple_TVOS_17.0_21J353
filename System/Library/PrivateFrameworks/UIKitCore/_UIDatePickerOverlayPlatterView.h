//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, UIDatePicker, _UIDatePickerStyle, _UIRoundedRectShadowView;

__attribute__((visibility("hidden")))
@interface _UIDatePickerOverlayPlatterView : UIView
{
    _Bool _accessoryViewIgnoresDefaultInsets;	// 128 = 0x80
    UIDatePicker *_datePicker;	// 136 = 0x88
    _UIRoundedRectShadowView *_shadowView;	// 144 = 0x90
    UIView *_backgroundView;	// 152 = 0x98
    UIView *_accessoryView;	// 160 = 0xa0
    UIView *_previousContentView;	// 168 = 0xa8
    UIView *_contentView;	// 176 = 0xb0
    NSLayoutConstraint *_contentWidthConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_contentHeightConstraint;	// 192 = 0xc0
    _UIDatePickerStyle *_datePickerStyle;	// 200 = 0xc8
    struct CGRect _contentBounds;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00000000012bb6e3
@property(readonly, nonatomic) _UIDatePickerStyle *datePickerStyle; // @synthesize datePickerStyle=_datePickerStyle;
@property(readonly, nonatomic) NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentWidthConstraint; // @synthesize contentWidthConstraint=_contentWidthConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *previousContentView; // @synthesize previousContentView=_previousContentView;
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) _UIRoundedRectShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(nonatomic) _Bool accessoryViewIgnoresDefaultInsets; // @synthesize accessoryViewIgnoresDefaultInsets=_accessoryViewIgnoresDefaultInsets;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)datePickerTransitionCompletion;	// IMP=0x00000000012bb572
- (void)datePickerTransitionAnimation;	// IMP=0x00000000012bb4af
- (void)prepareDatePickerTransitionWithDatePicker:(id)arg1;	// IMP=0x00000000012bb3eb
- (struct CGSize)preferredPlatterSize;	// IMP=0x00000000012bafdb
- (struct CGSize)preferredContentSize;	// IMP=0x00000000012bad3e
- (void)layoutSubviews;	// IMP=0x00000000012bac4e
- (void)updateConstraints;	// IMP=0x00000000012ba8b8
- (void)replaceDatePicker:(id)arg1;	// IMP=0x00000000012ba5e9
- (id)initWithDatePicker:(id)arg1 accessoryView:(id)arg2;	// IMP=0x00000000012ba369

@end

