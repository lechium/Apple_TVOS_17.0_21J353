//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationSessionState, NSString, NSTimer;
@protocol MNIdleTimerUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNIdleTimerUpdater : NSObject
{
    _Bool _isStarted;	// 8 = 0x8
    _Bool _isArrived;	// 9 = 0x9
    NSTimer *_notMovingTimer;	// 16 = 0x10
    _Bool _shouldEnableIdleTimer;	// 24 = 0x18
    id <MNIdleTimerUpdaterDelegate> _delegate;	// 32 = 0x20
    MNNavigationSessionState *_navigationSessionState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008c3e8
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) __weak id <MNIdleTimerUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldEnableIdleTimerForArrivalState:(long long)arg1;	// IMP=0x000000000008c3aa
- (void)_updateForLocation:(id)arg1;	// IMP=0x000000000008c0c1
- (void)_updateShouldEnableIdleTimer:(_Bool)arg1;	// IMP=0x000000000008bfbb
- (void)updateForStartNavigation;	// IMP=0x000000000008bf2b
- (void)dealloc;	// IMP=0x000000000008bcd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

