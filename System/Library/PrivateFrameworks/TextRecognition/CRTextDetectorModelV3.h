//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelV3 : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (id)defaultURLOfModelInThisBundle;	// IMP=0x00600000000b5a63
- (void).cxx_destruct;	// IMP=0x00000000000b6622
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b622e
- (id)predictionFromImg_input:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000b61bd
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b5f43
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b5ecd
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b5ce9
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b5c13
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b5b61
- (id)init;	// IMP=0x00000000000b5b04

@end
