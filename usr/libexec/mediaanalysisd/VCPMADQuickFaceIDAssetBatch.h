//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VCPDatabaseWriter, VCPPhotosQuickFaceIdentificationManager;
@protocol OS_dispatch_group;

@interface VCPMADQuickFaceIDAssetBatch : NSObject
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    VCPDatabaseWriter *_analysisDatabase;	// 16 = 0x10
    VCPPhotosQuickFaceIdentificationManager *_quickFaceIDManager;	// 24 = 0x18
    CDUnknownBlockType _cancelBlock;	// 32 = 0x20
    unsigned long long _processQueuesAllowed;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_processGroup;	// 48 = 0x30
    CDUnknownBlockType _scheduler;	// 56 = 0x38
    CDUnknownBlockType _waitForProcessToComplete;	// 64 = 0x40
}

+ (id)batchWithAnalysisDatabase:(id)arg1 quickFaceIDManager:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0020000000043df6
+ (unsigned long long)_concurrentQueueCount;	// IMP=0x0010000000043b40
+ (_Bool)_allowConcurrentFaceProcessing;	// IMP=0x0010000000043ae3
- (void).cxx_destruct;	// IMP=0x00200000000467e3
- (int)publish;	// IMP=0x0010000000045186
- (int)process;	// IMP=0x0010000000044b4c
- (void)_processAssetEntry:(id)arg1;	// IMP=0x001000000004471e
- (int)prepare;	// IMP=0x001000000004425e
- (void)addPhotosAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2 attempts:(unsigned long long)arg3 andAttemptDate:(id)arg4;	// IMP=0x0010000000043ebc
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithAnalysisDatabase:(id)arg1 quickFaceIDManager:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043b80

@end
