//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IHKSliderNetCPModel.h"

@class IHKFilterSequence, NSArray, NSDictionary, NSString;

@interface IHKSliderNetCPModelV1 : IHKSliderNetCPModel
{
    struct shared_ptr<ik::EspressoNet> styleTransferNet;	// 8 = 0x8
    struct shared_ptr<ik::EspressoNet> contentFVecNet;	// 24 = 0x18
    struct shared_ptr<ik::EspressoNet> styleFVecNet;	// 40 = 0x28
    NSArray *_sliderOrder;	// 56 = 0x38
    NSDictionary *_sliderSpecs;	// 64 = 0x40
    IHKFilterSequence *_filterSequence;	// 72 = 0x48
    struct CGColorSpace *_colorSpace;	// 80 = 0x50
    NSArray *_adjustmentEndpoints;	// 88 = 0x58
    NSString *_contentFVecEndpoint;	// 96 = 0x60
    NSString *_styleFVecEndpoint;	// 104 = 0x68
    NSArray *_contentFVecShape;	// 112 = 0x70
    NSArray *_styleFVecShape;	// 120 = 0x78
    struct CGSize _imageSize;	// 128 = 0x80
}

- (id).cxx_construct;	// IMP=0x000000000001af50
- (void).cxx_destruct;	// IMP=0x000000000001ae00
@property(retain) NSArray *styleFVecShape; // @synthesize styleFVecShape=_styleFVecShape;
@property(retain) NSArray *contentFVecShape; // @synthesize contentFVecShape=_contentFVecShape;
@property(retain) NSString *styleFVecEndpoint; // @synthesize styleFVecEndpoint=_styleFVecEndpoint;
@property(retain) NSString *contentFVecEndpoint; // @synthesize contentFVecEndpoint=_contentFVecEndpoint;
@property(retain) NSArray *adjustmentEndpoints; // @synthesize adjustmentEndpoints=_adjustmentEndpoints;
@property struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain) IHKFilterSequence *filterSequence; // @synthesize filterSequence=_filterSequence;
@property(retain) NSDictionary *sliderSpecs; // @synthesize sliderSpecs=_sliderSpecs;
@property(retain) NSArray *sliderOrder; // @synthesize sliderOrder=_sliderOrder;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (id)applyAdjustments:(id)arg1 toCIImage:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001aa90
- (id)getValueForAdjustment:(id)arg1 adjustments:(id)arg2;	// IMP=0x000000000001a970
- (id)predictSlidersForStyleVector:(id)arg1 contentVector:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000018e30
- (struct EspressoTensor)newTensorWithCorrectShape:(struct EspressoTensor)arg1 shape:(id)arg2;	// IMP=0x00000000000189b0
- (id)predictContentVectorForPixelBuffer:(struct __CVBuffer *)arg1 scenePrint:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000180b0
- (id)predictStyleVectorForPixelBuffer:(struct __CVBuffer *)arg1 scenePrint:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000177c0
- (id)initWithModel:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015ff0
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000015fd0
- (unsigned long long)styleFVecSize;	// IMP=0x0000000000015f60
- (unsigned long long)contentFVecSize;	// IMP=0x0000000000015ef0

@end

