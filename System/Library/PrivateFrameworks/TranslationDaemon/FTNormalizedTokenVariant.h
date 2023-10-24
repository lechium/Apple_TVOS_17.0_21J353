//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTNormalizedTokenVariant : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct NormalizedTokenVariant *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d3774
- (id)flatbuffData;	// IMP=0x00000000000d35f7
- (Offset_f65efac6)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d3254
- (void)normalized_tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d3099
- (unsigned long long)normalized_tokens_count;	// IMP=0x00000000000d2ffd
- (id)normalized_tokens_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d2f04
@property(readonly, nonatomic) NSArray *normalized_tokens;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d2ddb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedTokenVariant *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d2c30
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedTokenVariant *)arg2;	// IMP=0x00000000000d2c1b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d2c01
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d2bea

@end
