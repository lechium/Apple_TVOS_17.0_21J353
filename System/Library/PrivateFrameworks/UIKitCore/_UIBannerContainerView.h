//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIBannerContainerView : UIView
{
    NSMutableArray *_banners;	// 8 = 0x8
    NSMutableArray *_constraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ecd1e2
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSMutableArray *banners; // @synthesize banners=_banners;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000eccfb2
- (void)_setBanner:(id)arg1 visible:(_Bool)arg2 alongsideAnimations:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000eccce9
- (id)_bannerAnimationToVisible:(_Bool)arg1 hiddenValue:(id)arg2 visibleValue:(id)arg3 withKeyPath:(id)arg4;	// IMP=0x0000000000eccbef
- (void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ecca2d
- (void)statusBarFrameDidChange:(id)arg1;	// IMP=0x0000000000ecca1b
- (void)updateConstraints;	// IMP=0x0000000000ecc806
- (void)_presentBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ecc297
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000ecc18a

@end

