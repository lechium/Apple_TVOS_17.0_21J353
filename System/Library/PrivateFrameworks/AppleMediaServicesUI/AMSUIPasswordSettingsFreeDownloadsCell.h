//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UISwitch;
@protocol AMSUIPasswordSettingsFreeDownloadsCellDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIPasswordSettingsFreeDownloadsCell : UITableViewCell
{
    id <AMSUIPasswordSettingsFreeDownloadsCellDelegate> _delegate;	// 8 = 0x8
    UISwitch *_toggle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005073d
@property(retain, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
@property(nonatomic) id <AMSUIPasswordSettingsFreeDownloadsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_toggleChanged:(id)arg1;	// IMP=0x000000000005063f
- (long long)selectionStyle;	// IMP=0x0000000000050637
- (void)_setup;	// IMP=0x000000000005052a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000504de

@end

