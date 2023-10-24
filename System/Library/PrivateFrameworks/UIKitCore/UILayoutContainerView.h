//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol UILayoutContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView
{
    UIView *_shadowView;	// 128 = 0x80
    struct {
        unsigned int delegateRespondsToSemanticContentAttributeChanged:1;
        unsigned int delegateRespondsToViewWillLayoutSubviews:1;
        unsigned int delegateRespondsToWillMoveToWindow:1;
        unsigned int delegateRespondsToDidMoveToWindow:1;
    } _layoutContainerViewFlags;	// 136 = 0x88
    _Bool _usesInnerShadow;	// 140 = 0x8c
    _Bool _usesRoundedCorners;	// 141 = 0x8d
    id <UILayoutContainerViewDelegate> _delegate;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000004a374a
@property(nonatomic) _Bool usesRoundedCorners; // @synthesize usesRoundedCorners=_usesRoundedCorners;
@property(nonatomic) _Bool usesInnerShadow; // @synthesize usesInnerShadow=_usesInnerShadow;
@property(nonatomic) __weak id <UILayoutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x00000000004a367c
- (void)dealloc;	// IMP=0x00000000004a363e
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000004a35ce
- (void)addSubview:(id)arg1;	// IMP=0x00000000004a3578
- (void)_tearDownShadowViews;	// IMP=0x00000000004a3540
- (void)_installShadowViews;	// IMP=0x00000000004a2fa2
- (void)_updateShadowViews;	// IMP=0x00000000004a2f6a
- (void)didMoveToWindow;	// IMP=0x00000000004a2da4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000004a2d2f
- (void)layoutSubviews;	// IMP=0x00000000004a2c2a
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000004a2b58
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000004a2a7c
- (void)_setFlagsFromDelegate:(id)arg1;	// IMP=0x00000000004a29c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004a28bf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004a280e

@end
