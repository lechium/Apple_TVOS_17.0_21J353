//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioLimitExceeded, FTClientSetupInfo, FTFinalBlazarResponse, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRecognitionProgress, FTRequestStatsResponse, FTServerEndpointFeatures, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMultiUserStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct MultiUserStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017cf48
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017cf0e
- (void).cxx_destruct;	// IMP=0x000000000017d6e9
- (id)flatbuffData;	// IMP=0x000000000017d56c
- (Offset_3fe3bcde)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000017d0ee
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property(readonly, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property(readonly, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property(readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property(readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property(readonly, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property(readonly, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property(readonly, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017c640
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017c45d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserStreamingResponse *)arg2;	// IMP=0x000000000017c448
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017c42e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017c417

@end

