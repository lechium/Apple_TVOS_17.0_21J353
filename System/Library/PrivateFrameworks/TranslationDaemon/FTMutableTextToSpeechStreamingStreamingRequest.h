//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTStartTextToSpeechStreamingRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechStreamingStreamingRequest
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x006000000019908d
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x0060000000199032
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x0060000000199004
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000198cd6
- (id)init;	// IMP=0x0000000000198c48

@end

