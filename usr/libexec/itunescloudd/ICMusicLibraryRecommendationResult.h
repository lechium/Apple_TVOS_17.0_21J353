//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

@interface ICMusicLibraryRecommendationResult : NSObject
{
    NSNumber *_adamID;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSNumber *_score;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002ad99
@property(readonly, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
- (id)initWithAdamID:(id)arg1 date:(id)arg2 score:(id)arg3;	// IMP=0x001000000002acc3

@end

