//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2MicrophoneSettingsU1 : PBCodable
{
    unsigned int _payloads;	// 8 = 0x8
    unsigned int _rtpSSRC;	// 12 = 0xc
    struct {
        unsigned int payloads:1;
        unsigned int rtpSSRC:1;
    } _has;	// 16 = 0x10
}

+ (int)payloadFromFlag:(int)arg1;	// IMP=0x00100000003b9329
+ (int)flagFromPayload:(int)arg1;	// IMP=0x00100000003b92e0
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003a538b
- (unsigned long long)hash;	// IMP=0x00000000003a5347
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a52c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a5249
- (void)copyTo:(id)arg1;	// IMP=0x00000000003a520a
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a519e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a5191
- (id)dictionaryRepresentation;	// IMP=0x00000000003a4e8e
- (id)description;	// IMP=0x00000000003a4df4
@property(nonatomic) _Bool hasPayloads;
@property(nonatomic) unsigned int payloads; // @synthesize payloads=_payloads;
@property(nonatomic) _Bool hasRtpSSRC;
- (unsigned int)payloadBitmapWithAudioPayloads:(id)arg1;	// IMP=0x00000000003b9390
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x00000000003b9020
@property(readonly, nonatomic) NSSet *audioPayloads;
- (id)initWithSSRC:(unsigned int)arg1 audioPayloads:(id)arg2;	// IMP=0x00000000003b8e00

@end

