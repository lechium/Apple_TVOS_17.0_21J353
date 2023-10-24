//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ChannelIdentity;

__attribute__((visibility("hidden")))
@interface SharedChannelCreateResponse : PBCodable
{
    ChannelIdentity *_channelIdentity;	// 8 = 0x8
    unsigned int _retryIntervalSeconds;	// 16 = 0x10
    int _status;	// 20 = 0x14
    CDStruct_00fd22b7 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000043a07
@property(nonatomic) unsigned int retryIntervalSeconds; // @synthesize retryIntervalSeconds=_retryIntervalSeconds;
@property(retain, nonatomic) ChannelIdentity *channelIdentity; // @synthesize channelIdentity=_channelIdentity;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000043935
- (unsigned long long)hash;	// IMP=0x00000000000438bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000437d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004371f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000043698
- (void)writeTo:(id)arg1;	// IMP=0x000000000004360a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000435fd
- (id)dictionaryRepresentation;	// IMP=0x00000000000431dc
- (id)description;	// IMP=0x000000000004312d
@property(nonatomic) _Bool hasRetryIntervalSeconds;
@property(readonly, nonatomic) _Bool hasChannelIdentity;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000042f98
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000042f4f
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end
