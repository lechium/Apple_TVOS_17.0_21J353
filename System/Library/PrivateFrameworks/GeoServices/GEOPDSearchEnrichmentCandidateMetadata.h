//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchEnrichmentCandidateMetadata : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_impressionId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e2353c
- (unsigned long long)hash;	// IMP=0x0000000000e2351f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e2348f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e23404
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e233a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e231c7
- (id)jsonRepresentation;	// IMP=0x0000000000e230b7
- (id)dictionaryRepresentation;	// IMP=0x0000000000e22f18
- (id)description;	// IMP=0x0000000000e22e69

@end

