//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingHandle, NSString, TULabeledHandle;

@interface CSDMessagingLabeledHandle : PBCodable
{
    CSDMessagingHandle *_handle;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

+ (id)handleWithTULabeledHandle:(id)arg1;	// IMP=0x001000000006d90e
- (void).cxx_destruct;	// IMP=0x0010000000162aec
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void);	// IMP=0x0010000000162ab3
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000162a29
- (unsigned long long)hash;	// IMP=0x00100000001629dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000162924
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000162886
- (void)copyTo:(id)arg1;	// IMP=0x0010000000162823
- (void)writeTo:(id)arg1;	// IMP=0x00100000001627c6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001627b9
- (id)dictionaryRepresentation;	// IMP=0x0010000000162542
- (id)description;	// IMP=0x0010000000162493
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) TULabeledHandle *tuLabeledHandle;

@end

