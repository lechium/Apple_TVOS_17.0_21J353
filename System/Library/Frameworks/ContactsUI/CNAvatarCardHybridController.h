//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNAvatarCardController.h"

@class CNAvatarCardViewController, NSString, UIAlertController;

__attribute__((visibility("hidden")))
@interface CNAvatarCardHybridController : CNAvatarCardController
{
    CNAvatarCardViewController *_cardViewController;	// 8 = 0x8
    UIAlertController *_alertController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a5ea3
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) CNAvatarCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
- (id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1;	// IMP=0x00000000000a5e11
- (void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1;	// IMP=0x00000000000a5db1
- (void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;	// IMP=0x00000000000a5d9f
- (id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;	// IMP=0x00000000000a5d8d
- (_Bool)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint)arg2;	// IMP=0x00000000000a5be9
- (void)cardViewControllerDidUpdatePreferredSize:(id)arg1;	// IMP=0x00000000000a5b80
- (void)cardViewControllerDidDismiss:(id)arg1;	// IMP=0x00000000000a5ae3
- (void)cardViewControllerWillDismiss:(id)arg1;	// IMP=0x00000000000a5a46
- (void)cardViewController:(id)arg1 willShowActions:(id)arg2;	// IMP=0x00000000000a599c
- (id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;	// IMP=0x00000000000a58bc
- (void)_prepareAlertController;	// IMP=0x00000000000a56e5
- (void)_setupAlertController;	// IMP=0x00000000000a540b
- (void)_setupCardViewControllerWithContacts:(id)arg1;	// IMP=0x00000000000a52b5
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a50fc
- (void)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a5067
- (void)setSourceView:(id)arg1;	// IMP=0x00000000000a4e7b
- (void)setContacts:(id)arg1;	// IMP=0x00000000000a4e0d
- (_Bool)isVisible;	// IMP=0x00000000000a4daa
- (id)init;	// IMP=0x00000000000a4cd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

