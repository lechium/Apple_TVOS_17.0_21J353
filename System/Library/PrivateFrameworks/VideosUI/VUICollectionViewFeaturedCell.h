//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVUIKit/_TVRibbonCell.h>

@class VUICollectionViewFeaturedView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewFeaturedCell : _TVRibbonCell
{
    VUICollectionViewFeaturedView *_featuredView;	// 8 = 0x8
}

+ (double)_iOSLockupWidthWithWindowWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 showsPageControl:(_Bool)arg3;	// IMP=0x00600000001df909
- (void).cxx_destruct;	// IMP=0x00000000001dfd50
@property(retain, nonatomic) VUICollectionViewFeaturedView *featuredView; // @synthesize featuredView=_featuredView;
- (void)_commonInitWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001dfc1e
- (void)_updateMaskingModeForParameters:(id)arg1;	// IMP=0x00000000001dfb48
- (id)preferredFocusEnvironments;	// IMP=0x00000000001dfa42
- (_Bool)canBecomeFocused;	// IMP=0x00000000001df9a6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001df935

@end

