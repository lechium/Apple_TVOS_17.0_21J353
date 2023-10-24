//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AMSMetrics, AMSUserNotification, AVPlayerViewController, NSString, UIImageView, UILabel;
@protocol AMPUserNotificationContentDelegate;

__attribute__((visibility("hidden")))
@interface AMPUserNotificationContentViewController : UIViewController
{
    _Bool _hasAppeared;	// 8 = 0x8
    _Bool _hasPlayedVideo;	// 9 = 0x9
    AMSUserNotification *_userNotification;	// 16 = 0x10
    id <AMPUserNotificationContentDelegate> _delegate;	// 24 = 0x18
    NSString *_audioSessionCategory;	// 32 = 0x20
    unsigned long long _audioSessionCategoryOptions;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    AMSMetrics *_metrics;	// 56 = 0x38
    UILabel *_textLabel;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    AVPlayerViewController *_videoPlayerController;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000005149
@property(readonly, nonatomic) AVPlayerViewController *videoPlayerController; // @synthesize videoPlayerController=_videoPlayerController;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) AMSMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool hasPlayedVideo; // @synthesize hasPlayedVideo=_hasPlayedVideo;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) unsigned long long audioSessionCategoryOptions; // @synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions;
@property(retain, nonatomic) NSString *audioSessionCategory; // @synthesize audioSessionCategory=_audioSessionCategory;
@property(nonatomic) __weak id <AMPUserNotificationContentDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AMSUserNotification *userNotification; // @synthesize userNotification=_userNotification;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000484b
- (void)mediaPause;	// IMP=0x00000000000046c0
- (void)imageViewTapped:(id)arg1;	// IMP=0x0000000000004683
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000003eec
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000003dfc
@property(readonly, nonatomic) struct CGSize expectedContentSize;
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x0000000000003ada
- (void)loadView;	// IMP=0x00000000000036f7
- (id)initWithNotification:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000000290f

@end

