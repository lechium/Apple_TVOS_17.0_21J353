//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UITargetedPreview, _UIMorphingPlatterBackgroundCaptureView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIPlatterTransformView : UIView
{
    _Bool _hidesSourceView;	// 128 = 0x80
    _Bool _forwardsHitTestingToSourceView;	// 129 = 0x81
    _Bool _matchesAlpha;	// 130 = 0x82
    _Bool _appliesMinificationFilter;	// 131 = 0x83
    _Bool _allowsUserInteraction;	// 132 = 0x84
    _Bool _shouldTakeOwnershipOfSourceView;	// 133 = 0x85
    UITargetedPreview *_sourcePreview;	// 136 = 0x88
    _UIPortalView *_portalView;	// 144 = 0x90
    _UIPortalView *_backgroundPortalView;	// 152 = 0x98
    _UIMorphingPlatterBackgroundCaptureView *_backgroundCaptureView;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000dce950
@property(retain, nonatomic) _UIMorphingPlatterBackgroundCaptureView *backgroundCaptureView; // @synthesize backgroundCaptureView=_backgroundCaptureView;
@property(retain, nonatomic) _UIPortalView *backgroundPortalView; // @synthesize backgroundPortalView=_backgroundPortalView;
@property(nonatomic) _Bool shouldTakeOwnershipOfSourceView; // @synthesize shouldTakeOwnershipOfSourceView=_shouldTakeOwnershipOfSourceView;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(nonatomic) _Bool allowsUserInteraction; // @synthesize allowsUserInteraction=_allowsUserInteraction;
@property(nonatomic) _Bool appliesMinificationFilter; // @synthesize appliesMinificationFilter=_appliesMinificationFilter;
@property(nonatomic) _Bool matchesAlpha; // @synthesize matchesAlpha=_matchesAlpha;
@property(nonatomic) _Bool forwardsHitTestingToSourceView; // @synthesize forwardsHitTestingToSourceView=_forwardsHitTestingToSourceView;
@property(nonatomic) _Bool hidesSourceView; // @synthesize hidesSourceView=_hidesSourceView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000dce5ba
- (void)_updateMinificationFilter;	// IMP=0x0000000000dce439
- (void)didMoveToWindow;	// IMP=0x0000000000dce210
- (void)layoutSubviews;	// IMP=0x0000000000dcde50
- (void)didTearOffForDrag;	// IMP=0x0000000000dcdda6
@property(readonly, nonatomic) UIView *sourceView;
- (void)dealloc;	// IMP=0x0000000000dcd532
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000dcd48e

@end
