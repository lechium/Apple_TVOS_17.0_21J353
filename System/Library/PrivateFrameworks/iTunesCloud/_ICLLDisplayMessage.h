//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLDisplayMessage : PBCodable
{
    NSString *_detailMessage;	// 8 = 0x8
    NSString *_titleMessage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013e5b
- (unsigned long long)hash;	// IMP=0x0000000000013e0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013d56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013cb8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000013c5b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000013c4e
- (id)dictionaryRepresentation;	// IMP=0x0000000000013bcb
- (id)description;	// IMP=0x0000000000013b1c

@end

