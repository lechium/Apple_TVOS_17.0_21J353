//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface AMSXDProtoMessage : PBCodable
{
    NSString *_logKey;	// 8 = 0x8
    NSData *_messageData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003ce0fa
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003ce04d
- (unsigned long long)hash;	// IMP=0x00000000003ce000
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003cdf48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003cdeaa
- (void)copyTo:(id)arg1;	// IMP=0x00000000003cde4c
- (void)writeTo:(id)arg1;	// IMP=0x00000000003cddd0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003cdc66
- (id)dictionaryRepresentation;	// IMP=0x00000000003cdbe3
- (id)description;	// IMP=0x00000000003cdb34
@property(readonly, nonatomic) _Bool hasLogKey;

@end
