//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UISwitch, UITextField, VUIDebugViewDefaults, VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionViewDefaultsCell : UICollectionViewCell
{
    VUITextLayout *_titleLayout;	// 8 = 0x8
    VUILabel *_titleLabel;	// 16 = 0x10
    VUITextLayout *_subtitleLayout;	// 24 = 0x18
    VUILabel *_subtitleLabel;	// 32 = 0x20
    UISwitch *_defaultsSwitch;	// 40 = 0x28
    UITextField *_textField;	// 48 = 0x30
    VUIDebugViewDefaults *_defaults;	// 56 = 0x38
    VUISeparatorView *_separatorView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000025a82
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) VUIDebugViewDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UISwitch *defaultsSwitch; // @synthesize defaultsSwitch=_defaultsSwitch;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUITextLayout *subtitleLayout; // @synthesize subtitleLayout=_subtitleLayout;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000025942
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000000258ca
- (void)_defaultsSwitchPressed:(id)arg1;	// IMP=0x00000000000258ad
- (void)layoutSubviews;	// IMP=0x00000000000252e5
- (void)configureCellWithDefaults:(id)arg1;	// IMP=0x0000000000025038
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000024cd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

