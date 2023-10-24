//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitBackingStoreCKOperationZoneCompletionEvent : PBCodable
{
    long long _errorCode;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _containerType;	// 24 = 0x18
    NSString *_errorDomain;	// 32 = 0x20
    int _zoneType;	// 40 = 0x28
    _Bool _didSucceed;	// 44 = 0x2c
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int containerType:1;
        unsigned int zoneType:1;
        unsigned int didSucceed:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000007a053b
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000007a0411
- (unsigned long long)hash;	// IMP=0x00000000007a0355
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007a01f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007a00e8
- (void)copyTo:(id)arg1;	// IMP=0x00000000007a0015
- (void)writeTo:(id)arg1;	// IMP=0x000000000079ff24
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000079fae6
- (id)dictionaryRepresentation;	// IMP=0x000000000079f88d
- (id)description;	// IMP=0x000000000079f7de
@property(readonly, nonatomic) _Bool hasErrorDomain;
- (int)StringAsZoneType:(id)arg1;	// IMP=0x000000000079f6d7
- (id)zoneTypeAsString:(int)arg1;	// IMP=0x000000000079f68f
@property(nonatomic) _Bool hasZoneType;
@property(nonatomic) int zoneType; // @synthesize zoneType=_zoneType;
- (int)StringAsContainerType:(id)arg1;	// IMP=0x000000000079f571
- (id)containerTypeAsString:(int)arg1;	// IMP=0x000000000079f529
@property(nonatomic) _Bool hasContainerType;
@property(nonatomic) int containerType; // @synthesize containerType=_containerType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDidSucceed;
@property(nonatomic) _Bool hasTimestamp;

@end

