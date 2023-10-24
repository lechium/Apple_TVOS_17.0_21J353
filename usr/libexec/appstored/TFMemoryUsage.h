//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TFMemoryUsage : PBCodable
{
    unsigned long long _availableBytes;	// 8 = 0x8
    unsigned long long _totalBytes;	// 16 = 0x10
    struct {
        unsigned int availableBytes:1;
        unsigned int totalBytes:1;
    } _has;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x00200000000f5908
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f5853
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f57d2
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f575f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f5752
- (id)dictionaryRepresentation;	// IMP=0x00100000000f5417
- (id);	// IMP=0x00100000000f5368

@end
