//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioDescription, FTTextToSpeechMeta, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBeginTextToSpeechStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BeginTextToSpeechStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010d929
- (id)flatbuffData;	// IMP=0x000000000010d7ac
- (Offset_afb4d078)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000010d451
@property(readonly, nonatomic) float streaming_playback_buffer_size_in_seconds;
@property(readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property(readonly, nonatomic) FTAudioDescription *playback_description;
@property(readonly, nonatomic) FTAudioDescription *decoder_description;
@property(readonly, nonatomic) long long audio_type;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010cf8e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000010cde3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse *)arg2;	// IMP=0x000000000010cdce
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000010cdb4
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000010cd9d

@end

