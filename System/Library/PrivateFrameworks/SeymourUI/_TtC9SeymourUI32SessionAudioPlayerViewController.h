//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI32SessionAudioPlayerViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *currentLayoutKind;	// 16 = 0x10
    MISSING_TYPE *currentLayoutEnvironment;	// 24 = 0x18
    MISSING_TYPE *previousBounds;	// 104 = 0x68
    MISSING_TYPE *contentOverlayView;	// 136 = 0x88
    MISSING_TYPE *isPictureInPictureActive;	// 144 = 0x90
    MISSING_TYPE *layoutProvider;	// 152 = 0x98
    MISSING_TYPE *settingsPopoverSourceView;	// 160 = 0xa0
    MISSING_TYPE *presenter;	// 168 = 0xa8
    MISSING_TYPE *playerView;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000002ec7a0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002ec740
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00000000002ec6d0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002ec5f0
- (void)updateViewConstraints;	// IMP=0x00000000002ec5d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ec320
- (void)viewDidLoad;	// IMP=0x00000000002ec2f0
@property(nonatomic, readonly) NSArray *keyCommands;

@end

