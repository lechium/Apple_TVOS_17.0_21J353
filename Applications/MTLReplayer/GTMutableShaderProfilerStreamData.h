//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSMutableDictionary;

@interface GTMutableShaderProfilerStreamData
{
    NSLock *_addLock;	// 232 = 0xe8
    NSMutableDictionary *_perRingBufferAPSData;	// 240 = 0xf0
    NSMutableDictionary *_perRingBufferAPSCounterData;	// 248 = 0xf8
    NSMutableDictionary *_perRingBufferAPSTimelineData;	// 256 = 0x100
}

+ (id)dataFromArchivedDataURL:(id)arg1;	// IMP=0x004000000004bcac
- (void).cxx_destruct;	// IMP=0x002000000004bc59
- (unsigned long long)addString:(id)arg1;	// IMP=0x001000000004bb67
- (void)optimizeStreamData;	// IMP=0x001000000004b752
- (void)setBatchIdFilterableCounters:(id)arg1;	// IMP=0x001000000004b71f
- (_Bool)addBatchIdFilteredCounterData:(id)arg1;	// IMP=0x001000000004b645
- (void)removeAPSCounterData;	// IMP=0x001000000004b5f4
- (void)removeAPSTimelineData;	// IMP=0x001000000004b5a3
- (void)removeAPSData;	// IMP=0x001000000004b552
- (_Bool)addAPSCounterData:(id)arg1;	// IMP=0x001000000004b469
- (_Bool)addAPSTimelineData:(id)arg1;	// IMP=0x001000000004b380
- (_Bool)addAPSData:(id)arg1;	// IMP=0x001000000004b297
- (void)_archiveRingBufferAPSData;	// IMP=0x001000000004ab39
- (_Bool)_addIfAPSBufferData:(id)arg1 withData:(id)arg2;	// IMP=0x001000000004a95d
- (_Bool)addGPUTimelineData:(id)arg1;	// IMP=0x001000000004a883
- (_Bool)addShaderProfilerData:(id)arg1;	// IMP=0x001000000004a7a9
- (void)setDataSourceHasUnusedResources:(_Bool)arg1 captureRange:(struct _NSRange)arg2;	// IMP=0x001000000004a78f
- (void)setNumBlitCalls:(unsigned long long)arg1;	// IMP=0x001000000004a785
- (void)addShaderFunctionInfo:(CDStruct_74271b70 *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000004a729
- (void)addCommandBuffers:(CDStruct_0ef168c5 *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000004a6d1
- (void)addPipelineStates:(CDStruct_71113f05 *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000004a675
- (void)addEncoders:(CDStruct_71113f05 *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000004a619
- (void)addGPUCommands:(CDStruct_0b014dd4 *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000004a5c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000004a592
- (id)init;	// IMP=0x001000000004a398

@end

