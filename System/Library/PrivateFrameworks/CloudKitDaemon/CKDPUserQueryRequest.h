//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPUserAlias, NSMutableArray, NSString;

@interface CKDPUserQueryRequest : PBRequest
{
    CKDPUserAlias *_alias;	// 8 = 0x8
    NSString *_oBSOLETEPcsServiceType;	// 16 = 0x10
    NSMutableArray *_sortedBys;	// 24 = 0x18
    _Bool _publicKeyRequested;	// 32 = 0x20
    struct {
        unsigned int publicKeyRequested:1;
    } _has;	// 36 = 0x24
}

+ (Class)sortedByType;	// IMP=0x00100000001449ee
+ (id)options;	// IMP=0x00100000001448c8
- (void).cxx_destruct;	// IMP=0x0000000000145a31
@property(retain, nonatomic) NSString *oBSOLETEPcsServiceType; // @synthesize oBSOLETEPcsServiceType=_oBSOLETEPcsServiceType;
@property(retain, nonatomic) NSMutableArray *sortedBys; // @synthesize sortedBys=_sortedBys;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001457f1
- (unsigned long long)hash;	// IMP=0x0000000000145757
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145639
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001453fb
- (void)copyTo:(id)arg1;	// IMP=0x00000000001452d4
- (Class)responseClass;	// IMP=0x00000000001452c3
- (unsigned int)requestTypeCode;	// IMP=0x00000000001452b8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000145115
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000145108
- (id)dictionaryRepresentation;	// IMP=0x0000000000144b2d
- (id)description;	// IMP=0x0000000000144a7e
@property(nonatomic) _Bool hasPublicKeyRequested;
@property(nonatomic) _Bool publicKeyRequested; // @synthesize publicKeyRequested=_publicKeyRequested;
@property(readonly, nonatomic) _Bool hasOBSOLETEPcsServiceType;
- (id)sortedByAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001449d1
- (unsigned long long)sortedBysCount;	// IMP=0x00000000001449b4
- (void)addSortedBy:(id)arg1;	// IMP=0x000000000014494a
- (void)clearSortedBys;	// IMP=0x000000000014492d
@property(readonly, nonatomic) _Bool hasAlias;

@end

