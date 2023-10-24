//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (AppleMediaServices)
+ (id)_labelForDataProtectionClass:(unsigned long long)arg1;	// IMP=0x00200000003d38b9
+ (id)_generateInitializationVectorDataWithError:(id *)arg1;	// IMP=0x00200000003d36cc
+ (id)_AESKeyForDataProtectionClass:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00200000003d2d75
+ (struct __CFString *)_accessibleAttributeForDataProtectionClass:(unsigned long long)arg1;	// IMP=0x00200000003d2d5c
+ (id)ams_generateEncryptionKey;	// IMP=0x00200000003d2bdc
- (CDStruct_0f015c83)ams_encryptDataUsingKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003d266b
- (CDStruct_0f015c83)ams_encryptDataUsingDataProtectionClass:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000003d24c2
- (id)ams_decryptUsingKey:(id)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;	// IMP=0x00100000003d20e3
- (id)ams_decryptUsingDataProtectionClass:(unsigned long long)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;	// IMP=0x00100000003d1f34
- (id)_decompressLZMA;	// IMP=0x00100000003d1d90
- (id)_decompressGZIP;	// IMP=0x00100000003d1c24
- (id)_compressLZMA;	// IMP=0x00100000003d1a80
- (id)_compressGZIP;	// IMP=0x00100000003d18e5
- (id)ams_decompressWithAlgorithm:(long long)arg1;	// IMP=0x00100000003d18ac
- (id)ams_compressWithAlgorithm:(long long)arg1;	// IMP=0x00100000003d1873
@property(readonly, nonatomic) NSData *ams_SHA1;
@property(readonly, nonatomic) NSString *ams_nvramDescription;
@property(readonly, nonatomic) NSString *ams_hexAddressDescription;
@property(readonly, nonatomic) NSData *ams_decompressedData;
@property(readonly, nonatomic) NSData *ams_compressedData;
@end
