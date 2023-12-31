//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface PBPIPControl : NSObject
{
    _Bool _destructive;	// 8 = 0x8
    NSString *_localizedTitle;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
}

+ (id)end;	// IMP=0x00400000001b6aad
+ (id)layoutOptionFullScreenPictureInPicture;	// IMP=0x00100000001b6a72
+ (id)layoutOptionFullScreenSplitView;	// IMP=0x00100000001b6a37
+ (id)layoutOptionSplitView;	// IMP=0x00100000001b69fc
+ (id)layoutOptionPictureInPicture;	// IMP=0x00100000001b69c1
+ (id)splitViewLayout;	// IMP=0x00100000001b6986
+ (id)hideSplitView;	// IMP=0x00100000001b6947
+ (id)pictureInPictureLayout;	// IMP=0x00100000001b690c
+ (id)cancelPictureInPicture;	// IMP=0x00100000001b68d1
+ (id)stopPictureInPicture;	// IMP=0x00100000001b6896
+ (id)movePictureInPictureWithCurrentQuadrant:(long long)arg1;	// IMP=0x00100000001b682c
+ (id)hidePictureInPicture;	// IMP=0x00100000001b67f1
+ (id)controlWithLocalizedTitleKey:(id)arg1 systemImageName:(id)arg2 accessibilityIdentifier:(id)arg3 accessibilityLabelKey:(id)arg4;	// IMP=0x00100000001b63b4
+ (id)controlWithLocalizedTitleKey:(id)arg1 image:(id)arg2 accessibilityIdentifier:(id)arg3 accessibilityLabelKey:(id)arg4;	// IMP=0x00100000001b62c9
- (void).cxx_destruct;	// IMP=0x00200000001b6b51
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)createActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b6716
- (id)createButton;	// IMP=0x00100000001b666c
- (void)updateAction:(id)arg1;	// IMP=0x00100000001b65bd
- (void)updateButton:(id)arg1;	// IMP=0x00100000001b651b
- (void)_updateAX:(id)arg1;	// IMP=0x00100000001b647c
- (id)initWithLocalizedTitleKey:(id)arg1 image:(id)arg2;	// IMP=0x00100000001b6221

@end

