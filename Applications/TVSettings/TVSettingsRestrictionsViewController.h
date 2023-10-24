//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString;

@interface TVSettingsRestrictionsViewController : TSKViewController
{
}

- (void)_toggleBypassRestrictionsItem:(id)arg1;	// IMP=0x002000000008a097
- (void)_resetRestrictions:(id)arg1;	// IMP=0x001000000008a053
- (void)_updateGuardedState;	// IMP=0x0010000000089fee
- (void)_handleSetPasscodeResult:(id)arg1;	// IMP=0x0010000000089f54
- (void)_changePasscode:(id)arg1;	// IMP=0x0010000000089b72
- (void)_disableRestrictions;	// IMP=0x001000000008997e
- (void)_enableRestrictions;	// IMP=0x00100000000897d8
- (id)_ratingLongFormatter;	// IMP=0x0010000000089728
- (id)_ratingFormatter;	// IMP=0x00100000000896e3
- (id)_contentFilterRegionFormatter;	// IMP=0x001000000008962b
- (id)_yesNoFormatter;	// IMP=0x001000000008951b
- (id)_allowRestrictBoolFormatter;	// IMP=0x0010000000089497
- (id)_allowRestrictFormatter;	// IMP=0x0010000000089387
- (id)_booksRatingFormatter;	// IMP=0x001000000008929a
- (id)_explicitMusicFormatter;	// IMP=0x00100000000891ad
- (void)_toggleRestrictions:(id)arg1;	// IMP=0x001000000008913b
- (void)restrictionsDataProviderDidUpdate:(id)arg1;	// IMP=0x0010000000089129
- (id)loadSettingGroups;	// IMP=0x00100000000869eb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000008697d
- (void)dealloc;	// IMP=0x0010000000086908
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000086888

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

