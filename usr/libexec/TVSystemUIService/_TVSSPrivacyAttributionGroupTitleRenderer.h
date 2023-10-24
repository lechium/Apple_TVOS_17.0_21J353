//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPRenderer.h>

@class NSLayoutConstraint;

@interface _TVSSPrivacyAttributionGroupTitleRenderer : TVSPRenderer
{
    NSLayoutConstraint *_titleWithImageLeadingConstraint;	// 8 = 0x8
    NSLayoutConstraint *_titleWithNoImageLeadingConstraint;	// 16 = 0x10
}

+ (id)rendererWithIdentifier:(id)arg1 group:(id)arg2;	// IMP=0x00400000001070d0
- (void).cxx_destruct;	// IMP=0x0020000000107ec0
- (id)layoutConstraintsWithSubviews:(id)arg1 contentView:(id)arg2;	// IMP=0x0010000000107440
- (id)subviewIdentifiersWantingAutolayout;	// IMP=0x0010000000107370

@end
