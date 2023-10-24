//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoItemIdentifierSet : PBCodable
{
    long long _cloudID;	// 8 = 0x8
    long long _delegateInfoID;	// 16 = 0x10
    long long _purchaseHistoryID;	// 24 = 0x18
    long long _storeAdamID;	// 32 = 0x20
    long long _storeSubscriptionAdamID;	// 40 = 0x28
    NSString *_cloudUniversalLibraryID;	// 48 = 0x30
    NSString *_contentItemID;	// 56 = 0x38
    NSString *_playbackAuthorizationToken;	// 64 = 0x40
    struct {
        unsigned int cloudID:1;
        unsigned int delegateInfoID:1;
        unsigned int purchaseHistoryID:1;
        unsigned int storeAdamID:1;
        unsigned int storeSubscriptionAdamID:1;
    } _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001545e2
- (unsigned long long)hash;	// IMP=0x00000000001544d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015430c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001541a9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000154080
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000154073
- (id)dictionaryRepresentation;	// IMP=0x0000000000153e04
- (id)description;	// IMP=0x0000000000153d55

@end

