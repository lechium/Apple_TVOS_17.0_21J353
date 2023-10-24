//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitEventTriggerUserConfirmationReceiverSession : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned long long _userResponseDelay;	// 16 = 0x10
    int _resultErrorCode;	// 24 = 0x18
    NSString *_sessionID;	// 32 = 0x20
    struct {
        unsigned int timestamp:1;
        unsigned int userResponseDelay:1;
        unsigned int resultErrorCode:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000be835e
@property(nonatomic) unsigned long long userResponseDelay; // @synthesize userResponseDelay=_userResponseDelay;
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000be8262
- (unsigned long long)hash;	// IMP=0x0000000000be81d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000be80c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000be7fec
- (void)copyTo:(id)arg1;	// IMP=0x0000000000be7f47
- (void)writeTo:(id)arg1;	// IMP=0x0000000000be7e98
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000be7b7d
- (id)dictionaryRepresentation;	// IMP=0x0000000000be7a08
- (id)description;	// IMP=0x0000000000be7959
@property(nonatomic) _Bool hasUserResponseDelay;
@property(nonatomic) _Bool hasResultErrorCode;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;

@end

