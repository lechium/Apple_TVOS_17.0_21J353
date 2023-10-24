//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, _UIContextMenuCellContentView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuMediumCellLayout : NSObject
{
    _UIContextMenuCellContentView *_contentView;	// 8 = 0x8
    NSArray *_managedConstraints;	// 16 = 0x10
    NSLayoutConstraint *_topConstraint;	// 24 = 0x18
    NSLayoutConstraint *_primaryViewCenterYConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomConstraint;	// 40 = 0x28
    NSLayoutConstraint *_fittingBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_minimumHeightConstraint;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005d8159
@property(retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *fittingBottomConstraint; // @synthesize fittingBottomConstraint=_fittingBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryViewCenterYConstraint; // @synthesize primaryViewCenterYConstraint=_primaryViewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSArray *managedConstraints; // @synthesize managedConstraints=_managedConstraints;
@property(nonatomic) __weak _UIContextMenuCellContentView *contentView; // @synthesize contentView=_contentView;
- (_Bool)_hasTitle;	// IMP=0x00000000005d7ff7
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000005d7ff1
- (void)removeConstraints;	// IMP=0x00000000005d7f8a
- (void)updateConstraints;	// IMP=0x00000000005d7caa
- (void)installConstraints;	// IMP=0x00000000005d71f6
@property(readonly, nonatomic) long long focusStyle;
@property(readonly, nonatomic) UIColor *preferredBackgroundColorForCurrentState;
@property(readonly, nonatomic) UIColor *preferredContentColorForCurrentState;
- (id)preferredIconFontUsingBoldFont:(_Bool)arg1;	// IMP=0x00000000005d7173
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets backgroundViewInsets;
@property(readonly, nonatomic) unsigned long long labelMaximumNumberOfLines;
@property(readonly, nonatomic) long long labelTextAlignment;
@property(readonly, nonatomic) long long layoutSize;
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000005d7096

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

