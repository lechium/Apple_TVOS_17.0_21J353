//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoPoint;

__attribute__((visibility("hidden")))
@interface VCPProtoLine : PBCodable
{
    VCPProtoPoint *_end;	// 8 = 0x8
    VCPProtoPoint *_start;	// 16 = 0x10
}

+ (id)lineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00100000000eda92
- (void).cxx_destruct;	// IMP=0x00000000002dd496
@property(retain, nonatomic) VCPProtoPoint *end; // @synthesize end=_end;
@property(retain, nonatomic) VCPProtoPoint *start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002dd3bd
- (unsigned long long)hash;	// IMP=0x00000000002dd370
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002dd2b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002dd21a
- (void)copyTo:(id)arg1;	// IMP=0x00000000002dd1a9
- (void)writeTo:(id)arg1;	// IMP=0x00000000002dd14a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002dd13d
- (id)dictionaryRepresentation;	// IMP=0x00000000002dceba
- (id)description;	// IMP=0x00000000002dce0b
- (struct CGPoint)endPointValue;	// IMP=0x00000000000edbbb
- (struct CGPoint)startPointValue;	// IMP=0x00000000000edb61

@end

