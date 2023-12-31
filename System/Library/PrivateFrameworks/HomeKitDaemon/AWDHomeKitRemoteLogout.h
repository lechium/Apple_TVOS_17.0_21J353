//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitRemoteLogout : PBCodable
{
    unsigned long long _delay;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _requester;	// 24 = 0x18
    int _resultErrorCode;	// 28 = 0x1c
    struct {
        unsigned int delay:1;
        unsigned int timestamp:1;
        unsigned int requester:1;
        unsigned int resultErrorCode:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) unsigned long long delay; // @synthesize delay=_delay;
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006ab621
- (unsigned long long)hash;	// IMP=0x00000000006ab59d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006ab4a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006ab3f3
- (void)copyTo:(id)arg1;	// IMP=0x00000000006ab363
- (void)writeTo:(id)arg1;	// IMP=0x00000000006ab2b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006aaf3e
- (id)dictionaryRepresentation;	// IMP=0x00000000006aad7a
- (id)description;	// IMP=0x00000000006aaccb
- (int)StringAsRequester:(id)arg1;	// IMP=0x00000000006aac11
- (id)requesterAsString:(int)arg1;	// IMP=0x00000000006aabc6
@property(nonatomic) _Bool hasRequester;
@property(nonatomic) int requester; // @synthesize requester=_requester;
@property(nonatomic) _Bool hasDelay;
@property(nonatomic) _Bool hasResultErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

