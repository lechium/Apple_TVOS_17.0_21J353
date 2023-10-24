//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVSSAudioNowPlayingController, TVSSHUDBoxedValueVisualization, TVSSHUDValueHistoryVisualization, TVSSHUDView, TVSSMenuModeController, TVSSPrivacyController;

@interface TVSSDebugInfoHUDViewController : UIViewController
{
    TVSSMenuModeController *_menuModeController;	// 8 = 0x8
    TVSSPrivacyController *_privacyController;	// 16 = 0x10
    TVSSAudioNowPlayingController *_audioNowPlayingController;	// 24 = 0x18
    TVSSHUDView *_hudView;	// 32 = 0x20
    TVSSHUDValueHistoryVisualization *_modeViz;	// 40 = 0x28
    TVSSHUDValueHistoryVisualization *_bannerRequestedVisibilityViz;	// 48 = 0x30
    TVSSHUDBoxedValueVisualization *_keyboardFocusedElementIdViz;	// 56 = 0x38
    TVSSHUDBoxedValueVisualization *_focusedBundleIdViz;	// 64 = 0x40
    TVSSHUDBoxedValueVisualization *_headboardRequestedVisibilityViz;	// 72 = 0x48
    TVSSHUDBoxedValueVisualization *_systemGestureRequestedViz;	// 80 = 0x50
    TVSSHUDBoxedValueVisualization *_hasUserAttentionViz;	// 88 = 0x58
    TVSSHUDBoxedValueVisualization *_splitViewVisibleViz;	// 96 = 0x60
    TVSSHUDBoxedValueVisualization *_locationInUseViz;	// 104 = 0x68
    TVSSHUDBoxedValueVisualization *_locationIndicatorDisplayLocationViz;	// 112 = 0x70
    TVSSHUDBoxedValueVisualization *_cameraInUseViz;	// 120 = 0x78
    TVSSHUDBoxedValueVisualization *_micInUseViz;	// 128 = 0x80
    TVSSHUDBoxedValueVisualization *_recordingIndicatorDisplayLocationViz;	// 136 = 0x88
    TVSSHUDBoxedValueVisualization *_playerControlStateViz;	// 144 = 0x90
    TVSSHUDBoxedValueVisualization *_faceTimeActiveViz;	// 152 = 0x98
    TVSSHUDBoxedValueVisualization *_playbackStateViz;	// 160 = 0xa0
    TVSSHUDBoxedValueVisualization *_siriPresentationVisibilityViz;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000001285e0
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *siriPresentationVisibilityViz; // @synthesize siriPresentationVisibilityViz=_siriPresentationVisibilityViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *playbackStateViz; // @synthesize playbackStateViz=_playbackStateViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *faceTimeActiveViz; // @synthesize faceTimeActiveViz=_faceTimeActiveViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *playerControlStateViz; // @synthesize playerControlStateViz=_playerControlStateViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *recordingIndicatorDisplayLocationViz; // @synthesize recordingIndicatorDisplayLocationViz=_recordingIndicatorDisplayLocationViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *micInUseViz; // @synthesize micInUseViz=_micInUseViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *cameraInUseViz; // @synthesize cameraInUseViz=_cameraInUseViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *locationIndicatorDisplayLocationViz; // @synthesize locationIndicatorDisplayLocationViz=_locationIndicatorDisplayLocationViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *locationInUseViz; // @synthesize locationInUseViz=_locationInUseViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *splitViewVisibleViz; // @synthesize splitViewVisibleViz=_splitViewVisibleViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *hasUserAttentionViz; // @synthesize hasUserAttentionViz=_hasUserAttentionViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *systemGestureRequestedViz; // @synthesize systemGestureRequestedViz=_systemGestureRequestedViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *headboardRequestedVisibilityViz; // @synthesize headboardRequestedVisibilityViz=_headboardRequestedVisibilityViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *focusedBundleIdViz; // @synthesize focusedBundleIdViz=_focusedBundleIdViz;
@property(retain, nonatomic) TVSSHUDBoxedValueVisualization *keyboardFocusedElementIdViz; // @synthesize keyboardFocusedElementIdViz=_keyboardFocusedElementIdViz;
@property(retain, nonatomic) TVSSHUDValueHistoryVisualization *bannerRequestedVisibilityViz; // @synthesize bannerRequestedVisibilityViz=_bannerRequestedVisibilityViz;
@property(retain, nonatomic) TVSSHUDValueHistoryVisualization *modeViz; // @synthesize modeViz=_modeViz;
@property(retain, nonatomic) TVSSHUDView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) TVSSAudioNowPlayingController *audioNowPlayingController; // @synthesize audioNowPlayingController=_audioNowPlayingController;
@property(retain, nonatomic) TVSSPrivacyController *privacyController; // @synthesize privacyController=_privacyController;
@property(retain, nonatomic) TVSSMenuModeController *menuModeController; // @synthesize menuModeController=_menuModeController;
- (void)_updateVisualizations;	// IMP=0x00100000001275a0
- (void)nowPlayingState:(id)arg1 playbackStateDidChange:(long long)arg2;	// IMP=0x0010000000127540
- (void)privacyControllerStateDidChange:(id)arg1;	// IMP=0x00100000001274f0
- (void)menuModeStateProviderDidChange:(id)arg1;	// IMP=0x00100000001274a0
- (void)menuModeControllerModeDidChange:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x0010000000127420
- (void)viewDidLoad;	// IMP=0x0010000000127090
- (void)dealloc;	// IMP=0x0010000000126f60
- (id)initWithMenuModeController:(id)arg1 privacyController:(id)arg2;	// IMP=0x00100000001264b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
