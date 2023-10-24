//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPProtectionInfo, CKDPShareIdentifier, NSString;

@interface CKDPShareDeclineRequest : PBRequest
{
    NSString *_participantId;	// 8 = 0x8
    CKDPProtectionInfo *_protectionInfo;	// 16 = 0x10
    CKDPShareIdentifier *_shareId;	// 24 = 0x18
}

+ (id)options;	// IMP=0x0010000000144000
- (void).cxx_destruct;	// IMP=0x0000000000144886
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000144768
- (unsigned long long)hash;	// IMP=0x00000000001446fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014461b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000144557
- (void)copyTo:(id)arg1;	// IMP=0x00000000001444d4
- (void)writeTo:(id)arg1;	// IMP=0x000000000014445a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014444d
- (id)dictionaryRepresentation;	// IMP=0x000000000014413e
- (id)description;	// IMP=0x000000000014408f
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasParticipantId;
@property(readonly, nonatomic) _Bool hasShareId;

@end

