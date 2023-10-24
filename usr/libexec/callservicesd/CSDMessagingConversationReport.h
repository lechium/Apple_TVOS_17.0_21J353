//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TUConversationReport;

@interface CSDMessagingConversationReport : PBCodable
{
    double _timebase;	// 8 = 0x8
    NSString *_conversationID;	// 16 = 0x10
    struct {
        unsigned int timebase:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00100000000e9f10
@property(nonatomic) double timebase; // @synthesize timebase=_timebase;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000e9e72
- (unsigned long long)hash;	// IMP=0x00100000000e9d4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e9c8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e9bef
- (void)copyTo:(id)arg1;	// IMP=0x00100000000e9b88
- (void)writeTo:(id)arg1;	// IMP=0x00100000000e9b20
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000e9b13
- (id)dictionaryRepresentation;	// IMP=0x00100000000e98a1
- (id)description;	// IMP=0x00100000000e97f2
@property(nonatomic) _Bool hasTimebase;
@property(readonly, nonatomic) _Bool hasConversationID;
@property(readonly, copy, nonatomic) TUConversationReport *tuConversationReport;
- (id)initWithTUConversationReport:(id)arg1;	// IMP=0x001000000004f23c

@end

