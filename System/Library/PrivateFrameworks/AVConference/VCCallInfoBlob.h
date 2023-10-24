//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCallInfoBlob : PBCodable
{
    unsigned int _callID;	// 8 = 0x8
    unsigned int _clientVersion;	// 12 = 0xc
    NSString *_deviceType;	// 16 = 0x10
    NSString *_frameworkVersion;	// 24 = 0x18
    NSString *_osVersion;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *frameworkVersion; // @synthesize frameworkVersion=_frameworkVersion;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) unsigned int callID; // @synthesize callID=_callID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000450bd4
- (unsigned long long)hash;	// IMP=0x0000000000450b3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000450a69
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000045097e
- (void)copyTo:(id)arg1;	// IMP=0x00000000004508f9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000450871
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000450864
- (id)dictionaryRepresentation;	// IMP=0x000000000045045f
- (id)description;	// IMP=0x00000000004503c5
- (void)dealloc;	// IMP=0x000000000045033c
- (id)stringForCheckpoint;	// IMP=0x000000000043959d

@end
