//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable
{
    NSMutableArray *_cryptoSessions;	// 8 = 0x8
}

+ (Class)cryptoSessionsType;	// IMP=0x0010000000123018
- (void).cxx_destruct;	// IMP=0x0000000000123a8b
@property(retain, nonatomic) NSMutableArray *cryptoSessions; // @synthesize cryptoSessions=_cryptoSessions;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012392d
- (unsigned long long)hash;	// IMP=0x0000000000123910
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000123880
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001236bc
- (void)copyTo:(id)arg1;	// IMP=0x00000000001235f7
- (void)writeTo:(id)arg1;	// IMP=0x00000000001234c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001234b4
- (id)dictionaryRepresentation;	// IMP=0x00000000001230d8
- (id)description;	// IMP=0x0000000000123029
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000122ffb
- (unsigned long long)cryptoSessionsCount;	// IMP=0x0000000000122fde
- (void)addCryptoSessions:(id)arg1;	// IMP=0x0000000000122f74
- (void)clearCryptoSessions;	// IMP=0x0000000000122f57

@end

