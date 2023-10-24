//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitEventTriggerUserConfirmationSend : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _resultErrorCode;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int resultErrorCode:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a742d1
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a74203
- (unsigned long long)hash;	// IMP=0x0000000000a7418c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a740a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a73fec
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a73f64
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a73ed6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a73c59
- (id)dictionaryRepresentation;	// IMP=0x0000000000a73b3b
- (id)description;	// IMP=0x0000000000a73a8c
@property(nonatomic) _Bool hasResultErrorCode;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;

@end
