//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VCPPhotosMaintenanceProcessingTask : NSObject
{
    struct atomic<bool> _cancel;	// 8 = 0x8
    struct atomic<bool> _started;	// 9 = 0x9
    NSArray *_photoLibraries;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    CDUnknownBlockType _cancelBlock;	// 40 = 0x28
}

+ (id)taskWithPhotoLibraries:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3 andCancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00200000000cb8a7
- (void).cxx_destruct;	// IMP=0x00200000000cde3c
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x00100000000cde1b
- (int)run;	// IMP=0x00100000000cdcf8
- (void)_removeLegacyBackupForTask:(unsigned long long)arg1 withPhotoLibrary:(id)arg2;	// IMP=0x00100000000cdad0
- (id)_legacyBackupFilepathForTask:(unsigned long long)arg1 withPhotoLibrary:(id)arg2;	// IMP=0x00100000000cd974
- (int)_collectAndReportAnalysisProgress;	// IMP=0x00100000000cce27
- (void)_queryAndReportProgressForAnalysis:(unsigned long long)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x00100000000ccc0f
- (void)_queryAndReportProgressForPrioritizedFaceAnalysisForPhotoLibrary:(id)arg1;	// IMP=0x00100000000cca8f
- (void)_queryAndReportProgressForPhotoLibrary:(id)arg1 withAnalysisType:(unsigned long long)arg2 andQueryKeys:(id)arg3;	// IMP=0x00100000000cc151
- (id)_getCompleteDateBasedOn:(unsigned long long)arg1 fromDatabase:(id)arg2 withCompleteTimestampKey:(id)arg3 coreAnalyticsEventKey:(id)arg4 currentDate:(id)arg5 andStartDate:(id)arg6;	// IMP=0x00100000000cbd9e
- (id)_getStartDateFromDatabase:(id)arg1 withStartTimestampKey:(id)arg2 coreAnalyticsEventKey:(id)arg3 andCurrentDate:(id)arg4;	// IMP=0x00100000000cbab3
- (unsigned long long)_computeProgressPercentageWithProcessedCount:(unsigned long long)arg1 andTotalCount:(unsigned long long)arg2;	// IMP=0x00100000000cba38
- (_Bool)isCancelled;	// IMP=0x00100000000cba14
- (void)cancel;	// IMP=0x00100000000cba09
- (float)resourceRequirement;	// IMP=0x00100000000cb9fb
- (void)dealloc;	// IMP=0x00100000000cb972
- (id)initWithPhotoLibraries:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3 andCancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cb76e
- (id)init;	// IMP=0x00100000000cb760

@end

