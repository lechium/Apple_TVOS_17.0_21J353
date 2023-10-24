//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBDiagnosticsUIController;

@interface PBDiagnosticsController : NSObject
{
    int _screenshotCapturedNotificationToken;	// 8 = 0x8
    PBDiagnosticsUIController *_uiController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000007133c
@property(readonly, nonatomic) int screenshotCapturedNotificationToken; // @synthesize screenshotCapturedNotificationToken=_screenshotCapturedNotificationToken;
@property(readonly, nonatomic) PBDiagnosticsUIController *uiController; // @synthesize uiController=_uiController;
- (void)_handleBlackScreenRecoveryEvent:(id)arg1;	// IMP=0x0010000000071210
- (void)_handleScreenshotEvent:(id)arg1;	// IMP=0x0010000000071138
- (void)_handleSysdiagnoseEvent:(id)arg1;	// IMP=0x001000000007103d
- (void)_setupSystemKeychordGesturesUsingSystemGestureManager:(id)arg1;	// IMP=0x0010000000070f91
- (void)_showScreenshotCapturedIndication;	// IMP=0x0010000000070f7a
- (void)showStackShotIndication;	// IMP=0x0010000000070f63
- (void)hideSysdiagnoseRunningIndication;	// IMP=0x0010000000070f4c
- (_Bool)showSysdiagnoseRunningIndication;	// IMP=0x0010000000070f15
- (void)invalidate;	// IMP=0x0010000000070ece
- (void)dealloc;	// IMP=0x0010000000070e0c
- (id)initWithUIController:(id)arg1 systemGestureManager:(id)arg2 screenshotNotificationName:(const char *)arg3;	// IMP=0x00100000000709ab
- (id)init;	// IMP=0x001000000007092c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

