//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishLaughterModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000001050bb
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000010502d
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000104cd6
- (void).cxx_destruct;	// IMP=0x0000000000105a1c
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001057d5
- (id)predictionFromInput1:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000105745
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010554c
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010536a
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010524f
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001051d9
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000104fb5
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000104f3d
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000104eb8
- (id)init;	// IMP=0x0000000000104e5b
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000104dca

@end

