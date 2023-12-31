//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESDebugRecord, MLRTrialManager, NSString;
@protocol DESPluginManaging, OS_dispatch_queue;

@interface MLRBMLTTaskWorker : NSObject
{
    _Bool _alwaysRun;	// 8 = 0x8
    id <DESPluginManaging> _plugin;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _Bool _requestedToStop;	// 32 = 0x20
    unsigned long long _numOfTasksPerformed;	// 40 = 0x28
    MLRTrialManager *_trialManager;	// 48 = 0x30
    DESDebugRecord *_debugRecord;	// 56 = 0x38
    NSString *_pluginID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000001d919
@property(readonly, nonatomic) NSString *pluginID; // @synthesize pluginID=_pluginID;
@property(readonly, nonatomic) DESDebugRecord *debugRecord; // @synthesize debugRecord=_debugRecord;
- (void)stop;	// IMP=0x000000000001d833
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ce9f
- (void)performAfterPluginRun;	// IMP=0x001000000001cdc2
- (void)performAfterTask:(id)arg1 duration:(double)arg2 error:(id)arg3;	// IMP=0x001000000001c988
- (_Bool)updateTaskAfterCompletion:(id)arg1 task:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001c8af
- (_Bool)canRunTask:(id)arg1;	// IMP=0x001000000001c72a
- (_Bool)hasDataForTask:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001c580
- (_Bool)allowTaskWithTaskPolicy:(id)arg1;	// IMP=0x001000000001c13e
- (_Bool)allowTaskWithPluginPolicy:(id)arg1;	// IMP=0x001000000001bd2e
- (_Bool)updateSchedulingRecordWithTask:(id)arg1 completionDate:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001bc85
- (id)schedulingRecordForTask:(id)arg1;	// IMP=0x001000000001bbfe
- (_Bool)updateSchedulingRecordWithPlugin:(id)arg1 completionDate:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001bb73
- (id)schedulingRecordForPlugin:(id)arg1;	// IMP=0x001000000001bb26
@property(readonly, copy) NSString *description;
- (id)initWithPlugin:(id)arg1 trialManager:(id)arg2 alwaysRun:(_Bool)arg3;	// IMP=0x001000000001b88f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

