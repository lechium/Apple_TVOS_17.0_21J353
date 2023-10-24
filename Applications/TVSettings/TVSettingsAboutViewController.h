//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem, TVSettingsDiagnosticsController, UIAlertController, UIGestureRecognizer, UIViewController;
@protocol TSKSettingItemEditingController;

@interface TVSettingsAboutViewController : TSKViewController
{
    _Bool _showPartNumberAndFirmwareVersion;	// 8 = 0x8
    TSKSettingItem *_wifiSignalStrengthItem;	// 16 = 0x10
    unsigned long long _currentMoreInfoItemType;	// 24 = 0x18
    UIGestureRecognizer *_downButtonRecognizer;	// 32 = 0x20
    UIGestureRecognizer *_playPauseButtonRecognizer;	// 40 = 0x28
    UIAlertController *_diagnosticsTicketController;	// 48 = 0x30
    TVSettingsDiagnosticsController *_diagnostics;	// 56 = 0x38
    UIViewController<TSKSettingItemEditingController> *_nameViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000054467
@property(nonatomic) __weak UIViewController<TSKSettingItemEditingController> *nameViewController; // @synthesize nameViewController=_nameViewController;
@property(retain, nonatomic) TVSettingsDiagnosticsController *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) UIAlertController *diagnosticsTicketController; // @synthesize diagnosticsTicketController=_diagnosticsTicketController;
@property(retain, nonatomic) UIGestureRecognizer *playPauseButtonRecognizer; // @synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer;
@property(retain, nonatomic) UIGestureRecognizer *downButtonRecognizer; // @synthesize downButtonRecognizer=_downButtonRecognizer;
@property(nonatomic) unsigned long long currentMoreInfoItemType; // @synthesize currentMoreInfoItemType=_currentMoreInfoItemType;
@property(retain, nonatomic) TSKSettingItem *wifiSignalStrengthItem; // @synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem;
@property(nonatomic) _Bool showPartNumberAndFirmwareVersion; // @synthesize showPartNumberAndFirmwareVersion=_showPartNumberAndFirmwareVersion;
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x0010000000054208
- (void)_setDeviceName:(id)arg1;	// IMP=0x0010000000053dce
- (id)_nameViewControllerForItem:(id)arg1;	// IMP=0x0010000000053ca4
- (void)_advanceMoreInfoItem;	// IMP=0x0010000000053b64
- (_Bool)_hasTiltID;	// IMP=0x0010000000053afa
- (_Bool)_showWiFiSettings;	// IMP=0x0010000000053aab
- (void)_updateDiagnosticsItem:(id)arg1;	// IMP=0x00100000000539b1
- (void)_handlePlayPauseGesture:(id)arg1;	// IMP=0x00100000000533e6
- (void)_handleUpGesture:(id)arg1;	// IMP=0x00100000000533b8
- (void)_handleDownGesture:(id)arg1;	// IMP=0x0010000000053378
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000005332e
- (void)networkUpdated:(id)arg1;	// IMP=0x001000000005331c
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x001000000005314d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000052f78
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x0010000000052f28
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000052db5
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0010000000052cec
- (id)loadSettingGroups;	// IMP=0x0010000000050f5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000050ef2
- (void)viewDidLoad;	// IMP=0x0010000000050cb4
- (void)dealloc;	// IMP=0x0010000000050bd4
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000050aa1

@end

