//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTQSSVersionInfo, FTTextToSpeechResource, FTTextToSpeechVoice, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechMeta : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechMeta *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fa704
- (id)flatbuffData;	// IMP=0x00000000000fa587
- (Offset_256a1c65)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000fa467
@property(readonly, nonatomic) FTQSSVersionInfo *server_info;
@property(readonly, nonatomic) FTTextToSpeechResource *resource;
@property(readonly, nonatomic) FTTextToSpeechVoice *voice;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fa1e3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechMeta *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000fa038
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechMeta *)arg2;	// IMP=0x00000000000fa023
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fa009
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f9ff2

@end

