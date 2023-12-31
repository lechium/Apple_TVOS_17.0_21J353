//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequestDebug : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestDebug *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000102fdc
- (id)flatbuffData;	// IMP=0x0000000000102e5f
- (Offset_62b9d662)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000102de1
@property(readonly, nonatomic) _Bool disable_cache;
@property(readonly, nonatomic) _Bool force_use_tts_service;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000102d74
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDebug *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000102bc9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestDebug *)arg2;	// IMP=0x0000000000102bb4
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000102b9a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000102b83

@end

