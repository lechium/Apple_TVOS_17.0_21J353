//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMCoarseElevationDeprecated : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000a2b155
- (unsigned long long)hash;	// IMP=0x0010000000a2b13c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000a2b0f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000a2b0a7
- (void)copyTo:(id)arg1;	// IMP=0x0010000000a2b094
- (void)writeTo:(id)arg1;	// IMP=0x0010000000a2b078
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000a2b06b
- (id)dictionaryRepresentation;	// IMP=0x0010000000a2ae6c
- (id)description;	// IMP=0x0010000000a2adf5

@end

