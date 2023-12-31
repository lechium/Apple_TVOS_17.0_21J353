//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface AMSXDProtoMessage : PBCodable
{
    NSString *_logKey;	// 8 = 0x8
    NSData *_messageData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000049063
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000048fb6
- (unsigned long long)hash;	// IMP=0x0010000000048f69
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000048eb1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000048e13
- (void)copyTo:(id)arg1;	// IMP=0x0010000000048db5
- (void)writeTo:(id)arg1;	// IMP=0x0010000000048d4e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000048d41
- (id)dictionaryRepresentation;	// IMP=0x0010000000048b54
- (id)description;	// IMP=0x0010000000048aa5
@property(readonly, nonatomic) _Bool hasLogKey;

@end

