//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SDUnlockDisable : PBCodable
{
    NSString *_pairingID;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000009526d
@property(retain, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000951d5
- (unsigned long long)hash;	// IMP=0x0010000000095189
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000950ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009503a
- (void)copyTo:(id)arg1;	// IMP=0x0010000000094fd7
- (void)writeTo:(id)arg1;	// IMP=0x0010000000094f71
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000094f64
- (id)dictionaryRepresentation;	// IMP=0x0010000000094cc6
- (id)description;	// IMP=0x0010000000094c17
@property(readonly, nonatomic) _Bool hasPairingID;
@property(nonatomic) _Bool hasVersion;

@end

