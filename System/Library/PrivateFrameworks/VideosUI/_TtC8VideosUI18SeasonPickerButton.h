//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE, NSArray, VUILabel;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI18SeasonPickerButton : UIControl
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *chevronDownImageView;	// 24 = 0x18
    MISSING_TYPE *currentLabel;	// 32 = 0x20
    MISSING_TYPE *altLabel;	// 40 = 0x28
    MISSING_TYPE *textLayout;	// 48 = 0x30
    MISSING_TYPE *currentIndex;	// 56 = 0x38
    MISSING_TYPE *headerTitles;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004700ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000470076
@property(nonatomic, readonly) NSArray *accessibilityHeaderTitles;
@property(nonatomic, readonly) VUILabel *accessibilityAltLabel;
@property(nonatomic, readonly) VUILabel *accessibilityCurrentLabel;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000046ff19
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000046f76e
- (id)init;	// IMP=0x000000000046f6a1

@end

