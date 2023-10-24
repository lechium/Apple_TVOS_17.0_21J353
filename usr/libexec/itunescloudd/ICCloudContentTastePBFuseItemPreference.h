//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ICCloudContentTastePBFuseItemPreference : PBCodable
{
    long long _actionTimestampMillis;	// 8 = 0x8
    long long _adamId;	// 16 = 0x10
    long long _createdOffsetMillis;	// 24 = 0x18
    NSString *_externalId;	// 32 = 0x20
    int _preference;	// 40 = 0x28
    int _preferenceType;	// 44 = 0x2c
    struct {
        unsigned int actionTimestampMillis:1;
        unsigned int adamId:1;
        unsigned int createdOffsetMillis:1;
        unsigned int preferenceType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000077824
- (unsigned long long)hash;	// IMP=0x0010000000077755
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007760d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007750f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000077428
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007741b
- (id)dictionaryRepresentation;	// IMP=0x0010000000077215
- (id)description;	// IMP=0x0010000000077166

@end

