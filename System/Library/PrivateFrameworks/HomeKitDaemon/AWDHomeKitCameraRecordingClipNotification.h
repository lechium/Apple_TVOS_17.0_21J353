//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraRecordingClipNotification : PBCodable
{
    unsigned long long _duration;	// 8 = 0x8
    unsigned long long _recordingEventTriggers;	// 16 = 0x10
    unsigned long long _sequenceNumber;	// 24 = 0x18
    unsigned long long _timestamp;	// 32 = 0x20
    NSString *_cameraUUID;	// 40 = 0x28
    NSString *_sessionUUID;	// 48 = 0x30
    struct {
        unsigned int duration:1;
        unsigned int recordingEventTriggers:1;
        unsigned int sequenceNumber:1;
        unsigned int timestamp:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000cee9c6
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned long long recordingEventTriggers; // @synthesize recordingEventTriggers=_recordingEventTriggers;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSString *cameraUUID; // @synthesize cameraUUID=_cameraUUID;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000cee855
- (unsigned long long)hash;	// IMP=0x0000000000cee76f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cee607
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cee4ec
- (void)copyTo:(id)arg1;	// IMP=0x0000000000cee409
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cee31c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cedf5c
- (id)dictionaryRepresentation;	// IMP=0x0000000000cedd69
- (id)description;	// IMP=0x0000000000cedcba
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasRecordingEventTriggers;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(readonly, nonatomic) _Bool hasCameraUUID;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

