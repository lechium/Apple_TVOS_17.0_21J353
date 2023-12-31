//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions : PBCodable
{
    unsigned long long _contentRequestAuthorizeGetOptions;	// 8 = 0x8
    NSMutableArray *_contentRequestHeaders;	// 16 = 0x10
    struct {
        unsigned int contentRequestAuthorizeGetOptions:1;
    } _has;	// 24 = 0x18
}

+ (Class)contentRequestHeadersType;	// IMP=0x001000000029f472
- (void).cxx_destruct;	// IMP=0x00000000002a0148
@property(nonatomic) unsigned long long contentRequestAuthorizeGetOptions; // @synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000029ff9b
- (unsigned long long)hash;	// IMP=0x000000000029ff4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029fe90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029fc9f
- (void)copyTo:(id)arg1;	// IMP=0x000000000029fbbd
- (void)writeTo:(id)arg1;	// IMP=0x000000000029fa55
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029fa48
- (id)dictionaryRepresentation;	// IMP=0x000000000029f578
- (id)description;	// IMP=0x000000000029f4c9
@property(nonatomic) _Bool hasContentRequestAuthorizeGetOptions;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029f455
- (unsigned long long)contentRequestHeadersCount;	// IMP=0x000000000029f438
- (void)addContentRequestHeaders:(id)arg1;	// IMP=0x000000000029f3ce
- (void)clearContentRequestHeaders;	// IMP=0x000000000029f3b1

@end

