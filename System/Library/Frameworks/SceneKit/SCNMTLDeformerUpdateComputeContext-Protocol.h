//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/NSObject-Protocol.h>

@protocol SCNMTLDeformerUpdateComputeContext <NSObject>
@property(readonly, nonatomic) struct SCNMTLComputeCommandEncoder *currentComputeEncoder;
@property(readonly, nonatomic) CDStruct_c6fc9200 currentTransforms;
@property(readonly, nonatomic) long long currentFrameIndex;
- (void)setStageInputOutputBuffersToEncoder:(struct SCNMTLComputeCommandEncoder *)arg1;
@end

