//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUIActivation/NSObject-Protocol.h>

@class AFUISiriSession, AFUISiriViewController, NSArray, NSError, NSString, NSURL, SASRequestOptions;

@protocol AFUISiriViewControllerDelegate <NSObject>
- (_Bool)isAmbientPresented;
- (void)openURL:(NSURL *)arg1 bundleId:(NSString *)arg2 inPlace:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriViewController:(AFUISiriViewController *)arg1 onboardingScreenContinueButtonTappedWithRequestOptions:(SASRequestOptions *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 updateHomeAffordanceForBlurVisibilty:(_Bool)arg2;
- (_Bool)siriViewControllerShouldSupportTextInput:(AFUISiriViewController *)arg1;
- (void)siriViewController:(AFUISiriViewController *)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didHideStatusView:(_Bool)arg2;
- (_Bool)siriViewController:(AFUISiriViewController *)arg1 attemptUnlockWithPassword:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 siriIdleAndQuietStatusDidChange:(_Bool)arg2;
- (void)siriViewControllerSessionDidResetContext:(AFUISiriViewController *)arg1;
- (void)siriViewControllerDidChangeVisibility:(AFUISiriViewController *)arg1;
- (_Bool)siriViewControllerShouldEndSession:(AFUISiriViewController *)arg1;
- (void)userRelevantEventDidOccurInSiriViewController:(AFUISiriViewController *)arg1;
- (SASRequestOptions *)siriViewController:(AFUISiriViewController *)arg1 willStartRequestWithOptions:(SASRequestOptions *)arg2;
- (void)startGuidedAccessForSiriViewController:(AFUISiriViewController *)arg1;
- (void)siriViewController:(AFUISiriViewController *)arg1 didEncounterUnexpectedError:(NSError *)arg2;

@optional
- (void)siriViewController:(AFUISiriViewController *)arg1 didChangePresentationVisualState:(unsigned long long)arg2;
- (_Bool)headphonesAuthenticated;
- (void)invalidateSystemApertureAssertion;
- (void)requestSystemApertureCollapse;
- (void)siriViewController:(AFUISiriViewController *)arg1 didReceiveButtonUpWithRequestOptions:(SASRequestOptions *)arg2;
- (void)siriViewControllerDidPresentKeyboard:(AFUISiriViewController *)arg1;
- (void)siriViewControllerDidChangeToListeningMode:(AFUISiriViewController *)arg1;
- (void)siriViewControllerDidDeactivateScene:(AFUISiriViewController *)arg1;
- (void)siriViewController:(AFUISiriViewController *)arg1 sceneDidActivateWithIdentifier:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 voiceActivationMaskViewIsVisible:(_Bool)arg2;
- (void)siriViewControllerSpeechRequestCancelledFromSiriOrb;
- (void)resetGestureBehaviors;
- (void)setShareHomeGesture:(_Bool)arg1;
- (void)setShouldPassTouchesThroughToSpringBoard:(_Bool)arg1;
- (void)setShouldDismissForSwipesOutsideContent:(_Bool)arg1;
- (void)setShouldDismissForTapsOutsideContent:(_Bool)arg1;
- (void)setShouldDismissForTapOutsideContent:(_Bool)arg1;
- (void)siriViewControllerSpeechRequestStartedFromSiriOrb;
- (void)siriViewController:(AFUISiriViewController *)arg1 failedToLaunchAppWithBundleIdentifier:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 willProcessAppLaunchWithBundleIdentifier:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)siriViewController:(AFUISiriViewController *)arg1 didFinishTest:(NSString *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 willStartTest:(NSString *)arg2;
- (void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
- (void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
- (void)siriViewController:(AFUISiriViewController *)arg1 didCompleteRequestWithError:(NSError *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 didEndSession:(AFUISiriSession *)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 requestsDismissalWithReason:(long long)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)dismissSiriViewController:(AFUISiriViewController *)arg1 withReason:(long long)arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 requestsPresentation:(void (^)(_Bool))arg2;
- (void)siriViewController:(AFUISiriViewController *)arg1 presentedIntentWithBundleId:(NSString *)arg2;
- (void)siriViewControllerDidFinishDismissing:(AFUISiriViewController *)arg1;
- (void)siriViewController:(AFUISiriViewController *)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(NSArray *)arg2;
@end

