//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface XDCCancelInstallResponse : PBCodable
{
    int _errorCode;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    struct {
        unsigned int errorCode:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000d6836
- (unsigned long long)hash;	// IMP=0x00100000000d67c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d66de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d661b
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d6598
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d639a
- (id)dictionaryRepresentation;	// IMP=0x00100000000d62b3
- (id)description;	// IMP=0x00100000000d6204

@end

