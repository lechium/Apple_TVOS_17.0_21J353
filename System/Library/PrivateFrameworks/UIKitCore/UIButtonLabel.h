//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel
{
    _Bool _reverseShadow;	// 128 = 0x80
    UIButton *_button;	// 136 = 0x88
    _Bool _externallySetNumberOfLines;	// 144 = 0x90
    _Bool _fontIsDefaultForIdiom;	// 145 = 0x91
}

- (void).cxx_destruct;	// IMP=0x00000000005f0b03
@property(readonly, nonatomic) _Bool _fontIsDefaultForIdiom; // @synthesize _fontIsDefaultForIdiom;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000000005f0a7e
- (_Bool)_textColorFollowsTintColor;	// IMP=0x00000000005f08cb
- (void)_contentDidChange:(long long)arg1 fromContent:(id)arg2;	// IMP=0x00000000005f0787
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000005f0660
- (void)setReverseShadow:(_Bool)arg1;	// IMP=0x00000000005f05f5
- (struct CGSize)shadowOffset;	// IMP=0x00000000005f05aa
- (void)setShadowOffset:(struct CGSize)arg1;	// IMP=0x00000000005f0561
- (void)setFont:(id)arg1;	// IMP=0x00000000005f054d
- (void)_setFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;	// IMP=0x00000000005f0514
- (id)_initWithFrame:(struct CGRect)arg1 button:(id)arg2;	// IMP=0x00000000005f0485
- (void)_setWantsAutolayout;	// IMP=0x00000000005f0442
- (void)_updateTextColorWithFallbackColorIfNeeded;	// IMP=0x00000000005f043c
- (void)_internallySetNumberOfLines:(long long)arg1;	// IMP=0x00000000005f0400
- (void)setNumberOfLines:(long long)arg1;	// IMP=0x00000000005f03c6
- (double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2;	// IMP=0x00000000005f0b14

@end

