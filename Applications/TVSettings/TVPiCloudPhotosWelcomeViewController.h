//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, TVPVibrantLabel, UIButton, UIImageView, UIView;
@protocol TVPiCloudPhotosWelcomeViewControllerDelegate;

@interface TVPiCloudPhotosWelcomeViewController : UIViewController
{
    _Bool _displaySharedAlbums;	// 8 = 0x8
    id <TVPiCloudPhotosWelcomeViewControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_dialogueView;	// 24 = 0x18
    MISSING_TYPE *_titleLabel;	// 32 = 0x20
    TVPVibrantLabel *_descriptionLabel;	// 40 = 0x28
    UIButton *_turnOnButton;	// 48 = 0x30
    UIButton *_sharedAlbumsButton;	// 56 = 0x38
    UIView *_accessoryView;	// 64 = 0x40
    UIImageView *_accessoryImageView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000009dbc8
@property(readonly, nonatomic) _Bool displaySharedAlbums; // @synthesize displaySharedAlbums=_displaySharedAlbums;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIButton *sharedAlbumsButton; // @synthesize sharedAlbumsButton=_sharedAlbumsButton;
@property(retain, nonatomic) UIButton *turnOnButton; // @synthesize turnOnButton=_turnOnButton;
@property(retain, nonatomic) TVPVibrantLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) TVPVibrantLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *dialogueView; // @synthesize dialogueView=_dialogueView;
@property(nonatomic) __weak id <TVPiCloudPhotosWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_headlineFont;	// IMP=0x001000000009da19
- (id)_title1FontEmphasized;	// IMP=0x001000000009d944
- (void)_turnOnSharedAlbumsSelected:(id)arg1;	// IMP=0x001000000009d902
- (void)_turnOniCloudSelected:(id)arg1;	// IMP=0x001000000009d8c3
- (void)_setupAccessoryView;	// IMP=0x001000000009cdda
- (void)_setupDialogueView;	// IMP=0x001000000009b723
- (void)_setupViews;	// IMP=0x001000000009b6f5
- (void)viewDidLoad;	// IMP=0x001000000009b6b4
- (id)initDisplaySharedAlbums:(_Bool)arg1;	// IMP=0x001000000009b672

@end
