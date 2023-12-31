//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AWDHomeKitMultiUserSettings : PBCodable
{
    NSMutableArray *_homeKitMultiUserSettingsValuesByKeyPaths;	// 8 = 0x8
    _Bool _isOwner;	// 16 = 0x10
    struct {
        unsigned int isOwner:1;
    } _has;	// 20 = 0x14
}

+ (Class)homeKitMultiUserSettingsValuesByKeyPathType;	// IMP=0x0010000000bf2e08
- (void).cxx_destruct;	// IMP=0x0000000000bf2bb3
@property(retain, nonatomic) NSMutableArray *homeKitMultiUserSettingsValuesByKeyPaths; // @synthesize homeKitMultiUserSettingsValuesByKeyPaths=_homeKitMultiUserSettingsValuesByKeyPaths;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000bf2a0d
- (unsigned long long)hash;	// IMP=0x0000000000bf29c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bf28fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bf270c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000bf2629
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bf24cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bf24c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000bf2238
- (id)description;	// IMP=0x0000000000bf2189
- (id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000bf216c
- (unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;	// IMP=0x0000000000bf214f
- (void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg1;	// IMP=0x0000000000bf20e5
- (void)clearHomeKitMultiUserSettingsValuesByKeyPaths;	// IMP=0x0000000000bf20c8
@property(nonatomic) _Bool hasIsOwner;

@end

