//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _ADPBDeviceExecuteOnRemoteResponse : PBCodable
{
    NSData *_content;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009bd66
// Error: Property attributes should begin with the type ('T') attribute, property name: content
// Property attributes: (null)

- (void)mergeFrom:(id)arg1;	// IMP=0x001000000009bd1d
- (unsigned long long)hash;	// IMP=0x001000000009bd00
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009bc70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009bbf8
- (void)copyTo:(id)arg1;	// IMP=0x001000000009bbce
- (void)writeTo:(id)arg1;	// IMP=0x001000000009bbaa
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000009ba61
- (id)dictionaryRepresentation;	// IMP=0x001000000009ba05
- (id)description;	// IMP=0x001000000009b956
@property(readonly, nonatomic) _Bool hasContent;

@end
