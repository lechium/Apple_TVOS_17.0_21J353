//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer, SRStarkConfirmationSnippetView, SRStarkEmergencyCallConfirmationSnippetView;

@interface SRStarkEmergencyCallConfirmationSnippetController
{
    long long _seconds;	// 8 = 0x8
    NSTimer *_countdownTimer;	// 16 = 0x10
    SRStarkConfirmationSnippetView *_snippetView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000e105
- (void)setSnippetView:(id)arg1;	// IMP=0x001000000000e0f1
- (void)_updateCountdown:(id)arg1;	// IMP=0x001000000000de7a
- (long long)autoDismissalReason;	// IMP=0x001000000000de6f
- (long long)autoDismissalStrategy;	// IMP=0x001000000000de64
@property(readonly) SRStarkEmergencyCallConfirmationSnippetView *emergencySnippetView;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000ddad
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000dca8
- (id)snippetView;	// IMP=0x001000000000d8e9
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x001000000000d83d

@end

