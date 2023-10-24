//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIResponder.h>

@class NSString, UIScene, UIWindow;
@protocol SRApplicationDataSource;

@interface SRAppDelegate : UIResponder
{
    UIWindow *_appWindow;	// 8 = 0x8
    UIScene *_currentScene;	// 16 = 0x10
    id <SRApplicationDataSource> _dataSource;	// 24 = 0x18
}

+ (id)sharedDelegate;	// IMP=0x002000000007d1ee
+ (id)sharedApplication;	// IMP=0x001000000007d1d5
- (void).cxx_destruct;	// IMP=0x002000000007dd0c
@property(nonatomic) __weak id <SRApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIScene *currentScene; // @synthesize currentScene=_currentScene;
@property(retain, nonatomic) UIWindow *appWindow; // @synthesize appWindow=_appWindow;
- (void)willEnterForegroundHandler;	// IMP=0x001000000007dc20
- (void)willResignActiveHandler;	// IMP=0x001000000007dbb6
- (void)didBecomeActiveHandler;	// IMP=0x001000000007db4c
- (void)tearDownViews;	// IMP=0x001000000007dae2
- (void)setUpViews;	// IMP=0x001000000007da78
- (void)invalidateKeyboardWindowIfNeeded;	// IMP=0x001000000007d7a7
- (void)_updateDeferral;	// IMP=0x001000000007d51b
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000007d4cd
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x001000000007d4c7
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x001000000007d4c1
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x001000000007d4bb
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x001000000007d4b5
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x001000000007d4af
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000007d2a8
- (void)_windowWillDestroyContext:(id)arg1;	// IMP=0x001000000007d259
- (void)_windowDidCreateContext:(id)arg1;	// IMP=0x001000000007d20a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
