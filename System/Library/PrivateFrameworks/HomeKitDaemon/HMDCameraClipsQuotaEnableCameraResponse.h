//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaEnableCameraResponse : PBCodable
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000542e79
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000542e2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000542df5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000542def
- (void)writeTo:(id)arg1;	// IMP=0x0000000000542de9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000542cee
- (id)dictionaryRepresentation;	// IMP=0x0000000000542cd5
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

