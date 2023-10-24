//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface ASCBorderView : UIView
{
    UIColor *_color;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000013bb4
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)updateBorderColor;	// IMP=0x0000000000013b1c
@property(nonatomic) unsigned long long cornerMask;
@property(retain, nonatomic) NSString *cornerCurve;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double width;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013838
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001380d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000013726

@end
