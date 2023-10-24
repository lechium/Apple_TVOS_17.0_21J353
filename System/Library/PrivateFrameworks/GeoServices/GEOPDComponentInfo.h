//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDComponentFilter, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDComponentFilter *_filter;	// 16 = 0x10
    unsigned int _count;	// 24 = 0x18
    unsigned int _startIndex;	// 28 = 0x1c
    int _type;	// 32 = 0x20
    int _urgency;	// 36 = 0x24
    _Bool _includeSource;	// 40 = 0x28
    struct {
        unsigned int has_count:1;
        unsigned int has_startIndex:1;
        unsigned int has_type:1;
        unsigned int has_urgency:1;
        unsigned int has_includeSource:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000bccbaa
- (unsigned long long)hash;	// IMP=0x0000000000bcca7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bcc90f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bcc7f0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bcc6e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bcc6d4
- (id)jsonRepresentation;	// IMP=0x0000000000bcabdc
- (id)dictionaryRepresentation;	// IMP=0x0000000000bca230
- (id)description;	// IMP=0x0000000000bca181
- (id)initWithType:(int)arg1 count:(unsigned int)arg2;	// IMP=0x0000000001384bdd

@end

