//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTLanguageDetectionResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTLanguageDetectionStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguageDetectionStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000187311
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x00100000001872e3
- (void).cxx_destruct;	// IMP=0x00000000001875de
- (id)flatbuffData;	// IMP=0x0000000000187461
- (Offset_1d53fa02)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000018736c
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTLanguageDetectionResponse *contentAsFTLanguageDetectionResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000187179
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000186f96
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionStreamingResponse *)arg2;	// IMP=0x0000000000186f81
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000186f67
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000186f50

@end

