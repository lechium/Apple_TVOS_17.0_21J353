//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPUserPrivacySettings, NSMutableArray, NSString;

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable
{
    NSMutableArray *_applicationBundles;	// 8 = 0x8
    NSString *_applicationContainer;	// 16 = 0x10
    int _applicationContainerEnvironment;	// 24 = 0x18
    CKDPUserPrivacySettings *_userPrivacySettings;	// 32 = 0x20
    struct {
        unsigned int applicationContainerEnvironment:1;
    } _has;	// 40 = 0x28
}

+ (Class)applicationBundleType;	// IMP=0x00100000000829b6
- (void).cxx_destruct;	// IMP=0x0000000000083797
@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
@property(retain, nonatomic) NSMutableArray *applicationBundles; // @synthesize applicationBundles=_applicationBundles;
@property(retain, nonatomic) NSString *applicationContainer; // @synthesize applicationContainer=_applicationContainer;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000083558
- (unsigned long long)hash;	// IMP=0x00000000000834c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000833b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000083176
- (void)copyTo:(id)arg1;	// IMP=0x000000000008304b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000082ea9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000082e9c
- (id)dictionaryRepresentation;	// IMP=0x0000000000082a8b
- (id)description;	// IMP=0x00000000000829dc
@property(readonly, nonatomic) _Bool hasUserPrivacySettings;
- (id)applicationBundleAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000082999
- (unsigned long long)applicationBundlesCount;	// IMP=0x000000000008297c
- (void)addApplicationBundle:(id)arg1;	// IMP=0x0000000000082912
- (void)clearApplicationBundles;	// IMP=0x00000000000828f5
- (int)StringAsApplicationContainerEnvironment:(id)arg1;	// IMP=0x000000000008288a
- (id)applicationContainerEnvironmentAsString:(int)arg1;	// IMP=0x0000000000082834
@property(nonatomic) _Bool hasApplicationContainerEnvironment;
@property(nonatomic) int applicationContainerEnvironment; // @synthesize applicationContainerEnvironment=_applicationContainerEnvironment;
@property(readonly, nonatomic) _Bool hasApplicationContainer;

@end

