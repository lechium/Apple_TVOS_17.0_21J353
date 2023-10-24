//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEOAPServiceLocal : NSObject
{
}

- (void)runAggregationTasks;	// IMP=0x0020000000001f5d
- (void)showEvalDataWithVisitorBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001ef0
- (void)flushEvalData;	// IMP=0x0010000000001eac
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x0010000000001e5b
- (void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000001c80
- (void)reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001b34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

