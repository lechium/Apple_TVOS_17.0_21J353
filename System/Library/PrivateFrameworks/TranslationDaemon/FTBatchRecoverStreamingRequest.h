//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStartBatchRecoverRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTBatchRecoverStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchRecoverStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000177389
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017735b
- (void).cxx_destruct;	// IMP=0x0000000000177656
- (id)flatbuffData;	// IMP=0x00000000001774d9
- (Offset_74b58d8f)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001773e4
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTStartBatchRecoverRequest *contentAsFTStartBatchRecoverRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001771f1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017700e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchRecoverStreamingRequest *)arg2;	// IMP=0x0000000000176ff9
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000176fdf
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000176fc8

@end

