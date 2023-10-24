//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioPacket, FTCancelRequest, FTFinishAudio, FTStartPronGuessRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutablePronGuessStreamingRequest
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x006000000018c6c9
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x006000000018c5ef
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x006000000018c5b5
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTCancelRequest *contentAsFTCancelRequest;
@property(copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(copy, nonatomic) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018bf8a
- (id)init;	// IMP=0x000000000018befc

@end
