//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ICCloudContentTastePBFusePreferences : PBCodable
{
    NSMutableArray *_preferences;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000012db61
- (unsigned long long)hash;	// IMP=0x000000000012db44
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000012dab4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000012d916
- (void)writeTo:(id)arg1;	// IMP=0x001000000012d7e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000012d644
- (id)dictionaryRepresentation;	// IMP=0x001000000012d414
- (id)description;	// IMP=0x001000000012d365

@end

