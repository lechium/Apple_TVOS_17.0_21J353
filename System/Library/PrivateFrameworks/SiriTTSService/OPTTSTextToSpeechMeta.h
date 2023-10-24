//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, OPTTSTextToSpeechResource, OPTTSTextToSpeechVoice;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechMeta : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechMeta *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fb38b
- (id)flatbuffData;	// IMP=0x00000000000fb274
- (Offset_256a1c65)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000fb164
@property(readonly, nonatomic) OPTTSTextToSpeechResource *resource;
@property(readonly, nonatomic) OPTTSTextToSpeechVoice *voice;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fafb3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechMeta *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000fadd0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechMeta *)arg2;	// IMP=0x00000000000fadbb
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fada1
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fad8a

@end
