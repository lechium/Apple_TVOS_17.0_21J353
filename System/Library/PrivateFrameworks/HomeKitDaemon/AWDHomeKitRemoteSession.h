//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitRemoteSession : PBCodable
{
    unsigned long long _duration;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    unsigned int _closeReason;	// 24 = 0x18
    unsigned int _deviceType;	// 28 = 0x1c
    int _errorCode;	// 32 = 0x20
    unsigned int _role;	// 36 = 0x24
    struct {
        unsigned int duration:1;
        unsigned int timestamp:1;
        unsigned int closeReason:1;
        unsigned int deviceType:1;
        unsigned int errorCode:1;
        unsigned int role:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int closeReason; // @synthesize closeReason=_closeReason;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int role; // @synthesize role=_role;
@property(nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000937a
- (unsigned long long)hash;	// IMP=0x00000000000092bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009172
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000908d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000008fcb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000008ed8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000008a58
- (id)dictionaryRepresentation;	// IMP=0x0000000000008807
- (id)description;	// IMP=0x0000000000008758
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasCloseReason;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasRole;
@property(nonatomic) _Bool hasDeviceType;
@property(nonatomic) _Bool hasTimestamp;

@end

