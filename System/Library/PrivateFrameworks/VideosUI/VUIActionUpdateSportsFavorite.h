//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionUpdateSportsFavorite
{
    NSString *_sportsLeagueID;	// 8 = 0x8
    NSString *_sportsTeamName;	// 16 = 0x10
}

+ (void)performFavoritesOperation:(_Bool)arg1 teamId:(id)arg2 teamName:(id)arg3 requestExecutionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0060000000147c09
- (void).cxx_destruct;	// IMP=0x00000000001480e3
@property(copy, nonatomic) NSString *sportsTeamName; // @synthesize sportsTeamName=_sportsTeamName;
@property(copy, nonatomic) NSString *sportsLeagueID; // @synthesize sportsLeagueID=_sportsLeagueID;
- (_Bool)isAccountRequired;	// IMP=0x0000000000147c01
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000147b51
- (id)initWithContextData:(id)arg1;	// IMP=0x0000000000147a87

@end

