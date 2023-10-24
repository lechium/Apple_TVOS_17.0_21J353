//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPBundlesForContainerResponse : PBCodable
{
    NSMutableArray *_bundleIDs;	// 8 = 0x8
}

+ (Class)bundleIDType;	// IMP=0x001000000017a940
- (void).cxx_destruct;	// IMP=0x000000000017b19a
@property(retain, nonatomic) NSMutableArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000017b03c
- (unsigned long long)hash;	// IMP=0x000000000017b01f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017af8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017adcb
- (void)copyTo:(id)arg1;	// IMP=0x000000000017ad06
- (void)writeTo:(id)arg1;	// IMP=0x000000000017abd0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017abc3
- (id)dictionaryRepresentation;	// IMP=0x000000000017aa00
- (id)description;	// IMP=0x000000000017a951
- (id)bundleIDAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017a923
- (unsigned long long)bundleIDsCount;	// IMP=0x000000000017a906
- (void)addBundleID:(id)arg1;	// IMP=0x000000000017a89c
- (void)clearBundleIDs;	// IMP=0x000000000017a87f

@end

