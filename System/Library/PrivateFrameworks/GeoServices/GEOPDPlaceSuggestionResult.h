//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceSuggestionResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_placeIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000601f93
- (unsigned long long)hash;	// IMP=0x0000000000601f76
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000601ee6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000601d29
- (void)writeTo:(id)arg1;	// IMP=0x0000000000601bca
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000601bbb
- (id)jsonRepresentation;	// IMP=0x0000000000601aab
- (id)dictionaryRepresentation;	// IMP=0x000000000060170f
- (id)description;	// IMP=0x0000000000601660

@end
