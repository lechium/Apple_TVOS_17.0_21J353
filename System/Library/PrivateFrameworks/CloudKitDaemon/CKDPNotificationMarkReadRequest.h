//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKDPNotificationMarkReadRequest : PBRequest
{
    NSString *_uuid;	// 8 = 0x8
}

+ (id)options;	// IMP=0x0010000000332ce2
- (void).cxx_destruct;	// IMP=0x0000000000333180
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000333137
- (unsigned long long)hash;	// IMP=0x000000000033311a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033308a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000333012
- (void)copyTo:(id)arg1;	// IMP=0x0000000000332fe8
- (Class)responseClass;	// IMP=0x0000000000332fd7
- (unsigned int)requestTypeCode;	// IMP=0x0000000000332fcc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000332fa8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000332f9b
- (id)dictionaryRepresentation;	// IMP=0x0000000000332df6
- (id)description;	// IMP=0x0000000000332d47
@property(readonly, nonatomic) _Bool hasUuid;

@end

