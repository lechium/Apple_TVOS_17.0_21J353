//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _LTDOfflineConfigurationModel : NSObject
{
    _Bool _hasCapabilityIdentifiers;	// 8 = 0x8
    NSString *_pairAssetConfigFile;	// 16 = 0x10
    NSArray *_pairAssetList;	// 24 = 0x18
    NSDictionary *_root;	// 32 = 0x20
    NSDictionary *_languagePairConfigs;	// 40 = 0x28
    long long _pairAssetRequiredANECapability;	// 48 = 0x30
}

+ (_Bool)isPassthroughLocalePairIdentifier:(id)arg1;	// IMP=0x0060000000021038
+ (id)passthroughConfiguration;	// IMP=0x0060000000020f5a
- (void).cxx_destruct;	// IMP=0x00000000000219ec
@property(readonly, nonatomic) long long pairAssetRequiredANECapability; // @synthesize pairAssetRequiredANECapability=_pairAssetRequiredANECapability;
@property(readonly, nonatomic) _Bool hasCapabilityIdentifiers; // @synthesize hasCapabilityIdentifiers=_hasCapabilityIdentifiers;
@property(readonly, nonatomic) NSDictionary *languagePairConfigs; // @synthesize languagePairConfigs=_languagePairConfigs;
@property(readonly, nonatomic) NSDictionary *root; // @synthesize root=_root;
@property(readonly, nonatomic) NSArray *pairAssetList; // @synthesize pairAssetList=_pairAssetList;
@property(readonly, nonatomic) NSString *pairAssetConfigFile; // @synthesize pairAssetConfigFile=_pairAssetConfigFile;
- (id)debugDescription;	// IMP=0x000000000002199b
- (id)description;	// IMP=0x0000000000021989
- (id)_offlinePairConfigurationWithIdentifier:(id)arg1 capability:(long long)arg2;	// IMP=0x00000000000214fd
- (id)offlinePairConfigurationWithIdentifier:(id)arg1;	// IMP=0x0000000000021485
@property(readonly, nonatomic) NSArray *languageIdentifiers;
@property(readonly, nonatomic) NSArray *languagePairs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000020c6e

@end

