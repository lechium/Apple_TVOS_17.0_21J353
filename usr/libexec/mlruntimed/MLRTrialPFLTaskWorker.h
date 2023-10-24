//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESDebugRecord, DESDodMLTaskSchedulingPolicy, DESRecordSet, MLRPluginSchedulingRecord, MLRTrialManager, NSString, TRIClient;
@protocol DESPluginManaging, OS_dispatch_queue;

@interface MLRTrialPFLTaskWorker : NSObject
{
    _Bool _alwaysRun;	// 8 = 0x8
    id <DESPluginManaging> _plugin;	// 16 = 0x10
    DESDodMLTaskSchedulingPolicy *_policy;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _requestedToStop;	// 40 = 0x28
    MLRTrialManager *_trialManager;	// 48 = 0x30
    TRIClient *_trialClient;	// 56 = 0x38
    DESRecordSet *_recordSet;	// 64 = 0x40
    NSString *_pluginID;	// 72 = 0x48
    MLRPluginSchedulingRecord *_schedulingRecord;	// 80 = 0x50
    DESDebugRecord *_debugRecord;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000057cc
@property(readonly, nonatomic) DESDebugRecord *debugRecord; // @synthesize debugRecord=_debugRecord;
@property(readonly, nonatomic) MLRPluginSchedulingRecord *schedulingRecord; // @synthesize schedulingRecord=_schedulingRecord;
@property(readonly, nonatomic) NSString *pluginID; // @synthesize pluginID=_pluginID;
@property(readonly, nonatomic) DESRecordSet *recordSet; // @synthesize recordSet=_recordSet;
- (id)telemetryResponse;	// IMP=0x001000000000579c
- (void)stop;	// IMP=0x001000000000570f
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005202
- (void)runSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000045fc
- (void)addSkippedRecordForRecipe:(id)arg1 description:(id)arg2;	// IMP=0x001000000000454f
- (_Bool)loadPluginIfNecessary:(id *)arg1;	// IMP=0x0010000000004498
- (id);	// IMP=0x00100000000043fb
- (id)attachmentsDirURL;	// IMP=0x00100000000043e2
- (id)recipeWithError:(id *)arg1;	// IMP=0x00100000000040e5
- (id)recipeURL;	// IMP=0x00100000000040cc
- (id)policyWithError:(id *)arg1;	// IMP=0x0010000000004047
- (id)policyURL;	// IMP=0x001000000000402e
- (id)URLForfactor:(id)arg1;	// IMP=0x0010000000003b4d
- (_Bool)updateTaskAfterCompletion:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003a44
- (_Bool)canRunWithSchedulingRecord:(id)arg1;	// IMP=0x00100000000038b4
- (id)_taskDeferByDASError;	// IMP=0x00100000000037e9
- (_Bool)taskIsDeferred;	// IMP=0x00100000000037e0
@property(readonly, copy) NSString *description;
- (id)initWithPluginID:(id)arg1 recordSet:(id)arg2 trialManager:(id)arg3 alwaysRun:(_Bool)arg4 pluginOverride:(id)arg5;	// IMP=0x00100000000034f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
