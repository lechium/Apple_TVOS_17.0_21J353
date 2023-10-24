//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioPacket, FTFinishAudio, FTStartLanguageDetectionRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTLanguageDetectionStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguageDetectionStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000186b18
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x0010000000186ade
- (void).cxx_destruct;	// IMP=0x0000000000186f28
- (id)flatbuffData;	// IMP=0x0000000000186dab
- (Offset_f9a9e10b)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000186bcc
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(readonly, nonatomic) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000186792
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001865af
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionStreamingRequest *)arg2;	// IMP=0x000000000018659a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000186580
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000186569

@end
