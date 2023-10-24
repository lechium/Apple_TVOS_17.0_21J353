//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIAutocorrectInlinePrompt : UIView
{
    struct CGRect m_originalTypedTextRect;	// 128 = 0x80
    NSString *m_typedText;	// 160 = 0xa0
    NSString *m_correction;	// 168 = 0xa8
    NSMutableArray *m_typedTextViews;	// 176 = 0xb0
    UIView *m_correctionView;	// 184 = 0xb8
    UIView *m_correctionAnimationView;	// 192 = 0xc0
    UIView *m_typedTextAnimationView;	// 200 = 0xc8
    UIView *m_correctionShadowView;	// 208 = 0xd0
    _Bool m_fits;	// 216 = 0xd8
    _Bool m_mouseDown;	// 217 = 0xd9
    double m_originalTypedTextRectCorrectionAmount;	// 224 = 0xe0
    unsigned int m_usageTrackingMask;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000971b0f
@property(nonatomic) unsigned int usageTrackingMask; // @synthesize usageTrackingMask=m_usageTrackingMask;
- (_Bool)prepareForAnimation:(struct CGRect)arg1;	// IMP=0x0000000000971785
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000009716b9
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009716a8
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000971616
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000971610
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009715ff
- (void)dismiss;	// IMP=0x00000000009715bb
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000971536
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x0000000000971519
- (id)correctionShadowView;	// IMP=0x0000000000971504
- (id)typedTextAnimationView;	// IMP=0x00000000009714ef
- (id)correctionAnimationView;	// IMP=0x00000000009714da
- (id)correctionView;	// IMP=0x00000000009714c5
- (id)typedTextView;	// IMP=0x0000000000971473
- (id)typedText;	// IMP=0x000000000097145e
- (id)correction;	// IMP=0x0000000000971449
- (struct CGRect)correctionFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(int)arg2 withExtraGap:(double)arg3;	// IMP=0x0000000000971253
- (struct CGRect)horizontallySquishedCorrectionFrame:(struct CGRect)arg1;	// IMP=0x0000000000970ac7
- (_Bool)isAcceptableTextEffectsFrame:(struct CGRect)arg1 afterScrollBy:(double)arg2;	// IMP=0x00000000009706bd
- (void)addTypedTextRect:(struct CGRect)arg1;	// IMP=0x0000000000970593
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect)arg3 maxX:(double)arg4;	// IMP=0x000000000096fa80
- (struct CGRect)shadowFrameForFrame:(struct CGRect)arg1;	// IMP=0x000000000096fa44
- (void)removePromptSubviews;	// IMP=0x000000000096f96d
- (void)dealloc;	// IMP=0x000000000096f92f
- (int)textEffectsVisibilityLevel;	// IMP=0x000000000096f8e1
- (int)textEffectsVisibilityLevelInKeyboardWindow;	// IMP=0x000000000096f8d6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000096f82d

@end

