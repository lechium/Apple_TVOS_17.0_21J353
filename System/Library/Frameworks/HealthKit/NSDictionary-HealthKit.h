//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (HealthKit)
+ (_Bool)hk_acceptsMetadataValue:(id)arg1 allowPrivateMetadata:(_Bool)arg2;	// IMP=0x008000000000d7d4
+ (id)hk_acceptedPublicMetadataValueClasses;	// IMP=0x00800000000ba800
+ (id)hk_acceptedMetadataValueClasses;	// IMP=0x008000000000d942
+ (id)hk_secureCodingClasses;	// IMP=0x008000000001d887
+ (void)_addDerivedPublicKeyIfNecessaryForPrivateKey:(id)arg1 mutableDictionary:(id)arg2;	// IMP=0x00800000000ba613
+ (id)hk_secureAttachmentCodingClasses;	// IMP=0x0080000000216b75
+ (id)hk_acceptedAttachmentMetadataValueClasses;	// IMP=0x0080000000216ac6
- (id)hk_replaceKeysFromSharedStringCache;	// IMP=0x00100000000b65d5
- (_Bool)hk_containsValuePassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b63d1
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b61de
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b609a
- (id)hk_filteredDictionaryForKeys:(id)arg1;	// IMP=0x00100000000b5f4f
- (id)hk_filterKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b5d68
- (id)hk_allValuesBySortedKeys;	// IMP=0x00100000000b5cbf
- (id)hk_sortedKeys;	// IMP=0x00100000000b5c68
- (id)hk_dictionaryByAddingEntriesFromDictionary:(id)arg1;	// IMP=0x00100000000b5be8
- (_Bool)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 applicationSDKVersion:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x00100000000bc40b
- (_Bool)_hk_validateMetadataDawnValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bc245
- (_Bool)_hk_validateMetadataSydneyValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bc03c
- (_Bool)_hk_validateMetadataSkyValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bbe48
- (_Bool)_hk_validateMetadataAzulValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bba41
- (_Bool)_hk_validateMetadataYukonValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000bb564
- (_Bool)_hk_validateMetadataBaseValueContent:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000ba8cd
- (id)_copyWithoutPrivateMetadataKeysShouldDerivePublicKeys:(_Bool)arg1;	// IMP=0x00100000000ba3ea
- (id)hk_copySanitizedForPublicClient;	// IMP=0x00100000000ba3cb
- (id)hk_copyWithoutPrivateMetadataKeys;	// IMP=0x00100000000ba3af
- (_Bool)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(_Bool)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00100000000ba0c1
- (_Bool)_hk_validateMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 forKey:(id)arg3 applicationSDKVersion:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x001000000013cafe
- (_Bool)_hk_validateYukonMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id *)arg4;	// IMP=0x001000000013c5b3
- (_Bool)_hk_validateBaseMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id *)arg4;	// IMP=0x001000000013c3e8
- (_Bool)hk_validateMetadataKeysAndValuesForWorkoutEvent:(id)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x001000000013c0da
- (_Bool)hk_validateAttachmentMetadataKeysAndValuesWithError:(id *)arg1;	// IMP=0x0010000000216859
@end

