//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSMutableArray;

@interface TVSettingsInfoCell : UITableViewCell
{
    NSMutableArray *_titleLabels;	// 8 = 0x8
    NSMutableArray *_valueViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005093c
- (id)_newValueLabel;	// IMP=0x001000000005083a
- (id)_newTitleLabel;	// IMP=0x0010000000050712
- (void)_updateSubviewsWithTitles:(id)arg1 values:(id)arg2;	// IMP=0x0010000000050005
- (void)setTitles:(id)arg1 withValues:(id)arg2;	// IMP=0x001000000004ffd7
- (void)layoutSubviews;	// IMP=0x001000000004f8f5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000004f831

@end

