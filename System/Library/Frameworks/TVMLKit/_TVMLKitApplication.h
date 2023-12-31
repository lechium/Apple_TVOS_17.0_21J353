//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppDataStorage, NSDictionary, NSString, TVApplicationControllerContext, UIViewController, UIWindow;
@protocol TVAppRootViewController, UITraitEnvironment;

__attribute__((visibility("hidden")))
@interface _TVMLKitApplication : NSObject
{
    _Bool _headless;	// 8 = 0x8
    TVApplicationControllerContext *_launchContext;	// 16 = 0x10
    IKAppDataStorage *_localDataStorage;	// 24 = 0x18
    UIViewController<TVAppRootViewController> *_appRootViewController;	// 32 = 0x20
    UIWindow *_keyWindow;	// 40 = 0x28
    id <UITraitEnvironment> _keyTraitEnvironment;	// 48 = 0x30
    NSDictionary *_javaScriptLaunchOptions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000011c5f5
@property(nonatomic) _Bool headless; // @synthesize headless=_headless;
@property(copy, nonatomic) NSDictionary *javaScriptLaunchOptions; // @synthesize javaScriptLaunchOptions=_javaScriptLaunchOptions;
@property(nonatomic) __weak id <UITraitEnvironment> keyTraitEnvironment; // @synthesize keyTraitEnvironment=_keyTraitEnvironment;
@property(nonatomic) __weak UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) __weak UIViewController<TVAppRootViewController> *appRootViewController; // @synthesize appRootViewController=_appRootViewController;
@property(nonatomic) __weak IKAppDataStorage *localDataStorage; // @synthesize localDataStorage=_localDataStorage;
@property(nonatomic) __weak TVApplicationControllerContext *launchContext; // @synthesize launchContext=_launchContext;
- (id)appTraitCollection;	// IMP=0x000000000011c028
- (_Bool)appIsPrivileged;	// IMP=0x000000000011bfdd
- (_Bool)appIsTrusted;	// IMP=0x000000000011bf92
- (id)userDefaultsStorage;	// IMP=0x000000000011bf79
- (id)vendorStorage;	// IMP=0x000000000011bf71
- (id)vendorIdentifier;	// IMP=0x000000000011bf69
- (_Bool)shouldIgnoreJSValidation;	// IMP=0x000000000011bf61
- (id)localStorage;	// IMP=0x000000000011bf4f
- (id)appLaunchParams;	// IMP=0x000000000011bdbc
- (id)bagBootURLKey;	// IMP=0x000000000011bd79
- (id)offlineJSURL;	// IMP=0x000000000011bd36
- (id)appJSCachePath;	// IMP=0x000000000011bcf3
- (id)appLocalJSURL;	// IMP=0x000000000011bcb0
- (id)appJSURL;	// IMP=0x000000000011bc6d
- (id)appIdentifier;	// IMP=0x000000000011bc16
- (id)activeDocument;	// IMP=0x000000000011bb83
@property(readonly, nonatomic) _Bool supportsPictureInPicturePlayback;
- (id)initWithLaunchContext:(id)arg1;	// IMP=0x000000000011bae3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

