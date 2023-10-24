//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class MPAVRoutingController, MPAVRoutingSheet, MPAudioVideoRoutingPopoverController, NSString, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPlaybackTargetPicker : UIView
{
    MPAVRoutingController *_routingController;	// 8 = 0x8
    MPAudioVideoRoutingPopoverController *_popoverController;	// 16 = 0x10
    MPAVRoutingSheet *_actionSheet;	// 24 = 0x18
    UIWebDocumentView *_delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000147b356
- (void)show:(_Bool)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x000000000147b20f
- (void)showAirPlayPickerIPhone:(long long)arg1;	// IMP=0x000000000147b05e
- (void)showAirPlayPickerIPad:(long long)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x000000000147aebc
- (void)_dismissAirPlayRoutePickerIPad;	// IMP=0x000000000147adca
- (void)_windowDidRotate:(id)arg1;	// IMP=0x000000000147adb8
- (void)_windowWillRotate:(id)arg1;	// IMP=0x000000000147ad99
- (void)_presentAirPlayPopoverAnimated:(_Bool)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x000000000147ad31
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x000000000147ad10
- (void)dealloc;	// IMP=0x000000000147acb2
- (void)setDelegate:(id)arg1;	// IMP=0x000000000147ac9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

