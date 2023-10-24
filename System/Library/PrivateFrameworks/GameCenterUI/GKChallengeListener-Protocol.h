//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKChallenge, GKPlayer;

@protocol GKChallengeListener <NSObject>

@optional
- (void)player:(GKPlayer *)arg1 issuedChallengeWasCompleted:(GKChallenge *)arg2 byFriend:(GKPlayer *)arg3;
- (void)player:(GKPlayer *)arg1 didCompleteChallenge:(GKChallenge *)arg2 issuedByFriend:(GKPlayer *)arg3;
- (void)player:(GKPlayer *)arg1 didReceiveChallenge:(GKChallenge *)arg2;
- (void)player:(GKPlayer *)arg1 wantsToPlayChallenge:(GKChallenge *)arg2;
@end

