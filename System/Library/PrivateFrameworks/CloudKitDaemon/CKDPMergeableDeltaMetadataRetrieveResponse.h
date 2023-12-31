//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPMergeableDeltaMetadataRetrieveResponse : PBCodable
{
    NSData *_continuation;	// 8 = 0x8
    NSMutableArray *_metadatas;	// 16 = 0x10
}

+ (Class)metadataType;	// IMP=0x0010000000182493
- (void).cxx_destruct;	// IMP=0x00000000001830c1
@property(retain, nonatomic) NSData *continuation; // @synthesize continuation=_continuation;
@property(retain, nonatomic) NSMutableArray *metadatas; // @synthesize metadatas=_metadatas;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000182efd
- (unsigned long long)hash;	// IMP=0x0000000000182eb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000182df8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000182bec
- (void)copyTo:(id)arg1;	// IMP=0x0000000000182b04
- (void)writeTo:(id)arg1;	// IMP=0x00000000001829a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000182997
- (id)dictionaryRepresentation;	// IMP=0x0000000000182568
- (id)description;	// IMP=0x00000000001824b9
@property(readonly, nonatomic) _Bool hasContinuation;
- (id)metadataAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000182476
- (unsigned long long)metadatasCount;	// IMP=0x0000000000182459
- (void)addMetadata:(id)arg1;	// IMP=0x00000000001823ef
- (void)clearMetadatas;	// IMP=0x00000000001823d2

@end

