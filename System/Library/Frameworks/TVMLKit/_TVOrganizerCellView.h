//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVOrganizerCellView : UIView
{
    NSArray *_components;	// 8 = 0x8
    long long _contentVerticalAlignment;	// 16 = 0x10
    NSArray *_filteredComponents;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b5c06
@property(readonly, copy, nonatomic) NSArray *filteredComponents; // @synthesize filteredComponents=_filteredComponents;
@property(nonatomic) long long contentVerticalAlignment; // @synthesize contentVerticalAlignment=_contentVerticalAlignment;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void)_resetSubviews;	// IMP=0x00000000000b5a18
- (long long)_alignmentFromView:(id)arg1;	// IMP=0x00000000000b5998
- (void)_updateView:(id)arg1 maxViewWidth:(double)arg2;	// IMP=0x00000000000b5715
- (struct CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(struct CGSize)arg2;	// IMP=0x00000000000b528e
- (void)_verticallyStackComponents:(id)arg1 alignment:(long long)arg2;	// IMP=0x00000000000b4aeb
- (_Bool)canBecomeFocused;	// IMP=0x00000000000b4ae3
- (void)layoutSubviews;	// IMP=0x00000000000b47e0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b4768
- (void)setComponentsNeedUpdate;	// IMP=0x00000000000b4459
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b43aa

@end
