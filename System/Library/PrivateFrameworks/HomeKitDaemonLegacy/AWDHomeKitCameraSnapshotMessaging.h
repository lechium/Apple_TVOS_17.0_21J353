//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraSnapshotMessaging : PBCodable
{
    unsigned int _receivedSnapshotRequest;	// 8 = 0x8
    unsigned int _sentSnapshotRequest;	// 12 = 0xc
    unsigned int _sentSnapshotResponse;	// 16 = 0x10
    struct {
        unsigned int receivedSnapshotRequest:1;
        unsigned int sentSnapshotRequest:1;
        unsigned int sentSnapshotResponse:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int sentSnapshotResponse; // @synthesize sentSnapshotResponse=_sentSnapshotResponse;
@property(nonatomic) unsigned int sentSnapshotRequest; // @synthesize sentSnapshotRequest=_sentSnapshotRequest;
@property(nonatomic) unsigned int receivedSnapshotRequest; // @synthesize receivedSnapshotRequest=_receivedSnapshotRequest;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002218dd
- (unsigned long long)hash;	// IMP=0x0000000000221879
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002217a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000221711
- (void)copyTo:(id)arg1;	// IMP=0x000000000022169e
- (void)writeTo:(id)arg1;	// IMP=0x000000000022160b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002215fe
- (id)dictionaryRepresentation;	// IMP=0x00000000002214af
- (id)description;	// IMP=0x0000000000221400
@property(nonatomic) _Bool hasSentSnapshotResponse;
@property(nonatomic) _Bool hasSentSnapshotRequest;
@property(nonatomic) _Bool hasReceivedSnapshotRequest;

@end

