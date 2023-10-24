//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable
{
    NSMutableArray *_assetAuthorizationResponses;	// 8 = 0x8
    NSMutableArray *_throttleConfigs;	// 16 = 0x10
}

+ (Class)throttleConfigType;	// IMP=0x001000000007fdd4
+ (Class)assetAuthorizationResponsesType;	// IMP=0x001000000007fd02
- (void).cxx_destruct;	// IMP=0x0000000000080e83
@property(retain, nonatomic) NSMutableArray *throttleConfigs; // @synthesize throttleConfigs=_throttleConfigs;
@property(retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // @synthesize assetAuthorizationResponses=_assetAuthorizationResponses;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000080bef
- (unsigned long long)hash;	// IMP=0x0000000000080ba2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080aea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000807ea
- (void)copyTo:(id)arg1;	// IMP=0x0000000000080694
- (void)writeTo:(id)arg1;	// IMP=0x000000000008047d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000080470
- (id)dictionaryRepresentation;	// IMP=0x000000000007fe94
- (id)description;	// IMP=0x000000000007fde5
- (id)throttleConfigAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007fdb7
- (unsigned long long)throttleConfigsCount;	// IMP=0x000000000007fd9a
- (void)addThrottleConfig:(id)arg1;	// IMP=0x000000000007fd30
- (void)clearThrottleConfigs;	// IMP=0x000000000007fd13
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007fce5
- (unsigned long long)assetAuthorizationResponsesCount;	// IMP=0x000000000007fcc8
- (void)addAssetAuthorizationResponses:(id)arg1;	// IMP=0x000000000007fc5e
- (void)clearAssetAuthorizationResponses;	// IMP=0x000000000007fc41

@end
