//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILayoutGuide.h"

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIContentConstraintsLayoutGuide : UILayoutGuide
{
    _Bool _wantsMaximumSizeConstraintsActive;	// 64 = 0x40
    _Bool _wantsMinimumSizeConstraintsActive;	// 65 = 0x41
    NSLayoutConstraint *_leadingConstraint;	// 72 = 0x48
    NSLayoutConstraint *_trailingConstraint;	// 80 = 0x50
    NSLayoutConstraint *_topConstraint;	// 88 = 0x58
    NSLayoutConstraint *_bottomConstraint;	// 96 = 0x60
    NSLayoutConstraint *_maximumWidthConstraint;	// 104 = 0x68
    NSLayoutConstraint *_maximumHeightConstraint;	// 112 = 0x70
    NSLayoutConstraint *_minimumWidthConstraint;	// 120 = 0x78
    NSLayoutConstraint *_minimumHeightConstraint;	// 128 = 0x80
    struct CGSize _maximumSize;	// 136 = 0x88
    struct CGSize _minimumSize;	// 152 = 0x98
    struct UIEdgeInsets _edgeInsets;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000c7f55
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(readonly, nonatomic) _Bool wantsMinimumSizeConstraintsActive; // @synthesize wantsMinimumSizeConstraintsActive=_wantsMinimumSizeConstraintsActive;
@property(readonly, nonatomic) NSLayoutConstraint *maximumHeightConstraint; // @synthesize maximumHeightConstraint=_maximumHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maximumWidthConstraint; // @synthesize maximumWidthConstraint=_maximumWidthConstraint;
@property(readonly, nonatomic) _Bool wantsMaximumSizeConstraintsActive; // @synthesize wantsMaximumSizeConstraintsActive=_wantsMaximumSizeConstraintsActive;
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)_clearConstraints;	// IMP=0x00000000000c7d89
- (void)_updateAllSizeConstraints;	// IMP=0x00000000000c7b26
- (void)_updateAllMarginConstraintConstants;	// IMP=0x00000000000c7a8c
- (void)_setAllSizeConstraintsActive:(_Bool)arg1;	// IMP=0x00000000000c7a66
- (void)_setAllMarginConstraintsActive:(_Bool)arg1;	// IMP=0x00000000000c7a05
- (id)_allSizeConstraints;	// IMP=0x00000000000c79aa
- (id)_allMarginConstraints;	// IMP=0x00000000000c794f
- (void)setOwningView:(id)arg1;	// IMP=0x00000000000c73a9
- (id)init;	// IMP=0x00000000000c734e

@end

