//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SelectedCheckboxFromIcon__generated__ : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)urlOfModelInThisBundle;	// IMP=0x006000000008424f
- (void).cxx_destruct;	// IMP=0x00000000000849b0
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008474b
- (id)predictionFromImage:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000846da
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000845d6
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000084560
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000084491
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008440c
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008435a
- (id)init;	// IMP=0x00000000000842fd

@end

