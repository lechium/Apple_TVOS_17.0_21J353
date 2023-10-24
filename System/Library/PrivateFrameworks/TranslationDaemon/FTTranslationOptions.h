//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTranslationOptions : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TranslationOptions *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e1482
- (id)flatbuffData;	// IMP=0x00000000000e1305
- (Offset_ecf345a2)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000e12bd
@property(readonly, nonatomic) _Bool enable_disambiguation_alternatives;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e1281
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationOptions *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000e10d6
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationOptions *)arg2;	// IMP=0x00000000000e10c1
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e10a7
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e1090

@end
