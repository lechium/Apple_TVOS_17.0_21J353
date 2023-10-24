//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray, NSString;

@interface TVSettingsRestrictionsRegionViewController : TSKViewController
{
    NSArray *_filteredSectionIndexTitles;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000030c71
@property(copy, nonatomic) NSArray *filteredSectionIndexTitles; // @synthesize filteredSectionIndexTitles=_filteredSectionIndexTitles;
- (id)_contentFilterRegionFormatter;	// IMP=0x0010000000030b97
- (void)setCountryCode:(id)arg1;	// IMP=0x0010000000030acb
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0010000000030ac2
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0010000000030aad
- (void)restrictionsDataProviderDidUpdate:(id)arg1;	// IMP=0x0010000000030a9b
- (id)loadSettingGroups;	// IMP=0x001000000002ff29
- (void)dealloc;	// IMP=0x001000000002feb4
- (void)viewDidLoad;	// IMP=0x001000000002fe3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

