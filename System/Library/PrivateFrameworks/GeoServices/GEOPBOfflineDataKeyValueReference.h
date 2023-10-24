//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataKeyValueReference : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSData *_serviceKey;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
    unsigned long long _valueCompressedSizeBytes;	// 32 = 0x20
    unsigned long long _valueSizeBytes;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_valueCompressedSizeBytes:1;
        unsigned int has_valueSizeBytes:1;
        unsigned int read_serviceKey:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000001429ad3
- (unsigned long long)hash;	// IMP=0x0000000001429a2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000142990c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000142971b
- (void)writeTo:(id)arg1;	// IMP=0x0000000001429540
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001429533
- (id)jsonRepresentation;	// IMP=0x00000000014292c7
- (id)dictionaryRepresentation;	// IMP=0x0000000001428f63
- (id)description;	// IMP=0x0000000001428eb4
- (id)initWithData:(id)arg1;	// IMP=0x00000000014288f1
- (id)init;	// IMP=0x0000000001428895

@end

