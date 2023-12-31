//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRating : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_appleRatingCategorys;	// 16 = 0x10
    double _maxScore;	// 24 = 0x18
    double _score;	// 32 = 0x20
    int _numRatingsUsedForScore;	// 40 = 0x28
    int _ratingType;	// 44 = 0x2c
    struct {
        unsigned int has_maxScore:1;
        unsigned int has_score:1;
        unsigned int has_numRatingsUsedForScore:1;
        unsigned int has_ratingType:1;
    } _flags;	// 48 = 0x30
}

+ (id)ratingListForPlaceData:(id)arg1 type:(int)arg2;	// IMP=0x0010000000a36df2
+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;	// IMP=0x0010000000a36ceb
- (void).cxx_destruct;	// IMP=0x0000000000cd015e
- (unsigned long long)hash;	// IMP=0x0000000000ccff0a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ccfdce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ccfb93
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ccf9aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ccf99b
- (id)jsonRepresentation;	// IMP=0x0000000000ccf36f
- (id)dictionaryRepresentation;	// IMP=0x0000000000ccedff
- (id)description;	// IMP=0x0000000000cced50
- (id)displayTitle;	// IMP=0x0000000000a36f62

@end

