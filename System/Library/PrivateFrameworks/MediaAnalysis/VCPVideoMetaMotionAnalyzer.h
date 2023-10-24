//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VCPVideoMetaMotionSegment;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaMotionAnalyzer : NSObject
{
    struct HinkleyDetector _hinkleyDetector;	// 8 = 0x8
    VCPVideoMetaMotionSegment *_activeSegment;	// 40 = 0x28
    NSMutableArray *_mutableResults;	// 48 = 0x30
    NSMutableArray *_internalResults;	// 56 = 0x38
    CDStruct_e83c9415 _frameTimeRange;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x000000000008eb4f
- (void).cxx_destruct;	// IMP=0x000000000008eb13
@property(readonly, retain, nonatomic) NSArray *results;
- (int)finalizeAnalysis;	// IMP=0x000000000008e6b1
- (void)mergeSimilarSegments;	// IMP=0x000000000008e53c
- (int)processFrameMetadata:(id)arg1;	// IMP=0x000000000008e2a2
- (_Bool)decideSegmentPointBasedOn:(float)arg1;	// IMP=0x000000000008e20b
- (id)init;	// IMP=0x000000000008e0d4

@end

