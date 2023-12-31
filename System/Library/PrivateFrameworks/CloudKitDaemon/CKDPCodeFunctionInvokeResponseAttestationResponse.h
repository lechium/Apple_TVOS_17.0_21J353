//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable
{
    NSMutableArray *_attestations;	// 8 = 0x8
}

+ (Class)attestationsType;	// IMP=0x0010000000217836
- (void).cxx_destruct;	// IMP=0x00000000002182a9
@property(retain, nonatomic) NSMutableArray *attestations; // @synthesize attestations=_attestations;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021814b
- (unsigned long long)hash;	// IMP=0x000000000021812e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021809e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000217eda
- (void)copyTo:(id)arg1;	// IMP=0x0000000000217e15
- (void)writeTo:(id)arg1;	// IMP=0x0000000000217cdf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000217cd2
- (id)dictionaryRepresentation;	// IMP=0x00000000002178f6
- (id)description;	// IMP=0x0000000000217847
- (id)attestationsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000217819
- (unsigned long long)attestationsCount;	// IMP=0x00000000002177fc
- (void)addAttestations:(id)arg1;	// IMP=0x0000000000217792
- (void)clearAttestations;	// IMP=0x0000000000217775

@end

