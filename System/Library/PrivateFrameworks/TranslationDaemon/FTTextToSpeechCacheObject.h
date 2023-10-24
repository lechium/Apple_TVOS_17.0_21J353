//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechCacheObject : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechCacheObject *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000110c4f
- (id)flatbuffData;	// IMP=0x0000000000110ad2
- (Offset_00a5d9ba)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000110660
- (void)word_timing_info_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001104af
- (unsigned long long)word_timing_info_count;	// IMP=0x0000000000110413
- (id)word_timing_info_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011031a
@property(readonly, nonatomic) NSArray *word_timing_info;
- (void)audio:(CDUnknownBlockType)arg1;	// IMP=0x000000000011018d
@property(readonly, nonatomic) NSData *audio;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000110137
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheObject *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000010ff8c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheObject *)arg2;	// IMP=0x000000000010ff77
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000010ff5d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000010ff46

@end

