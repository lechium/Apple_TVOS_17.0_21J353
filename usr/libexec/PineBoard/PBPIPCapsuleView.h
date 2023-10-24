//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel, UIVisualEffectView;

@interface PBPIPCapsuleView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIVisualEffectView *_backgroundView;	// 16 = 0x10
}

+ (id)pressForOptionsView;	// IMP=0x004000000006e12e
+ (id)editingHintAttributedString;	// IMP=0x001000000006ded9
- (void).cxx_destruct;	// IMP=0x002000000006e9f5
@property(readonly, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x001000000006e942
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000006e1af

@end
