//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class SRSiriViewController;

@interface SRViewController : UIViewController
{
    SRSiriViewController *_siriVC;	// 8 = 0x8
    int _expectedTeardownCounter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000078dcf
- (void)willEnterForegroundHandler;	// IMP=0x0010000000078db2
- (void)willResignActiveHandler;	// IMP=0x0010000000078d95
- (void)didBecomeActiveHandler;	// IMP=0x0010000000078d78
- (void)tearDownViews;	// IMP=0x0010000000078ac5
- (void)_cleanupAllViews;	// IMP=0x0010000000078702
- (void);	// IMP=0x0010000000078378
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000007836e
- (id)preferredFocusEnvironments;	// IMP=0x00100000000782d3
- (void)viewDidLoad;	// IMP=0x001000000007823c

@end
