//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000106091
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000106003
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000105cac
- (void).cxx_destruct;	// IMP=0x00000000001069f2
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001067ab
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010671b
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000106522
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106340
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000106225
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001061af
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000105f8b
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000105f13
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000105e8e
- (id)init;	// IMP=0x0000000000105e31
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000105da0

@end
