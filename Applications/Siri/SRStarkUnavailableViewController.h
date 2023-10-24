//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SRStarkUnavailableSnippetView;
@protocol SRStarkItemControllerDelegate;

@interface SRStarkUnavailableViewController : UIViewController
{
    SRStarkUnavailableSnippetView *_snippetView;	// 8 = 0x8
    NSString *_titleString;	// 16 = 0x10
    NSString *_subtitleString;	// 24 = 0x18
    _Bool _shouldSynthesizeTitles;	// 32 = 0x20
    _Bool _hasFinishedSynthesizingTitles;	// 33 = 0x21
    id <SRStarkItemControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001be19
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)autoDismissalReason;	// IMP=0x001000000001bdd2
- (long long)autoDismissalStrategy;	// IMP=0x001000000001bda9
- (void)viewDidLoad;	// IMP=0x001000000001bc1e
- (void)loadView;	// IMP=0x001000000001bba9
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 shouldSynthesizeTitles:(_Bool)arg3;	// IMP=0x001000000001bac5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end

