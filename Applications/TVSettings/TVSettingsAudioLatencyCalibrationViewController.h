//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, TSKSettingItem, TVSettingsAudioLatencyCalibrationView, TVSettingsHDMIEnforcer, UIActivityIndicatorView;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TVSettingsAudioLatencyCalibrationViewController : UIViewController
{
    TSKSettingItem *_editingItem;	// 8 = 0x8
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 16 = 0x10
    TVSettingsHDMIEnforcer *_hdmiEnforcer;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicatorView;	// 32 = 0x20
    TVSettingsAudioLatencyCalibrationView *_calibrationView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001929c
@property(retain, nonatomic) TVSettingsAudioLatencyCalibrationView *calibrationView; // @synthesize calibrationView=_calibrationView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) TVSettingsHDMIEnforcer *hdmiEnforcer; // @synthesize hdmiEnforcer=_hdmiEnforcer;
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (id)init;	// IMP=0x001000000001918a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

