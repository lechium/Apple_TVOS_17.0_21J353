//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitDataModelMigration : PBCodable
{
    unsigned long long _duration;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    struct {
        unsigned int duration:1;
        unsigned int timestamp:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000cc39eb
- (unsigned long long)hash;	// IMP=0x0000000000cc39a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc38f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc3870
- (void)copyTo:(id)arg1;	// IMP=0x0000000000cc3812
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc379f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc355d
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc3464
- (id)description;	// IMP=0x0000000000cc33b5
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

