//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationAudioPacket : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationAudioPacket *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011ce6d
- (id)flatbuffData;	// IMP=0x000000000011ccf0
- (Offset_d807dcd0)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011c8de
- (void)audio_frames_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011c72d
- (unsigned long long)audio_frames_count;	// IMP=0x000000000011c691
- (id)audio_frames_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011c598
@property(readonly, nonatomic) NSArray *audio_frames;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011c46f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationAudioPacket *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011c2c4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationAudioPacket *)arg2;	// IMP=0x000000000011c2af
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011c295
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011c27e

@end

