//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaDisableCameraResponse : PBCodable
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004fb1e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004fad3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004fa9a
- (void)copyTo:(id)arg1;	// IMP=0x000000000004fa94
- (void)writeTo:(id)arg1;	// IMP=0x000000000004fa8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004f993
- (id)dictionaryRepresentation;	// IMP=0x000000000004f97a
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

