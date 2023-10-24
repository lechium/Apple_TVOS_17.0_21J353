//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXMediaUtilities/NSObject-Protocol.h>

@class AXMSourceNode, AXMVisionEngine, AXMVisionPipelineContext;

@protocol AXMServiceInterface <NSObject>
- (void)visionEngine:(AXMVisionEngine *)arg1 evaluateSource:(AXMSourceNode *)arg2 context:(AXMVisionPipelineContext *)arg3 options:(long long)arg4 result:(void (^)(AXMVisionResult *, NSError *))arg5;
- (void)prewarmVisionEngineService;
@end

