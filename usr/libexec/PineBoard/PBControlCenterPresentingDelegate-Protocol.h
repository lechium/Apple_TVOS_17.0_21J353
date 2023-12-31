//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBCoordinatedTransitionToken;
@protocol PBControlCenterPresenting;

@protocol PBControlCenterPresentingDelegate <NSObject>
- (PBCoordinatedTransitionToken *)coordinatedTransitionTokenForControlCenterPresenter:(id <PBControlCenterPresenting>)arg1;
- (void)controlCenterPresenterDidDismiss:(id <PBControlCenterPresenting>)arg1;
- (void)controlCenterPresenterWillDismiss:(id <PBControlCenterPresenting>)arg1;
- (void)controlCenterPresenterWillPresent:(id <PBControlCenterPresenting>)arg1;
@end

