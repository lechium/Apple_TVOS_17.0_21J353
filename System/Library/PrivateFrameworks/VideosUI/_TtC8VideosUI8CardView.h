//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, UIView, VUIImageView;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI8CardView
{
    MISSING_TYPE *debugUI;	// 8 = 0x8
    MISSING_TYPE *cardViewLayout;	// 16 = 0x10
    MISSING_TYPE *imageView;	// 24 = 0x18
    MISSING_TYPE *appImageView;	// 32 = 0x20
    MISSING_TYPE *overlayView;	// 40 = 0x28
    MISSING_TYPE *labelViews;	// 48 = 0x30
    MISSING_TYPE *button;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000041c4bc
@property(nonatomic, readonly) UIView *accessibilityButton;
@property(nonatomic, readonly) NSArray *accessibilityLabelViews;
@property(nonatomic, readonly) UIView *accessibilityOverlayView;
@property(nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property(nonatomic, readonly) VUIImageView *accessibilityImageView;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000041ec41
@property(nonatomic, readonly) _Bool vuiDebugUI;
- (void)dealloc;	// IMP=0x000000000041c49f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041c416
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000041c339

@end

