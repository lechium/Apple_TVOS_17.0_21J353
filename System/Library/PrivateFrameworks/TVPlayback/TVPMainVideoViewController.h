//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVPlayerViewController, NSObject, TVPVideoView, TVVideoBorderView, UIView, _UIFloatingContentView;
@protocol TVPAVFPlayback, TVPMainVideoViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TVPMainVideoViewController : UIViewController
{
    _Bool _acceptsFocus;	// 8 = 0x8
    _Bool _videoViewHidden;	// 9 = 0x9
    id <TVPMainVideoViewControllerDelegate> _delegate;	// 16 = 0x10
    NSObject<TVPAVFPlayback> *_player;	// 24 = 0x18
    AVPlayerViewController *_avPlayerViewController;	// 32 = 0x20
    double _videoViewAlpha;	// 40 = 0x28
    _UIFloatingContentView *_floatingContentView;	// 48 = 0x30
    TVPVideoView *_videoView;	// 56 = 0x38
    UIView *_playbackView;	// 64 = 0x40
    TVVideoBorderView *_borderView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000bb54
@property(retain, nonatomic) TVVideoBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *playbackView; // @synthesize playbackView=_playbackView;
@property(retain, nonatomic) TVPVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(nonatomic) double videoViewAlpha; // @synthesize videoViewAlpha=_videoViewAlpha;
@property(nonatomic, getter=isVideoViewHidden) _Bool videoViewHidden; // @synthesize videoViewHidden=_videoViewHidden;
@property(retain, nonatomic) AVPlayerViewController *avPlayerViewController; // @synthesize avPlayerViewController=_avPlayerViewController;
@property(retain, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
@property(nonatomic) _Bool acceptsFocus; // @synthesize acceptsFocus=_acceptsFocus;
@property(nonatomic) __weak id <TVPMainVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidLoad;	// IMP=0x000000000000b5c5
- (void)loadView;	// IMP=0x000000000000b4ee
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000000b3cd
- (void)_addPlaybackView:(id)arg1;	// IMP=0x000000000000b161
- (void)_handleSelectButton:(id)arg1;	// IMP=0x000000000000b051
- (void)_didSelect;	// IMP=0x000000000000aff4
- (void)preserveVideoViewForReuse;	// IMP=0x000000000000ae50
- (id)initWithPlayer:(id)arg1;	// IMP=0x000000000000adde
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000adb3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000ad88

@end

