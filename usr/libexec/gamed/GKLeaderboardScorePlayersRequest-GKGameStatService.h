//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKLeaderboardScorePlayersRequest.h>

@interface GKLeaderboardScorePlayersRequest (GKGameStatService)
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c495f
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c425f
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00100000000c3ee6
- (id)bagKey;	// IMP=0x00100000000c3ed9
@end

