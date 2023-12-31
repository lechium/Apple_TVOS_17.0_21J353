//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTBeginTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse, FTPartialTextToSpeechStreamingResponse, FTQssAckResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechStreamingStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x00600000001998e6
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x006000000019980c
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x00600000001997d2
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;
@property(copy, nonatomic) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property(copy, nonatomic) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property(copy, nonatomic) FTQssAckResponse *contentAsFTQssAckResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001991a7
- (id)init;	// IMP=0x0000000000199119

@end

