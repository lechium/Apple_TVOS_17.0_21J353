//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLRExtensionHostContext, NSExtension, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface MLRExtensionPluginManager : NSObject
{
    NSExtension *_extension;	// 8 = 0x8
    NSUUID *_sessionID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_syncQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;	// 32 = 0x20
    MLRExtensionHostContext *_hostContext;	// 40 = 0x28
    _Bool _stopped;	// 48 = 0x30
    NSString *_bundleIdentifier;	// 56 = 0x38
}

+ (id)pluginManagerForBundleIdentifier:(id)arg1 endpoint:(id)arg2;	// IMP=0x0020000000007780
- (void).cxx_destruct;	// IMP=0x002000000000af25
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ab3e
- (long long)_graceIntervalBeforeUnloading;	// IMP=0x001000000000ab2e
- (id)performTrialTask:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000000a512
- (id)performTask:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000009ed9
- (id)sandboxExtensionsForTask:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000009bf5
- (id)performDodMLTask:(id)arg1 outError:(id *)arg2;	// IMP=0x00100000000092da
- (id)_failToPerformErrorWithError:(id)arg1;	// IMP=0x0010000000009021
- (id)_failToGetHostError;	// IMP=0x0010000000008ebc
- (id)_skipTaskError;	// IMP=0x0010000000008d57
- (id)_createSandBoxExtensions:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000087f3
- (id)_recordDirectoriesForIdentifier:(id)arg1;	// IMP=0x0010000000008789
- (id)telemetryWithRecordSet:(id)arg1;	// IMP=0x0010000000008781
- (_Bool)shouldDownloadURL:(id)arg1 forTask:(id)arg2;	// IMP=0x0010000000008779
- (void)unload;	// IMP=0x0010000000008718
- (void)_unload;	// IMP=0x0010000000008652
- (void)_triggerSimulatedCrash;	// IMP=0x0010000000008520
- (void)_killExtension:(id)arg1 afterInterval:(long long)arg2;	// IMP=0x0010000000008449
- (long long)_graceIntervalBeforeKilling;	// IMP=0x0010000000008424
- (_Bool)shouldTriggerSimulatedCrash;	// IMP=0x001000000000841a
- (void)_activateExtensionIfNecessary;	// IMP=0x0010000000008264
@property(readonly, copy) NSString *description;
- (id)extensionName;	// IMP=0x0010000000008163
- (void)_setupExtensionHandlers;	// IMP=0x0010000000007d74
- (id)initWithExtension:(id)arg1;	// IMP=0x0010000000007adc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

