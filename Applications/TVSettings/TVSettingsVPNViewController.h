//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class PBSSuppressVPNBulletinAssertion;

@interface TVSettingsVPNViewController : TSKViewController
{
    PBSSuppressVPNBulletinAssertion *_suppressBulletinAssertion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000019b38
@property(readonly, nonatomic) PBSSuppressVPNBulletinAssertion *suppressBulletinAssertion; // @synthesize suppressBulletinAssertion=_suppressBulletinAssertion;
- (void)_configurationSelected:(id)arg1;	// IMP=0x0010000000019aaf
- (void)_statusItemSelected;	// IMP=0x0010000000019a1f
- (id)loadSettingGroups;	// IMP=0x00100000000194a0
- (id)title;	// IMP=0x0010000000019430
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000193e7
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001939e
- (id)init;	// IMP=0x00100000000192fe

@end
