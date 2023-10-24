//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESDebugRecord, DESDodMLServer, DESDodMLTaskSchedulingPolicy, DESRecordSet, MLRPluginSchedulingRecord, NSMutableArray, NSString;
@protocol DESPluginManaging, OS_dispatch_queue;

@interface MLRDodMLTaskWorker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <DESPluginManaging> _plugin;	// 16 = 0x10
    DESDodMLTaskSchedulingPolicy *_policy;	// 24 = 0x18
    _Bool _requestedToStop;	// 32 = 0x20
    NSMutableArray *_results;	// 40 = 0x28
    _Bool _alwaysRun;	// 48 = 0x30
    DESRecordSet *_recordSet;	// 56 = 0x38
    NSString *_bundleIdentifier;	// 64 = 0x40
    NSString *_localeIdentifier;	// 72 = 0x48
    DESDodMLServer *_server;	// 80 = 0x50
    MLRPluginSchedulingRecord *_schedulingRecord;	// 88 = 0x58
    DESDebugRecord *_debugRecord;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000128d8
@property(readonly, nonatomic) DESDebugRecord *debugRecord; // @synthesize debugRecord=_debugRecord;
@property(readonly, nonatomic) MLRPluginSchedulingRecord *schedulingRecord; // @synthesize schedulingRecord=_schedulingRecord;
@property(readonly, nonatomic) DESDodMLServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) DESRecordSet *recordSet; // @synthesize recordSet=_recordSet;
- (void)stop;	// IMP=0x00100000000127b8
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011be9
- (_Bool)updateTaskAfterCompletion:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000011a51
- (_Bool)canRun;	// IMP=0x00100000000118e8
- (_Bool)_ensureEvaluatorWithError:(id *)arg1;	// IMP=0x00100000000117a1
- (void)_downloadAttachments:(id)arg1 recipe:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011520
- (void)_handleRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010557
- (id)_taskDeferByDASError;	// IMP=0x001000000001048c
- (_Bool)taskIsDeferred;	// IMP=0x0010000000010483
- (void)_fetchRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000fd4b
- (void)_attemptRecipeMatchWithRecipeIDs:(id)arg1 keepGoing:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f501
- (_Bool)_rollDieWithRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f1a5
- (id)_matchedRecordSetforRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000f093
@property(readonly, nonatomic) _Bool isPFLPlugin;
- (void)_handleTelemetryInPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e97c
- (id)telemetryResponse;	// IMP=0x001000000000e7a0
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 pluginOverride:(id)arg5 protocolClass:(Class)arg6 alwaysRun:(_Bool)arg7;	// IMP=0x001000000000e536
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 pluginOverride:(id)arg5 protocolClass:(Class)arg6;	// IMP=0x001000000000e50b
- (id)initWithBaseURL:(id)arg1 recordSet:(id)arg2 bundleIdentifier:(id)arg3 localeIdentifier:(id)arg4 pluginOverride:(id)arg5;	// IMP=0x001000000000e4ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
