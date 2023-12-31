//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundClassifierVersion1Model : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000010e055
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000010dfc7
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000010dc70
- (void).cxx_destruct;	// IMP=0x000000000010eb28
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010e871
- (id)predictionFromAudioSamples:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010e7e1
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010e594
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010e35e
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010e1e9
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010e173
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010df4f
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010ded7
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010de52
- (id)init;	// IMP=0x000000000010ddf5
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000010dd64

@end

