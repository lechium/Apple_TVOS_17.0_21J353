//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardURL : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000cba867
- (unsigned long long)hash;	// IMP=0x0000000000cba84a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cba7ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cba72f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cba6d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cba6c7
- (id)jsonRepresentation;	// IMP=0x0000000000cba5b7
- (id)dictionaryRepresentation;	// IMP=0x0000000000cba426
- (id)description;	// IMP=0x0000000000cba377

@end

