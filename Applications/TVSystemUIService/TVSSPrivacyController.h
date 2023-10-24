//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVSObserverSet, TVSSMenuModeController, TVSSPrivacyState, TVSSSensorActivityController;
@protocol BSInvalidatable;

@interface TVSSPrivacyController : NSObject
{
    id <BSInvalidatable> _stateCaptureHandle;	// 8 = 0x8
    _Bool _requireIndicatorsOutsideMenuBar;	// 16 = 0x10
    TVSSMenuModeController *_menuModeController;	// 24 = 0x18
    TVSSSensorActivityController *_sensorActivityController;	// 32 = 0x20
    TVSSPrivacyState *_privacyState;	// 40 = 0x28
    TVSObserverSet *_observers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000009bb80
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) TVSSPrivacyState *privacyState; // @synthesize privacyState=_privacyState;
@property(readonly, nonatomic) TVSSSensorActivityController *sensorActivityController; // @synthesize sensorActivityController=_sensorActivityController;
@property(readonly, nonatomic) TVSSMenuModeController *menuModeController; // @synthesize menuModeController=_menuModeController;
@property(nonatomic) _Bool requireIndicatorsOutsideMenuBar; // @synthesize requireIndicatorsOutsideMenuBar=_requireIndicatorsOutsideMenuBar;
- (id)stateDumpBuilder;	// IMP=0x001000000009b9f0
- (void)_notifyPrivacyControllerStateDidChange;	// IMP=0x001000000009b890
- (void)_updatePrivacyState;	// IMP=0x001000000009b300
- (void)sensorActivityControllerDidUpdate:(id)arg1;	// IMP=0x001000000009b2b0
- (void)menuModeControllerModeDidChange:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x001000000009b230
- (void)removeControllerObserver:(id)arg1;	// IMP=0x001000000009b1b0
- (void)addControllerObserver:(id)arg1;	// IMP=0x001000000009b120
- (void)dealloc;	// IMP=0x001000000009aef0
- (id)initWithMenuModeController:(id)arg1 sensorActivityController:(id)arg2;	// IMP=0x001000000009aaf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

