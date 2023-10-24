//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface UIRoundedRectButton : UIButton
{
    UIBezierPath *_fillPath;	// 296 = 0x128
    UIColor *_fillColor;	// 304 = 0x130
}

+ (Class)_visualProviderClass;	// IMP=0x00600000005f0b36
- (void).cxx_destruct;	// IMP=0x00000000005f12c1
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000005f0edb
- (void)setTintColor:(id)arg1;	// IMP=0x00000000005f0e29
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000005f0de8
- (long long)buttonType;	// IMP=0x00000000005f0ddd
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000005f0d79
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000005f0d15
- (void)_invalidatePaths;	// IMP=0x00000000005f0ced
- (void)_updateState;	// IMP=0x00000000005f0c7d
- (id)_contentBackgroundColor;	// IMP=0x00000000005f0c3c
- (_Bool)_canDrawContent;	// IMP=0x00000000005f0c34
- (id)initWithFrame:(struct CGRect)arg1 fillColor:(id)arg2;	// IMP=0x00000000005f0bb5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005f0b47

@end

