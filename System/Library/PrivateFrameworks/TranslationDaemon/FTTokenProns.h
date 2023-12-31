//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTokenProns : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TokenProns *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d7b1f
- (id)flatbuffData;	// IMP=0x00000000000d79a2
- (Offset_5b0c17b4)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d6e7d
- (void)normalized_prons_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6ccc
- (unsigned long long)normalized_prons_count;	// IMP=0x00000000000d6c30
- (id)normalized_prons_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d6b37
@property(readonly, nonatomic) NSArray *normalized_prons;
- (void)prons_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6868
- (unsigned long long)prons_count;	// IMP=0x00000000000d67cc
- (id)prons_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d66d3
@property(readonly, nonatomic) NSArray *prons;
- (void)sanitized_sequences_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6404
- (unsigned long long)sanitized_sequences_count;	// IMP=0x00000000000d6368
- (id)sanitized_sequences_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d626f
@property(readonly, nonatomic) NSArray *sanitized_sequences;
@property(readonly, nonatomic) NSString *orthography;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d60d8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d5f2d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns *)arg2;	// IMP=0x00000000000d5f18
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d5efe
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d5ee7

@end

