//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitMessageTransported : PBCodable
{
    unsigned long long _payloadSize;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _direction;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_messageName;	// 40 = 0x28
    int _messageType;	// 48 = 0x30
    NSString *_transactionID;	// 56 = 0x38
    int _transport;	// 64 = 0x40
    _Bool _isSecure;	// 68 = 0x44
    struct {
        unsigned int payloadSize:1;
        unsigned int timestamp:1;
        unsigned int direction:1;
        unsigned int messageType:1;
        unsigned int transport:1;
        unsigned int isSecure:1;
    } _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000487bf9
@property(retain, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(nonatomic) _Bool isSecure; // @synthesize isSecure=_isSecure;
@property(retain, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long payloadSize; // @synthesize payloadSize=_payloadSize;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000487a21
- (unsigned long long)hash;	// IMP=0x00000000004878e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004876f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048756a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000487433
- (void)writeTo:(id)arg1;	// IMP=0x00000000004872e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000486de1
- (id)dictionaryRepresentation;	// IMP=0x0000000000486ac1
- (id)description;	// IMP=0x0000000000486a12
@property(readonly, nonatomic) _Bool hasMessageName;
- (int)StringAsDirection:(id)arg1;	// IMP=0x0000000000486998
- (id)directionAsString:(int)arg1;	// IMP=0x0000000000486943
@property(nonatomic) _Bool hasDirection;
@property(nonatomic) int direction; // @synthesize direction=_direction;
- (int)StringAsTransport:(id)arg1;	// IMP=0x00000000004867bf
- (id)transportAsString:(int)arg1;	// IMP=0x0000000000486777
@property(nonatomic) _Bool hasTransport;
@property(nonatomic) int transport; // @synthesize transport=_transport;
- (int)StringAsMessageType:(id)arg1;	// IMP=0x0000000000486659
- (id)messageTypeAsString:(int)arg1;	// IMP=0x0000000000486611
@property(nonatomic) _Bool hasMessageType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) _Bool hasIsSecure;
@property(readonly, nonatomic) _Bool hasTransactionID;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasPayloadSize;
@property(nonatomic) _Bool hasTimestamp;

@end

