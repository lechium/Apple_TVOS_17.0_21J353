//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPVideoEmbeddings : NSObject
{
    unsigned long long _embeddingSize;	// 8 = 0x8
    NSMutableArray *_videoEmbeddings;	// 16 = 0x10
    float *_averageEmbedding;	// 24 = 0x18
    float *_currentEmbedding;	// 32 = 0x20
    long long _embeddingMode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002daf46
@property(readonly) long long embeddingMode; // @synthesize embeddingMode=_embeddingMode;
- (id)getEmbeddingsForRange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000002dab09
- (void)dealloc;	// IMP=0x00000000002daabc
- (int)addEmbeddings:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000002da871
- (id)initWithEmbeddingMode:(long long)arg1;	// IMP=0x00000000002da7c0

@end

