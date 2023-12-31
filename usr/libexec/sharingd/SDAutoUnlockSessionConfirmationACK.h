//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDAutoUnlockSessionConfirmationACK : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _success;	// 12 = 0xc
    struct {
        unsigned int version:1;
        unsigned int success:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008d06f
- (unsigned long long)hash;	// IMP=0x001000000008d02a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008cf67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008cee8
- (void)copyTo:(id)arg1;	// IMP=0x001000000008ce8c
- (void)writeTo:(id)arg1;	// IMP=0x001000000008ce18
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008ce0b
- (id)dictionaryRepresentation;	// IMP=0x001000000008cad4
- (id)description;	// IMP=0x001000000008ca25
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasVersion;

@end

