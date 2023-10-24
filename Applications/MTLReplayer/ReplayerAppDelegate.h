//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, ReplayerViewController, UIWindow;
@protocol GTMTLReplayService;

@interface ReplayerAppDelegate : UIResponder
{
    struct GTMTLReplayClient _context;	// 8 = 0x8
    ReplayerViewController *_replayerViewController;	// 296 = 0x128
    UIWindow *_window;	// 304 = 0x130
    id <GTMTLReplayService> _replayFacility;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x002000000006ca78
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000006ca63
- (void)_applicationDidFinishLaunching;	// IMP=0x001000000006ba04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
