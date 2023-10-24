//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet, NSDate, NSDictionary, NSMapTable;
@protocol CPLCloudKitTrackableTask;

@interface _CPLCloudKitTaskContext : NSObject
{
    NSMapTable *_contexts;	// 8 = 0x8
    NSCountedSet *_classCounts;	// 16 = 0x10
    NSCountedSet *_cellularClassCounts;	// 24 = 0x18
    NSDate *_lastOperationDate;	// 32 = 0x20
    Class _lastOperationClass;	// 40 = 0x28
    _Bool _cancelled;	// 48 = 0x30
    id <CPLCloudKitTrackableTask> _task;	// 56 = 0x38
    NSDate *_startDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000de456
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) id <CPLCloudKitTrackableTask> task; // @synthesize task=_task;
@property(readonly, nonatomic) NSArray *operationStatusDictionaries;
@property(readonly, nonatomic) NSDictionary *statusPerOperationType;
- (_Bool)_operationAllowsCellular:(id)arg1;	// IMP=0x00100000000dd783
- (id)_priorityDescriptionForOperation:(id)arg1;	// IMP=0x00100000000dd657
@property(readonly, nonatomic) NSCountedSet *countOfOperationWithCellularAccessClasses;
@property(readonly, nonatomic) NSCountedSet *countOfOperationClasses;
- (void)cancelAllOperations;	// IMP=0x00100000000dd513
- (id)contextForOperation:(id)arg1;	// IMP=0x00100000000dd4fd
- (_Bool)hasBlockedOperationsIncludingBackground:(_Bool)arg1;	// IMP=0x00100000000dd2d3
- (void)operationDidFinish:(id)arg1;	// IMP=0x00100000000dd246
- (void)operationWillStart:(id)arg1 context:(id)arg2;	// IMP=0x00100000000dd1a6
- (id)initWithTask:(id)arg1;	// IMP=0x00100000000dd0df

@end
