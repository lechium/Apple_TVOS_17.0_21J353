//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (ICDataExtensions)
+ (id)ic_dataFromHexString:(id)arg1;	// IMP=0x0020000000008260
+ (id)ic_random256BitData:(id *)arg1;	// IMP=0x0020000000008234
+ (id)ic_random128BitData:(id *)arg1;	// IMP=0x0020000000008208
+ (id)ic_randomDataOfLength:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x002000000000810f
+ (_Bool)ic_nullableData:(id)arg1 isEqualToNullableData:(id)arg2;	// IMP=0x00200000000080eb
+ (id)ic_dataWithUnsignedInteger:(unsigned long long)arg1;	// IMP=0x00200000000080ab
+ (id)ic_dataWithBoolean:(_Bool)arg1;	// IMP=0x0020000000008042
- (unsigned long long)ic_unsignedIntegerValue;	// IMP=0x0010000000008056
- (_Bool)ic_boolValue;	// IMP=0x0010000000008029
- (id)ic_stringValue;	// IMP=0x0010000000007fee
@property(readonly, nonatomic) NSString *ic_sha256;
@property(readonly, nonatomic) NSString *ic_md5;
- (id)ic_gzipDeflate;	// IMP=0x001000000001f25f
- (id)ic_gzipInflate;	// IMP=0x001000000001efb3
@end

