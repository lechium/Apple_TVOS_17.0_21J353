//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrintAEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000010a6dd
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000010a64f
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000010a2f8
- (void).cxx_destruct;	// IMP=0x000000000010b03e
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010adf7
- (id)predictionFromAudioSamples:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010ad67
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010ab6e
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010a98c
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010a871
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010a7fb
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010a5d7
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010a55f
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010a4da
- (id)init;	// IMP=0x000000000010a47d
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000010a3ec

@end

