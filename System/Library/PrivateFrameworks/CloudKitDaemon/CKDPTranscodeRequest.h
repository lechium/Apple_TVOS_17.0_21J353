//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKCodeRecordTransport, NSData;

@interface CKDPTranscodeRequest : PBRequest
{
    NSData *_constructedAssetDownloadParameters;	// 8 = 0x8
    CKCodeRecordTransport *_record;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b25c4
@property(retain, nonatomic) NSData *constructedAssetDownloadParameters; // @synthesize constructedAssetDownloadParameters=_constructedAssetDownloadParameters;
@property(retain, nonatomic) CKCodeRecordTransport *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b2501
- (unsigned long long)hash;	// IMP=0x00000000001b24b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b23fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b235e
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b22fb
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b229e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b20d7
- (id)dictionaryRepresentation;	// IMP=0x00000000001b2027
- (id)description;	// IMP=0x00000000001b1f78
@property(readonly, nonatomic) _Bool hasConstructedAssetDownloadParameters;
@property(readonly, nonatomic) _Bool hasRecord;

@end

