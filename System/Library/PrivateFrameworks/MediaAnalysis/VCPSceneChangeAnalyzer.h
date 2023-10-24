//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, VCPSceneChangeSegment;

__attribute__((visibility("hidden")))
@interface VCPSceneChangeAnalyzer
{
    float _sceneDeltaBuffer[10];	// 8 = 0x8
    struct FrameBuffer _frameBuffer;	// 48 = 0x30
    VCPSceneChangeSegment *_activeSegment;	// 14336 = 0x3800
    NSMutableArray *_sceneSegments;	// 14344 = 0x3808
    _Bool _verbose;	// 14352 = 0x3810
    _Bool _firstFrame;	// 14353 = 0x3811
    CDStruct_e83c9415 _frameTimeRange;	// 14356 = 0x3814
    _Bool _currentStatus;	// 14404 = 0x3844
    _Bool _isSegmentPoint;	// 14405 = 0x3845
}

- (id).cxx_construct;	// IMP=0x00000000002c7f89
- (void).cxx_destruct;	// IMP=0x00000000002c7f1c
- (_Bool)isSegmentPoint;	// IMP=0x00000000002c7f0c
- (id)results;	// IMP=0x00000000002c7e6c
- (int)finalizeAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x00000000002c7c16
- (_Bool)decideLensSwitchPoint:(void *)arg1;	// IMP=0x00000000002c7b84
- (void)PrintSegments;	// IMP=0x00000000002c797f
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x00000000002c75fc
- (void)ComputeSceneDelta:(void *)arg1;	// IMP=0x00000000002c7522
- (id)init;	// IMP=0x00000000002c73ee

@end

