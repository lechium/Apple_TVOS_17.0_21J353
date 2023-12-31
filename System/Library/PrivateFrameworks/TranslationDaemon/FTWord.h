//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTWord : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct Word *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c4858
- (id)flatbuffData;	// IMP=0x00000000000c46db
- (Offset_a1b0fd55)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c447e
@property(readonly, nonatomic) NSString *tag;
@property(readonly, nonatomic) int frequency;
- (void)pronunciations:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4376
@property(readonly, nonatomic) NSData *pronunciations;
@property(readonly, nonatomic) NSString *orthography;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c42b2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Word *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c4107
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Word *)arg2;	// IMP=0x00000000000c40f2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c40d8
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c40c1

@end

