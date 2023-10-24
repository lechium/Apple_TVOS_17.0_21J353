//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface HBUITopShelfSwipeUpAffordanceView : UIView
{
    _Bool _textLabelHidden;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    UIView *_chevronVisualEffectView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002def4
@property(readonly, nonatomic) UIView *chevronVisualEffectView; // @synthesize chevronVisualEffectView=_chevronVisualEffectView;
@property(readonly, nonatomic, getter=_textLabel) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic, getter=isTextLabelHidden) _Bool textLabelHidden; // @synthesize textLabelHidden=_textLabelHidden;
- (void)_updateTextLabelText:(_Bool)arg1;	// IMP=0x000000000002dd7c
- (void)_applicationDidBecomeActive;	// IMP=0x000000000002dd65
- (void)_updateArrowAndLabel;	// IMP=0x000000000002dc97
- (id)customVibrancyEffect;	// IMP=0x000000000002db4a
- (id)customEffectViewWithMask:(id)arg1;	// IMP=0x000000000002d9aa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002cddf

@end

