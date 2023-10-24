//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTTSRequestFeatureFlags, FTTextToSpeechRequestContext, FTTextToSpeechRequestDebug, FTTextToSpeechRequestDevConfig, FTTextToSpeechRequestExperiment, FTTextToSpeechRequestMeta, FTTextToSpeechRequestProsodyControlConfig, FTTextToSpeechRequestProsodyTransferConfig, FTTextToSpeechUserProfile, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010730d
- (id)flatbuffData;	// IMP=0x0000000000107190
- (Offset_91732649)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001066eb
@property(readonly, nonatomic) FTTextToSpeechRequestProsodyControlConfig *prosody_control_config;
@property(readonly, nonatomic) FTTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property(readonly, nonatomic) FTTextToSpeechRequestDevConfig *dev_config;
@property(readonly, nonatomic) FTTextToSpeechUserProfile *profile;
@property(readonly, nonatomic) FTTextToSpeechRequestDebug *debug;
@property(readonly, nonatomic) FTTTSRequestFeatureFlags *feature_flags;
@property(readonly, nonatomic) FTTextToSpeechRequestExperiment *experiment;
@property(readonly, nonatomic) FTTextToSpeechRequestContext *context;
@property(readonly, nonatomic) FTTextToSpeechRequestMeta *meta_info;
@property(readonly, nonatomic) long long preferred_voice_type;
- (void)context_info_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000105da1
- (unsigned long long)context_info_count;	// IMP=0x0000000000105d05
- (id)context_info_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000105c0c
@property(readonly, nonatomic) NSArray *context_info;
@property(readonly, nonatomic) NSString *voice_name;
@property(readonly, nonatomic) _Bool enable_word_timing_info;
@property(readonly, nonatomic) long long audio_type;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *gender;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001057f0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000105645
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequest *)arg2;	// IMP=0x0000000000105630
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000105616
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000001055ff

@end

