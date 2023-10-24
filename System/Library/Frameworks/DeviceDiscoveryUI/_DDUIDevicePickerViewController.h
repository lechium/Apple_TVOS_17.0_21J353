//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableDictionary, NSString, PBSUserProfile, TVSUIUserProfilePictureService, UICollectionView, UICollectionViewDiffableDataSource, _DDUIAccountManager;
@protocol _DDUIDevicePickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _DDUIDevicePickerViewController : UIViewController
{
    id <_DDUIDevicePickerViewControllerDelegate> _delegate;	// 8 = 0x8
    PBSUserProfile *_currentUser;	// 16 = 0x10
    _DDUIAccountManager *_accountManager;	// 24 = 0x18
    TVSUIUserProfilePictureService *_pictureService;	// 32 = 0x20
    NSArray *_foundDevices;	// 40 = 0x28
    NSMutableDictionary *_identifierToPictureObserver;	// 48 = 0x30
    NSString *_selectedDeviceIdentifier;	// 56 = 0x38
    UICollectionView *_deviceCollectionView;	// 64 = 0x40
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000c979
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(nonatomic) __weak UICollectionView *deviceCollectionView; // @synthesize deviceCollectionView=_deviceCollectionView;
@property(retain, nonatomic) NSString *selectedDeviceIdentifier; // @synthesize selectedDeviceIdentifier=_selectedDeviceIdentifier;
@property(retain, nonatomic) NSMutableDictionary *identifierToPictureObserver; // @synthesize identifierToPictureObserver=_identifierToPictureObserver;
@property(copy, nonatomic) NSArray *foundDevices; // @synthesize foundDevices=_foundDevices;
@property(retain, nonatomic) TVSUIUserProfilePictureService *pictureService; // @synthesize pictureService=_pictureService;
@property(retain, nonatomic) _DDUIAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) PBSUserProfile *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) __weak id <_DDUIDevicePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000000c54c
- (void)deviceListChanged:(id)arg1;	// IMP=0x000000000000ba26
- (void)viewDidLoad;	// IMP=0x000000000000a0e7
- (id)init;	// IMP=0x000000000000a0b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

