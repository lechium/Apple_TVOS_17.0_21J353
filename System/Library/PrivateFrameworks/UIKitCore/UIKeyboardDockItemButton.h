//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class CAShapeLayer, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockItemButton : UIButton
{
    NSString *_identifier;	// 8 = 0x8
    CAShapeLayer *_shapeLayer;	// 16 = 0x10
    CAShapeLayer *_debugHitLayer;	// 24 = 0x18
    struct CGRect _tapActionRegion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b93ffe
@property(retain, nonatomic) CAShapeLayer *debugHitLayer; // @synthesize debugHitLayer=_debugHitLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGRect tapActionRegion; // @synthesize tapActionRegion=_tapActionRegion;
- (void)addAnimatitionIfNeeded;	// IMP=0x0000000000b93c9e
- (void)setupDictationAnimationButtonIfNeeded;	// IMP=0x0000000000b938ce
- (_Bool)pointInsideTapActionRegion:(struct CGPoint)arg1;	// IMP=0x0000000000b937e7
- (void)layoutSubviews;	// IMP=0x0000000000b93404
- (void)updateFillColor;	// IMP=0x0000000000b93266
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000b93225
- (void)didMoveToSuperview;	// IMP=0x0000000000b931e4
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000b930bd
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000b92f86
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000b92e96
- (struct CGRect)rectWithSize:(struct CGSize)arg1 forContentRect:(struct CGRect)arg2 withAlignmentRectInsets:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000b92d30

@end

