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

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000049513f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004950f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004950bb
- (void)copyTo:(id)arg1;	// IMP=0x00000000004950b5
- (void)writeTo:(id)arg1;	// IMP=0x00000000004950af
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000494fb4
- (id)dictionaryRepresentation;	// IMP=0x0000000000494f9b
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

