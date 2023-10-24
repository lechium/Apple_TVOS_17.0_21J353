//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface SharedChannelPublishResponse : PBCodable
{
    unsigned int _retryIntervalSeconds;	// 8 = 0x8
    int _status;	// 12 = 0xc
    CDStruct_00fd22b7 _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int retryIntervalSeconds; // @synthesize retryIntervalSeconds=_retryIntervalSeconds;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003b58b
- (unsigned long long)hash;	// IMP=0x000000000003b546
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b493
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b416
- (void)copyTo:(id)arg1;	// IMP=0x000000000003b3bc
- (void)writeTo:(id)arg1;	// IMP=0x000000000003b349
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003b33c
- (id)dictionaryRepresentation;	// IMP=0x000000000003afea
- (id)description;	// IMP=0x000000000003af3b
@property(nonatomic) _Bool hasRetryIntervalSeconds;
- (int)StringAsStatus:(id)arg1;	// IMP=0x000000000003adbb
- (id)statusAsString:(int)arg1;	// IMP=0x000000000003ad72
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

