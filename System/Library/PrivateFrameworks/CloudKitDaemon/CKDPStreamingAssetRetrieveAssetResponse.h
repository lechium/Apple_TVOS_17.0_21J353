//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable
{
    long long _downloadURLExpirationTimeSeconds;	// 8 = 0x8
    long long _size;	// 16 = 0x10
    NSString *_downloadURL;	// 24 = 0x18
    struct {
        unsigned int downloadURLExpirationTimeSeconds:1;
        unsigned int size:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000018fc91
@property(nonatomic) long long downloadURLExpirationTimeSeconds; // @synthesize downloadURLExpirationTimeSeconds=_downloadURLExpirationTimeSeconds;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(nonatomic) long long size; // @synthesize size=_size;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018fbc1
- (unsigned long long)hash;	// IMP=0x000000000018fb4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018fa62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018f9aa
- (void)copyTo:(id)arg1;	// IMP=0x000000000018f921
- (void)writeTo:(id)arg1;	// IMP=0x000000000018f893
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018f886
- (id)dictionaryRepresentation;	// IMP=0x000000000018f4f2
- (id)description;	// IMP=0x000000000018f443
@property(nonatomic) _Bool hasDownloadURLExpirationTimeSeconds;
@property(readonly, nonatomic) _Bool hasDownloadURL;
@property(nonatomic) _Bool hasSize;

@end
