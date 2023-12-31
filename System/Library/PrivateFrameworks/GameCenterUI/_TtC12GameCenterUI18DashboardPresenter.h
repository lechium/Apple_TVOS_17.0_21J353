//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI18DashboardPresenter
{
    MISSING_TYPE *pageMetricsPresenter;	// 0 = 0x0
    MISSING_TYPE *launchContext;	// 8634 = 0x21ba
    MISSING_TYPE *request;	// 0 = 0x0
    MISSING_TYPE *shouldUseLargeTitle;	// 3882038 = 0x3b3c36
    MISSING_TYPE *primarySections;	// 0 = 0x0
    MISSING_TYPE *secondarySections;	// 0 = 0x0
    MISSING_TYPE *game;	// 0 = 0x0
    MISSING_TYPE *scrollToIndexPath;	// 0 = 0x0
    MISSING_TYPE *didScrollToIndexPath;	// 2147484680 = 0x80000408
    MISSING_TYPE *scrollToActivityInfo;	// 6 = 0x6
    MISSING_TYPE *onFriendRequestsCountChanged;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *sections;	// 0 = 0x0
    MISSING_TYPE *requiredData;	// 0 = 0x0
    MISSING_TYPE *requiredDataPresenter;	// 0 = 0x0
}

+ (void)presentLeaderboardsFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3 leaderboard:(id)arg4 animated:(_Bool)arg5;	// IMP=0x006000000015d94c
+ (void)processLeaderboardRequestFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3;	// IMP=0x006000000015d5be
- (void).cxx_destruct;	// IMP=0x000000000015ecb3
- (id)initWithPlayerId:(id)arg1;	// IMP=0x000000000015eb9e
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;	// IMP=0x000000000015eb30
- (void)presentPlayerProfileFrom:(id)arg1 request:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000015ea6c
- (void)presentChallengesFrom:(id)arg1 gameRecord:(id)arg2 shouldShowPlayForChallenge:(_Bool)arg3;	// IMP=0x000000000015e110
- (void)presentAchievementsFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3;	// IMP=0x000000000015df37
- (void)presentLeaderboardsFrom:(id)arg1 request:(id)arg2 gameBundleID:(id)arg3;	// IMP=0x000000000015dafc
- (void)updateSnapshot;	// IMP=0x000000000015c4d6
- (void)handleViewDidLoad;	// IMP=0x000000000015c25e
@property(nonatomic) _Bool didScrollToIndexPath; // @synthesize didScrollToIndexPath;
@property(nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property(nonatomic) _Bool displayInSplitView;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic) _Bool shouldUseLargeTitle; // @synthesize shouldUseLargeTitle;

@end

