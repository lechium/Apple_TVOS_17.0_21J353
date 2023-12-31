//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNRepeatingGradientSeparatorView, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface CNPropertyEditingCell
{
    UIButton *_labelButton;	// 56 = 0x38
    CNRepeatingGradientSeparatorView *_vseparator;	// 64 = 0x40
}

+ (id)keyPathsForValuesAffectingEffectiveLabelWidth;	// IMP=0x001000000007c995
+ (_Bool)wantsStandardConstraints;	// IMP=0x001000000007c09a
+ (_Bool)wantsChevron;	// IMP=0x001000000007c092
- (void).cxx_destruct;	// IMP=0x000000000007d25c
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator; // @synthesize vseparator=_vseparator;
@property(readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x000000000007d13d
- (void)pickerDidCancel:(id)arg1;	// IMP=0x000000000007d0d2
- (id)constantConstraints;	// IMP=0x000000000007ca5b
- (double)effectiveLabelWidth;	// IMP=0x000000000007c9b5
- (double)minCellHeight;	// IMP=0x000000000007c987
@property(readonly, nonatomic) double leftValueMargin;
- (id)valueString;	// IMP=0x000000000007c929
- (void)setValueTextAttributes:(id)arg1;	// IMP=0x000000000007c811
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x000000000007c482
- (void)labelButtonClicked:(id)arg1;	// IMP=0x000000000007c34f
- (id)labelView;	// IMP=0x000000000007c1ed
- (void)dealloc;	// IMP=0x000000000007c178
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000007c0a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

