//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServices/NSObject-Protocol.h>

@class BLSAlwaysOnFrameSpecifier, BLSAlwaysOnSession, BLSBacklightSceneVisualState, NSString;
@protocol BLSBacklightSceneEnvironmentDelegate;

@protocol BLSBacklightSceneEnvironment <NSObject>
@property _Bool supportsAlwaysOn;
@property(readonly, getter=hasUnrestrictedFramerateUpdates) _Bool unrestrictedFramerateUpdates;
@property(readonly, getter=isLiveUpdating) _Bool liveUpdating;
@property(readonly) BLSAlwaysOnSession *alwaysOnSession;
@property(readonly, getter=isAnimatingVisualState) _Bool animatingVisualState;
@property(readonly) BLSAlwaysOnFrameSpecifier *frameSpecifier;
@property(readonly) BLSBacklightSceneVisualState *visualState;
@property(readonly, getter=isDisplayBlanked) _Bool displayBlanked;
@property(readonly, getter=isDelegateActive) _Bool delegateActive;
@property(readonly, copy) NSString *identifier;
@property(retain) id <BLSBacklightSceneEnvironmentDelegate> delegate;
- (void)invalidateAllTimelinesForReason:(NSString *)arg1;
@end

