//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, OPTTSBeginTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface OPTTSMutableTextToSpeechRouterStreamingStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x00600000000f89be
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x00600000000f890a
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x00600000000f88d0
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;
@property(copy, nonatomic) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property(copy, nonatomic) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f8407
- (id)init;	// IMP=0x00000000000f8383

@end

