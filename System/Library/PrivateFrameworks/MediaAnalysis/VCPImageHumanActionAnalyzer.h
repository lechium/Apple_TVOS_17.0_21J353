//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, PHFetchResult, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPImageHumanActionAnalyzer
{
    NSMutableArray *_results;	// 8 = 0x8
    NSArray *_existingResults;	// 16 = 0x10
    VCPCNNModelEspresso *_model;	// 24 = 0x18
    PHFetchResult *_phFaces;	// 32 = 0x20
    float *_inputData;	// 40 = 0x28
    struct Scaler _scaler;	// 48 = 0x30
}

+ (id)sharedModel:(id)arg1 outputNames:(id)arg2 properties:(id)arg3;	// IMP=0x0060000000285bf0
- (id).cxx_construct;	// IMP=0x0000000000287dea
- (void).cxx_destruct;	// IMP=0x0000000000287d79
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x0000000000287177
- (struct CGRect)rectFromPHFace:(id)arg1;	// IMP=0x0000000000286d36
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 crop:(struct CGRect)arg5;	// IMP=0x0000000000286c9f
- (int)aggregateWith:(id)arg1;	// IMP=0x00000000002862a9
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;	// IMP=0x000000000028605e
- (void)dealloc;	// IMP=0x0000000000286018
- (id)initWithPHFaces:(id)arg1 existingResults:(id)arg2;	// IMP=0x0000000000285dbe

@end
