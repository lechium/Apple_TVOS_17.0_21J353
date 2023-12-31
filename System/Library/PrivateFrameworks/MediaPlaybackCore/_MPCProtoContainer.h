//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _MPCProtoContainerIdentifierSet;

__attribute__((visibility("hidden")))
@interface _MPCProtoContainer : PBCodable
{
    int _containerType;	// 8 = 0x8
    _MPCProtoContainerIdentifierSet *_identifierSet;	// 16 = 0x10
    NSMutableArray *_items;	// 24 = 0x18
    NSString *_playActivityFeatureName;	// 32 = 0x20
    NSString *_playActivityQueueGroupingID;	// 40 = 0x28
    struct {
        unsigned int containerType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000025d6f4
- (unsigned long long)hash;	// IMP=0x000000000025d642
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025d500
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025d2b9
- (void)writeTo:(id)arg1;	// IMP=0x000000000025d0fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025d0ed
- (id)dictionaryRepresentation;	// IMP=0x000000000025cdb4
- (id)description;	// IMP=0x000000000025cd05

@end

