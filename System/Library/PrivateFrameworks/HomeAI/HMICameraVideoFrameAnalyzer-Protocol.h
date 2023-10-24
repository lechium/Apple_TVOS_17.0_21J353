//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/NSObject-Protocol.h>

@class HMIAnalysisStateUpdate, HMIVideoAnalyzerConfiguration, HMIVideoFrame, NSArray, NSDictionary, NSMutableSet, NSSet, NSUUID;

@protocol HMICameraVideoFrameAnalyzer <NSObject>
+ (NSDictionary *)classHierarchyMap;
- (HMIAnalysisStateUpdate *)flushAndGetAnalysisStateUpdateForHome:(NSUUID *)arg1 enableFaceClassification:(_Bool)arg2;
- (NSSet *)analyzePixelBuffer:(struct __CVBuffer *)arg1 regionOfInterest:(struct CGRect)arg2 error:(id *)arg3;
- (NSSet *)recognizeEvents:(NSSet *)arg1 frame:(HMIVideoFrame *)arg2 regionOfInterest:(struct CGRect)arg3 homeUUID:(NSUUID *)arg4;
- (NSSet *)analyzeBackgroundFrame:(HMIVideoFrame *)arg1 packageEvents:(NSSet *)arg2 newBackgroundEvents:(NSMutableSet *)arg3 regionOfInterest:(struct CGRect)arg4;
- (NSSet *)getPackageEvents:(NSSet *)arg1 foregroundEvents:(NSSet *)arg2 newBackgroundEvents:(NSMutableSet *)arg3 backgroundTimeStamp:(CDStruct_1b6d18a9)arg4;
- (NSSet *)getAnalyzerEvents:(NSSet *)arg1 eventTriggers:(long long)arg2 enableFaceClassification:(_Bool)arg3 enableTorsoRecognition:(_Bool)arg4;
- (NSSet *)analyzeFrame:(HMIVideoFrame *)arg1 regionOfInterest:(struct CGRect)arg2;
- (struct CGRect)regionOfInterestForMotionDetections:(NSArray *)arg1 foregroundEvents:(NSSet *)arg2 frameSize:(struct CGSize)arg3;
- (id)initWithMediumConfidenceThresholds:(NSDictionary *)arg1 highConfidenceThresholds:(NSDictionary *)arg2 analyzerConfiguration:(HMIVideoAnalyzerConfiguration *)arg3 error:(id *)arg4;
- (id)init;
@end

