//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration;

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingCompoundRequest
{
    VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration *_detectorConfiguration;	// 8 = 0x8
}

+ (Class)configurationClass;	// IMP=0x006000000027386a
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x00600000002733f8
+ (void)_evaluateOriginalVNClassifyCityNatureImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x006000000027332e
+ (void)_evaluateOriginalVN6Mb1ME89lyW3HpahkEygIG:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000273264
+ (void)_evaluateOriginalVN5kJNH3eYuyaLxNpZr5Z7zi:(id)arg1 configurations:(id)arg2;	// IMP=0x006000000027318d
+ (void)_evaluateOriginalVNClassifyJunkImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x00600000002730b6
+ (void)_evaluateOriginalVNCreateImageFingerprintsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000272fec
+ (void)_evaluateOriginalVNRecognizeObjectsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000272eb6
+ (void)_evaluateOriginalVNGenerateObjectnessBasedSaliencyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000272de2
+ (void)_evaluateOriginalVNGenerateAttentionBasedSaliencyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000272d05
+ (void)_evaluateOriginalVNClassifyImageAestheticsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000272c2e
+ (void)_evaluateOriginalVNGenerateImageFeaturePrintRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000272b64
+ (void)_evaluateOriginalVNCreateSceneprintRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000272a87
+ (void)_evaluateOriginalVNSceneClassificationRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x006000000027291c
+ (void)_evaluateOriginalVNClassifyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000272766
- (void).cxx_destruct;	// IMP=0x0000000000272753
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002724c4
- (_Bool)allowsCachingOfResults;	// IMP=0x00000000002724bc
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000002723ed
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000272389
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000271fb7

@end
