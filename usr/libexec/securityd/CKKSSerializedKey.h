//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface CKKSSerializedKey : PBCodable
{
    NSData *_key;	// 8 = 0x8
    NSString *_keyclass;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000027c91
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *keyclass; // @synthesize keyclass=_keyclass;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000027b5a
- (unsigned long long)hash;	// IMP=0x0010000000027ad6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000279ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000278e0
- (void)copyTo:(id)arg1;	// IMP=0x001000000002783f
- (void)writeTo:(id)arg1;	// IMP=0x00100000000277b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000275ef
- (id)dictionaryRepresentation;	// IMP=0x001000000002751e
- (id)description;	// IMP=0x001000000002746f

@end

