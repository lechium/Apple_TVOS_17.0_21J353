//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem, TVPAudioRoutingController;

@interface TVSettingsAudioVideoViewController : TSKViewController
{
    TVPAudioRoutingController *_routingController;	// 8 = 0x8
    TSKSettingItem *_wirelessAudioSyncItem;	// 16 = 0x10
    TSKSettingItem *_displayAdjustmentItem;	// 24 = 0x18
}

+ (_Bool)_hardwareSupportsAC3Decode;	// IMP=0x004000000004d939
+ (id)_nativeModeSwitchingOptionsFormatter;	// IMP=0x001000000004d49a
+ (id)_volumeFormatter;	// IMP=0x001000000004d346
+ (id)_subtitleOptionFormatter;	// IMP=0x001000000004d270
+ (id)_audioLanguageFormatter;	// IMP=0x001000000004d1c8
+ (id)_multiChannelAudioFormatter;	// IMP=0x001000000004cf88
- (void).cxx_destruct;	// IMP=0x002000000004e134
@property(retain, nonatomic) TSKSettingItem *displayAdjustmentItem; // @synthesize displayAdjustmentItem=_displayAdjustmentItem;
@property(retain, nonatomic) TSKSettingItem *wirelessAudioSyncItem; // @synthesize wirelessAudioSyncItem=_wirelessAudioSyncItem;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x001000000004e033
- (void)_promptResetVideoSettings;	// IMP=0x001000000004d984
- (_Bool)_areDisplayFiltersEnabled;	// IMP=0x001000000004d8ef
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004d568
- (id)loadSettingGroups;	// IMP=0x001000000004ab59
- (void)dealloc;	// IMP=0x001000000004aa70
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000004aa41
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000004a8e4

@end
