//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UINavigationController;

@interface PBSiriOptInViewController : UIViewController
{
    long long _mode;	// 8 = 0x8
    CDUnknownBlockType _dismissalCompletion;	// 16 = 0x10
    UINavigationController *_navigationController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000a47fb
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (_Bool)_shouldOfferSiri;	// IMP=0x00100000000a4787
- (_Bool)_shouldOfferDataSharing;	// IMP=0x00100000000a4760
- (_Bool)_shouldOnlyOfferDataSharing;	// IMP=0x00100000000a4746
- (void)_updateSiriDataSharingOptInSettingsWithOptInStatus:(unsigned long long)arg1;	// IMP=0x00100000000a46e6
- (void)_updateSiriOptInSettingsWithOptedIn:(_Bool)arg1;	// IMP=0x00100000000a463e
- (void)_dismissViewControllerWithValue:(_Bool)arg1;	// IMP=0x00100000000a454d
- (void)siriDataSharingOptInOfferViewController:(id)arg1 didCompleteOptIn:(_Bool)arg2;	// IMP=0x00100000000a44e3
- (void)siriDataSharingOptInOfferViewControllerDidNotCompleteOptIn:(id)arg1;	// IMP=0x00100000000a4457
- (void)siriOptInOfferViewController:(id)arg1 didCompleteOptIn:(_Bool)arg2;	// IMP=0x00100000000a437d
- (void)siriOptInOfferViewControllerDidNotCompleteOptIn:(id)arg1;	// IMP=0x00100000000a4368
- (id)preferredFocusEnvironments;	// IMP=0x00100000000a433a
- (void)viewDidLoad;	// IMP=0x00100000000a41bd
- (void)dealloc;	// IMP=0x00100000000a4140
- (id)initWithMode:(long long)arg1;	// IMP=0x00100000000a40c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

