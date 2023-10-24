//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSBackgroundActivityScheduler, NSString;

__attribute__((visibility("hidden")))
@interface HMDUpdater : HMFObject
{
    _Bool _internal;	// 8 = 0x8
    NSBackgroundActivityScheduler *_backgroundScheduler;	// 16 = 0x10
    NSString *_model;	// 24 = 0x18
    NSString *_targetKitUUID;	// 32 = 0x20
    NSString *_targetKitURLString;	// 40 = 0x28
    NSString *_targetKitDateString;	// 48 = 0x30
    NSString *_currentKitUUID;	// 56 = 0x38
    NSString *_platformString;	// 64 = 0x40
    NSString *_buildid;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000006a4ecb
+ (id)sharedInstance;	// IMP=0x00100000006a4e9b
+ (void)initialize;	// IMP=0x00100000006a4dde
- (void).cxx_destruct;	// IMP=0x00000000006a45bf
@property(nonatomic) _Bool internal; // @synthesize internal=_internal;
@property(retain, nonatomic) NSString *buildid; // @synthesize buildid=_buildid;
@property(retain, nonatomic) NSString *platformString; // @synthesize platformString=_platformString;
@property(retain, nonatomic) NSString *currentKitUUID; // @synthesize currentKitUUID=_currentKitUUID;
@property(retain, nonatomic) NSString *targetKitDateString; // @synthesize targetKitDateString=_targetKitDateString;
@property(retain, nonatomic) NSString *targetKitURLString; // @synthesize targetKitURLString=_targetKitURLString;
@property(retain, nonatomic) NSString *targetKitUUID; // @synthesize targetKitUUID=_targetKitUUID;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSBackgroundActivityScheduler *backgroundScheduler; // @synthesize backgroundScheduler=_backgroundScheduler;
- (id)logIdentifier;	// IMP=0x00000000006a446a
- (void)_scheduleUpdateCheck;	// IMP=0x00000000006a4090
- (void)updateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006a3ffe
- (int)_executeScript:(const char *)arg1;	// IMP=0x00000000006a3ff3
- (id)_downloadURL;	// IMP=0x00000000006a3ce4
- (void)_clearInstalledRootUUID;	// IMP=0x00000000006a3cb8
- (void)_info;	// IMP=0x00000000006a3b24
- (int)_clean;	// IMP=0x00000000006a39a9
- (int)_reboot;	// IMP=0x00000000006a3848
- (int)_uninstall;	// IMP=0x00000000006a371d
- (int)_rebuild;	// IMP=0x00000000006a360c
- (int)_install;	// IMP=0x00000000006a3401
- (int)_download;	// IMP=0x00000000006a3201
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;	// IMP=0x00000000006a2a34
- (void)_fetchManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006a25f8
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000006a2424
- (id)init;	// IMP=0x00000000006a2306

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
