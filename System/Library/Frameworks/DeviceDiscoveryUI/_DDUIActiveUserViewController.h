//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class TVSUIAccountProfilePictureObserver, TVSUIUserProfilePictureService, UIButton, UIImageView, UILabel, UIView;
@protocol DDUIPerson;

__attribute__((visibility("hidden")))
@interface _DDUIActiveUserViewController : UIViewController
{
    UIView *_backgroundView;	// 8 = 0x8
    UILabel *_connectedToLabel;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UIImageView *_deviceIconImageView;	// 32 = 0x20
    UIView *_devicePlatterView;	// 40 = 0x28
    UIImageView *_profileImageView;	// 48 = 0x30
    UIButton *_disconnectButton;	// 56 = 0x38
    id <DDUIPerson> _personSelected;	// 64 = 0x40
    TVSUIAccountProfilePictureObserver *_pictureObserver;	// 72 = 0x48
    TVSUIUserProfilePictureService *_pictureService;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000092ef
@property(retain, nonatomic) TVSUIUserProfilePictureService *pictureService; // @synthesize pictureService=_pictureService;
@property(retain, nonatomic) TVSUIAccountProfilePictureObserver *pictureObserver; // @synthesize pictureObserver=_pictureObserver;
@property(retain, nonatomic) id <DDUIPerson> personSelected; // @synthesize personSelected=_personSelected;
@property(nonatomic) __weak UIButton *disconnectButton; // @synthesize disconnectButton=_disconnectButton;
@property(nonatomic) __weak UIImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(nonatomic) __weak UIView *devicePlatterView; // @synthesize devicePlatterView=_devicePlatterView;
@property(nonatomic) __weak UIImageView *deviceIconImageView; // @synthesize deviceIconImageView=_deviceIconImageView;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *connectedToLabel; // @synthesize connectedToLabel=_connectedToLabel;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)disconnectButtonTapped:(id)arg1;	// IMP=0x0000000000008fa9
- (void)setActiveDevice:(id)arg1;	// IMP=0x0000000000008d0a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000008286
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000008257
- (void)viewDidLoad;	// IMP=0x0000000000007c73

@end
