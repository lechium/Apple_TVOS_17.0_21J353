//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface GEOTransitRouteBuilderOutput
{
    _Bool _isWalkingOnlyRoute;	// 8 = 0x8
    NSArray *_rideSelections;	// 16 = 0x10
    NSArray *_sectionOptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000013b06c7
@property(readonly, nonatomic) NSArray *sectionOptions; // @synthesize sectionOptions=_sectionOptions;
@property(readonly, nonatomic) NSArray *rideSelections; // @synthesize rideSelections=_rideSelections;
@property(readonly, nonatomic) _Bool isWalkingOnlyRoute; // @synthesize isWalkingOnlyRoute=_isWalkingOnlyRoute;
- (void)setSectionOptions:(id)arg1;	// IMP=0x00000000013b0681
- (void)setRideSelections:(id)arg1;	// IMP=0x00000000013b066d
- (void)setIsWalkingOnlyRoute:(_Bool)arg1;	// IMP=0x00000000013b065d

@end

