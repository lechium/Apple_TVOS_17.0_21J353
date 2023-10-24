//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNCardActionGroupItem, CNContactAction, CNTransportButton, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactActionCell
{
    UILabel *_label;	// 8 = 0x8
    CNTransportButton *_transportIcon;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013193
@property(retain, nonatomic) CNTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (id)variableConstraints;	// IMP=0x0000000000012f50
@property(readonly, nonatomic) CNContactAction *action;
@property(readonly, nonatomic) CNCardActionGroupItem *actionGroupItem;
- (void)setCardGroupItem:(id)arg1;	// IMP=0x0000000000012ba3
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x0000000000012995
- (_Bool)shouldPerformDefaultAction;	// IMP=0x000000000001298d
- (double)minCellHeight;	// IMP=0x000000000001297f
- (id)labelView;	// IMP=0x0000000000012932

@end
