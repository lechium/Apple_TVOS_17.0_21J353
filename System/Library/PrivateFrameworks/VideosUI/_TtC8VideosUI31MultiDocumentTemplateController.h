//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI31MultiDocumentTemplateController
{
    MISSING_TYPE *focusGuide;	// 2099918219 = 0x7d2a358b
    MISSING_TYPE *hasFocusLandedOnPageYet;	// 2303510409 = 0x894cc789
    MISSING_TYPE *viewHasAppearedOnce;	// 3689465737 = 0xdbe8c789
    MISSING_TYPE *cancellables;	// 1360396231 = 0x5115ffc7
}

- (void).cxx_destruct;	// IMP=0x00000000003badfb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003bad84
- (id)vuiIndexPathForPreferredFocusedViewIn:(id)arg1;	// IMP=0x00000000003ba85b
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x00000000003ba43f
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003b9a91
- (void)vui_viewDidLoad;	// IMP=0x00000000003b9607
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end

