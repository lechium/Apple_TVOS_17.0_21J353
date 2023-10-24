//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

@interface Image_Estimator_HEIF : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000000159a2
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000015914
+ (id)URLOfModelInThisBundle;	// IMP=0x00600000000155e7
- (void).cxx_destruct;	// IMP=0x0000000000016326
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000160eb
- (id)predictionFromInput_File_Size:(double)arg1 Input_Height:(double)arg2 Input_Entropy:(double)arg3 Aspect_Ratio:(double)arg4 Target_File_Size:(double)arg5 Target_Max_Dimension:(double)arg6 Compression_Ratio:(double)arg7 Input_H_x_W__NumOfPixels_:(double)arg8 Target_Height:(double)arg9 Target_Width:(double)arg10 Input_log_NumOfPixels_:(double)arg11 Ratio_of_NumOfPixels:(double)arg12 Exponential_Entropy:(double)arg13 error:(id *)arg14;	// IMP=0x0000000000015fe6
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015e09
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015c43
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015b36
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015ac0
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001589c
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015824
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001579f
- (id)init;	// IMP=0x0000000000015742
- (id)initWithMLModel:(id)arg1;	// IMP=0x00000000000156b1

@end
