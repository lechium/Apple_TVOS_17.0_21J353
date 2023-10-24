//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, _UIDatePickerOverlayPresentation;

__attribute__((visibility("hidden")))
@interface _UIDatePickerContainerViewController : UIViewController
{
    CDUnknownBlockType _pendingKeyboardAdjustment;	// 416 = 0x1a0
    double _keyboardAdjustmentOffset;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x00000000012ba356
@property(nonatomic) double keyboardAdjustmentOffset; // @synthesize keyboardAdjustmentOffset=_keyboardAdjustmentOffset;
@property(copy, nonatomic) CDUnknownBlockType pendingKeyboardAdjustment; // @synthesize pendingKeyboardAdjustment=_pendingKeyboardAdjustment;
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x00000000012ba1cb
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x00000000012ba186
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000012ba048
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000012b9f66
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000012b9efa
- (void)didChangeKeyboardAvoidanceAdjustmentDeferral;	// IMP=0x00000000012b9e74
- (void)keyboardFrameWillChange:(id)arg1;	// IMP=0x00000000012b973f
- (void)_didReceiveEscapeKey:(id)arg1;	// IMP=0x00000000012b96fd
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000012b96f5
- (_Bool)_defersToPresentingViewControllerForSupportedInterfaceOrientations;	// IMP=0x00000000012b96ed
- (void)dealloc;	// IMP=0x00000000012b966b
- (id)initWithPresentation:(id)arg1;	// IMP=0x00000000012b9533
@property(readonly, nonatomic) _UIDatePickerOverlayPresentation *presentation;
- (id)keyCommands;	// IMP=0x00000000012b9440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

