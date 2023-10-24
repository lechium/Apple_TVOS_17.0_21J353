//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class TASKOutput;

@interface TASKNotifyRequest : PBRequest
{
    unsigned int _counter;	// 8 = 0x8
    TASKOutput *_output;	// 16 = 0x10
    int _taskId;	// 24 = 0x18
    _Bool _isLast;	// 28 = 0x1c
    struct {
        unsigned int counter:1;
        unsigned int isLast:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006f96c
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
@property(retain, nonatomic) TASKOutput *output; // @synthesize output=_output;
@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006f863
- (unsigned long long)hash;	// IMP=0x001000000006f7dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006f6e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006f61e
- (void)copyTo:(id)arg1;	// IMP=0x001000000006f595
- (void)writeTo:(id)arg1;	// IMP=0x001000000006f4f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006f4e4
- (id)dictionaryRepresentation;	// IMP=0x001000000006f00d
- (id)description;	// IMP=0x001000000006ef5e
@property(nonatomic) _Bool hasIsLast;
@property(nonatomic) _Bool hasCounter;

@end
