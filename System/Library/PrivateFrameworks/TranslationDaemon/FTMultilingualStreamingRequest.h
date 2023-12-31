//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioPacket, FTFinishAudio, FTLanguageDetected, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTStartMultilingualSpeechRequest, FTUpdateAudioInfo, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMultilingualStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct MultilingualStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017e157
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017e11d
- (void).cxx_destruct;	// IMP=0x000000000017e85f
- (id)flatbuffData;	// IMP=0x000000000017e6e2
- (Offset_599ef10e)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000017e2d5
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTLanguageDetected *contentAsFTLanguageDetected;
@property(readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(readonly, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property(readonly, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property(readonly, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property(readonly, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property(readonly, nonatomic) FTStartMultilingualSpeechRequest *contentAsFTStartMultilingualSpeechRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017d93a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017d757
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingRequest *)arg2;	// IMP=0x000000000017d742
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017d728
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017d711

@end

