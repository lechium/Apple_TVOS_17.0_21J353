//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CPLRemappedRecord : PBCodable
{
    NSString *_createdByUserID;	// 8 = 0x8
    NSString *_recordID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c285d
- (unsigned long long)hash;	// IMP=0x00100000000c27de
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c2726
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c2688
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c261a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c260d
- (id)dictionaryRepresentation;	// IMP=0x00100000000c2420
- (id)description;	// IMP=0x00100000000c2371

@end

