//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDRigMetrics : PBCodable
{
    CDStruct_9f2792e4 _occlusionScores;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x000000000113e575
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000113e50f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000113e4af
- (void)writeTo:(id)arg1;	// IMP=0x000000000113e464
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000113e1b0
- (id)jsonRepresentation;	// IMP=0x000000000113e1a1
- (id)dictionaryRepresentation;	// IMP=0x000000000113e0f1
- (id)description;	// IMP=0x000000000113e042
- (void)dealloc;	// IMP=0x000000000113e002

@end

