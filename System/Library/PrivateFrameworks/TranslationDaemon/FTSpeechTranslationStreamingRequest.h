//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioPacket, FTFinishAudio, FTLanguageDetected, FTResetServerEndpointer, FTSetEndpointerState, FTSpeechTranslationAudioPacket, FTStartSpeechTranslationLoggingRequest, FTStartSpeechTranslationRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000018013f
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x0010000000180105
- (void).cxx_destruct;	// IMP=0x0000000000180847
- (id)flatbuffData;	// IMP=0x00000000001806ca
- (Offset_c5a53c72)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001802bd
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTStartSpeechTranslationLoggingRequest *contentAsFTStartSpeechTranslationLoggingRequest;
@property(readonly, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property(readonly, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property(readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(readonly, nonatomic) FTSpeechTranslationAudioPacket *contentAsFTSpeechTranslationAudioPacket;
@property(readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(readonly, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property(readonly, nonatomic) FTStartSpeechTranslationRequest *contentAsFTStartSpeechTranslationRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017f922
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017f73f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationStreamingRequest *)arg2;	// IMP=0x000000000017f72a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017f710
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017f6f9

@end

