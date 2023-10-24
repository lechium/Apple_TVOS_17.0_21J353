//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray, PBPIPControlButton, UIAction, UIStackView, UIView;
@protocol PBPIPControlsDelegate;

@interface PBPIPControlsViewController : UIViewController
{
    UIAction *_moveQuadrantAction;	// 8 = 0x8
    id <PBPIPControlsDelegate> _delegate;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
    MISSING_TYPE *_activeButtons;	// 40 = 0x28
    UIView *_gradientView;	// 48 = 0x30
    PBPIPControlButton *_moveQuadrantButton;	// 56 = 0x38
    long long _currentQuadrant;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001884b4
@property(nonatomic) long long currentQuadrant; // @synthesize currentQuadrant=_currentQuadrant;
@property(retain, nonatomic) PBPIPControlButton *moveQuadrantButton; // @synthesize moveQuadrantButton=_moveQuadrantButton;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) NSArray *activeButtons; // @synthesize activeButtons=_activeButtons;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <PBPIPControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_moveControl;	// IMP=0x0010000000188387
- (id)_layoutContextMenu;	// IMP=0x0010000000187f7b
@property(readonly, nonatomic) UIAction *moveQuadrantAction; // @synthesize moveQuadrantAction=_moveQuadrantAction;
- (void)playPausePressed:(id)arg1;	// IMP=0x0010000000187dc9
- (void)menuPressed:(id)arg1;	// IMP=0x0010000000187d8c
- (void)enterSplitViewButtonPressed:(id)arg1;	// IMP=0x0010000000187d4f
- (void)toggleStashingButtonPressed:(id)arg1;	// IMP=0x0010000000187d12
- (void)endButtonPressed:(id)arg1;	// IMP=0x0010000000187c8d
- (void)cancelPictureInPictureButtonPressed:(id)arg1;	// IMP=0x0010000000187c50
- (void)movePictureInPictureButtonPressed:(id)arg1;	// IMP=0x0010000000187bf4
- (void)expandPictureInPictureButtonPressed:(id)arg1;	// IMP=0x0010000000187bb7
- (void)hideControlsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001876e6
- (void)showControlsAnimated:(_Bool)arg1 shrinkingEffect:(_Bool)arg2;	// IMP=0x00100000001871af
- (id)preferredFocusEnvironments;	// IMP=0x0010000000187199
- (void)viewDidLoad;	// IMP=0x00100000001864e9
- (id)initWithQuadrant:(long long)arg1 mode:(unsigned long long)arg2;	// IMP=0x0010000000186468

@end

