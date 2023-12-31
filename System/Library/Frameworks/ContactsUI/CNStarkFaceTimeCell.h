//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactCell.h"

@class CNTransportButton, NSDictionary, UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkFaceTimeCell : CNContactCell
{
    id <CNPropertyCellDelegate> _delegate;	// 8 = 0x8
    NSDictionary *_labelTextAttributes;	// 16 = 0x10
    UILabel *_faceTimeLabel;	// 24 = 0x18
    CNTransportButton *_transportIcon;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0060000000054768
- (void).cxx_destruct;	// IMP=0x0000000000054ca1
@property(readonly, nonatomic) CNTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;
@property(retain, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cnui_applyContactStyle;	// IMP=0x0000000000054b19
- (void)transportButtonClicked:(id)arg1;	// IMP=0x0000000000054b07
- (void)performDefaultAction;	// IMP=0x0000000000054a00
- (id)constantConstraints;	// IMP=0x0000000000054770
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000054727
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000546e6
- (void)tintColorDidChange;	// IMP=0x00000000000545d0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000005434d

@end

