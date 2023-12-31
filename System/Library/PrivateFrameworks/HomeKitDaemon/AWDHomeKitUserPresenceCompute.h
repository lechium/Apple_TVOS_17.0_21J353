//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitUserPresenceCompute : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _compute;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int compute:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008027b
- (unsigned long long)hash;	// IMP=0x0000000000080235
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080181
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080102
- (void)copyTo:(id)arg1;	// IMP=0x00000000000800a6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000080033
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007fdfa
- (id)dictionaryRepresentation;	// IMP=0x000000000007fce6
- (id)description;	// IMP=0x000000000007fc37
- (int)StringAsCompute:(id)arg1;	// IMP=0x000000000007fb65
- (id)computeAsString:(int)arg1;	// IMP=0x000000000007fb1d
@property(nonatomic) _Bool hasCompute;
@property(nonatomic) int compute; // @synthesize compute=_compute;
@property(nonatomic) _Bool hasTimestamp;

@end

