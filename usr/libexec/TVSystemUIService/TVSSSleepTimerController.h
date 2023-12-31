//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, PBSScheduledSleep, PBSScheduledSleepManager, TVSSMenuModeController, UIImage;

@interface TVSSSleepTimerController : NSObject
{
    PBSScheduledSleep *_currentScheduledSleep;	// 8 = 0x8
    NSArray *_availableScheduledSleepRequests;	// 16 = 0x10
    PBSScheduledSleepManager *_sleepTimerManager;	// 24 = 0x18
    TVSSMenuModeController *_menuModeController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0010000000100390
@property(retain, nonatomic) TVSSMenuModeController *menuModeController; // @synthesize menuModeController=_menuModeController;
@property(retain, nonatomic) PBSScheduledSleepManager *sleepTimerManager; // @synthesize sleepTimerManager=_sleepTimerManager;
@property(retain, nonatomic) NSArray *availableScheduledSleepRequests; // @synthesize availableScheduledSleepRequests=_availableScheduledSleepRequests;
@property(retain, nonatomic) PBSScheduledSleep *currentScheduledSleep; // @synthesize currentScheduledSleep=_currentScheduledSleep;
- (void)_getAvailableSleepTimerRequests;	// IMP=0x00100000001000e0
- (void)_getCurrentSleepTimer;	// IMP=0x00100000000ffeb0
- (void)menuModeControllerModeDidChange:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x00100000000ffe30
- (void)cancelScheduledSleepWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ffdd0
- (void)getCurrentScheduledSleepWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ffd70
- (void)getAvailableScheduledSleepRequestsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ffd10
- (void)scheduleSleepWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ffc80
- (void)dealloc;	// IMP=0x00100000000ffc20
- (id)initWithMenuModeController:(id)arg1;	// IMP=0x00100000000ffb00
@property(readonly, nonatomic) UIImage *contentImage;
@property(readonly, nonatomic) NSString *contentTitle;

// Remaining properties
@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
@property(readonly, nonatomic) UIImage *contentImage1;
@property(readonly, nonatomic) UIImage *contentImage2;
@property(readonly, nonatomic) UIImage *contentImage3;
@property(readonly, nonatomic) UIImage *contentImage4;
@property(nonatomic) _Bool contentIsDisabled;
@property(nonatomic) _Bool contentIsSelected;
@property(retain, nonatomic) NSNumber *contentPercentage;
@property(readonly, nonatomic) NSString *contentText1;
@property(readonly, nonatomic) NSString *contentText2;
@property(readonly, nonatomic) NSString *contentText3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

