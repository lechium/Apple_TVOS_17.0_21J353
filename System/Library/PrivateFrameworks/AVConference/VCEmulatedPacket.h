//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCEmulatedPacket : NSObject
{
    unsigned int _packetID;	// 8 = 0x8
    unsigned int _size;	// 12 = 0xc
    unsigned int _sequenceNumber;	// 16 = 0x10
    double _arrivalTime;	// 24 = 0x18
    double _networkServiceTime;	// 32 = 0x20
    double _departureTime;	// 40 = 0x28
    _Bool _isLost;	// 48 = 0x30
    _Bool _isDroppedByAQM;	// 49 = 0x31
    char *_datagramPtr;	// 56 = 0x38
    unsigned char _datagram[1500];	// 64 = 0x40
    struct tagIDSDatagramStruct _metadata;	// 1568 = 0x620
    long long _type;	// 3208 = 0xc88
}

@property struct tagIDSDatagramStruct metadata; // @synthesize metadata=_metadata;
@property(nonatomic) char *datagram; // @synthesize datagram=_datagramPtr;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isDroppedByAQM; // @synthesize isDroppedByAQM=_isDroppedByAQM;
@property(nonatomic) _Bool isLost; // @synthesize isLost=_isLost;
@property(nonatomic) double departureTime; // @synthesize departureTime=_departureTime;
@property(nonatomic) double networkServiceTime; // @synthesize networkServiceTime=_networkServiceTime;
@property(nonatomic) double arrivalTime; // @synthesize arrivalTime=_arrivalTime;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned int packetID; // @synthesize packetID=_packetID;
- (id)initWithPacketID:(unsigned int)arg1 datagram:(char *)arg2 datagramSize:(unsigned int)arg3;	// IMP=0x00000000000fda17
- (id)initWithPacketID:(unsigned int)arg1;	// IMP=0x00000000000fd9b9

@end

