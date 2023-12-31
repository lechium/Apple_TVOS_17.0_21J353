//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString, OPTTSTextToSpeechFeature;

__attribute__((visibility("hidden")))
@interface OPTTSPartialTextToSpeechStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct PartialTextToSpeechStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000110d67
- (id)flatbuffData;	// IMP=0x0000000000110c50
- (Offset_cde40885)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001104d5
@property(readonly, nonatomic) OPTTSTextToSpeechFeature *feature;
- (void)word_timing_info_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011025f
- (unsigned long long)word_timing_info_count;	// IMP=0x00000000001101c3
- (id)word_timing_info_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001100a3
@property(readonly, nonatomic) NSArray *word_timing_info;
- (void)audio:(CDUnknownBlockType)arg1;	// IMP=0x000000000010ff2f
@property(readonly, nonatomic) NSData *audio;
@property(readonly, nonatomic) int current_pkt_number;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010fccb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000010fae8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse *)arg2;	// IMP=0x000000000010fad3
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000010fab9
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000010faa2

@end

