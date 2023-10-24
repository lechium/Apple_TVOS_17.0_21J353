//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface MKAttributionLabel : UIView
{
    NSAttributedString *_strokeText;	// 8 = 0x8
    NSAttributedString *_innerText;	// 16 = 0x10
    unsigned long long _mapType;	// 24 = 0x18
    _Bool _useDarkText;	// 32 = 0x20
    long long _displayStyle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000090903
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000090805
- (void)sizeToFit;	// IMP=0x0000000000090672
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;	// IMP=0x00000000000905cf
- (void)_updateTextColor;	// IMP=0x0000000000090536
- (id)_labelTitle;	// IMP=0x00000000000904ba
- (void)_prepareLabel;	// IMP=0x00000000000902f7
- (id)_attributesWithStroke:(_Bool)arg1;	// IMP=0x000000000009004c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008fee4

@end
