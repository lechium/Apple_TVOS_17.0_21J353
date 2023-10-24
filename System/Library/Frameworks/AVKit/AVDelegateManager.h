//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController;
@protocol AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate, AVPlayerViewControllerPlaybackDelegate><NSObject, AVScanningDelegate;

__attribute__((visibility("hidden")))
@interface AVDelegateManager : NSObject
{
    id <AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate> _delegate;	// 8 = 0x8
    id <AVPlayerViewControllerPlaybackDelegate><NSObject> _privateDelegate;	// 16 = 0x10
    id <AVScanningDelegate> _scanningDelegate;	// 24 = 0x18
    AVPlayerViewController *_playerViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001070a6
@property(readonly) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) __weak id <AVScanningDelegate> scanningDelegate; // @synthesize scanningDelegate=_scanningDelegate;
@property(nonatomic) __weak id <AVPlayerViewControllerPlaybackDelegate><NSObject> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) __weak id <AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasStopScanning;	// IMP=0x0000000000106f9f
- (id)delegateIfRespondsTo:(SEL)arg1;	// IMP=0x0000000000106f2f
- (void)willTransitionToVisibilityOfTransportBar:(_Bool)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000106e5c
- (_Bool)shouldPresentContentProposal:(id)arg1;	// IMP=0x0000000000106d86
- (void)didRejectContentProposal:(id)arg1;	// IMP=0x0000000000106cba
@property(readonly, nonatomic) _Bool handlesRejectContentProposal;
- (void)didAcceptContentProposal:(id)arg1;	// IMP=0x0000000000106ba8
@property(readonly, nonatomic) _Bool supportsContentProposals;
- (void)didFinishSeek;	// IMP=0x0000000000106aa1
- (void)didFinishScanning;	// IMP=0x00000000001069e0
- (void)shouldScanAtRate:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001068e7
- (void)shouldPauseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001067f8
- (void)shouldSeekToDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001066d9
- (void)shouldSeekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001065db
- (void)shouldPlayFromTime:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001064dd
- (_Bool)shouldHandleScanningForPlayerItem:(id)arg1;	// IMP=0x00000000001063f1
- (void)stopScanning;	// IMP=0x0000000000106345
- (long long)scanFromElapsedTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 imageBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000106175
@property(readonly, nonatomic) _Bool hasCustomScanning;
- (id)previousChannelInterstitialViewController;	// IMP=0x0000000000106030
- (id)nextChannelInterstitialViewController;	// IMP=0x0000000000105f69
@property(readonly, nonatomic) _Bool hasChannelSkipping;
- (void)skipToPreviousChannel:(CDUnknownBlockType)arg1;	// IMP=0x0000000000105e37
- (void)skipToNextChannel:(CDUnknownBlockType)arg1;	// IMP=0x0000000000105d4b
- (void)skipToPreviousItem;	// IMP=0x0000000000105c8a
- (void)skipToNextItem;	// IMP=0x0000000000105bc9
- (void)didSelectExternalSubtitleOptionLanguage:(id)arg1;	// IMP=0x0000000000105afd
- (void)didSelectMediaSelectionOption:(id)arg1 inMediaSelectionGroup:(id)arg2;	// IMP=0x00000000001058e1
- (CDStruct_1b6d18a9)timeToSeekAfterUserNavigatedFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000001057bc
- (id)displayNameForMediaSelectionOption:(id)arg1;	// IMP=0x00000000001056d8
- (void)willResumePlaybackAfterUserNavigatedFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x00000000001055ec
- (void)willResumePlaybackAfterUserNavigatedFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000001054a5
- (void)didPresentInterstitialGroup:(id)arg1;	// IMP=0x00000000001053d9
- (void)willPresentInterstitialGroup:(id)arg1;	// IMP=0x000000000010530d
- (void)didEndDismissalTransition;	// IMP=0x0000000000105255
- (void)willBeginDismissalTransition;	// IMP=0x000000000010519d
- (_Bool)shouldDismiss;	// IMP=0x00000000001050f1
@property(readonly, nonatomic, getter=isScanningSupportedByMainDelegate) _Bool scanningSupportedByMainDelegate;
- (id)initWithPlayerViewController:(id)arg1;	// IMP=0x0000000000104f9a

@end

