//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureInputText : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechSpeechFeatureInputText *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001153f9
- (id)flatbuffData;	// IMP=0x000000000011527c
- (Offset_800d2c34)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000114e6a
- (void)words_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000114cb9
- (unsigned long long)words_count;	// IMP=0x0000000000114c1d
- (id)words_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000114b24
@property(readonly, nonatomic) NSArray *words;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001149fb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputText *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000114850
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputText *)arg2;	// IMP=0x000000000011483b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000114821
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011480a

@end
