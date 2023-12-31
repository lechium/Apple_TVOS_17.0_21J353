//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSoftwareUpdateEventProviderContext, HMFTimer, HMSoftwareUpdateProgressEvent, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateEventProvider : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDSoftwareUpdateEventProviderContext *_context;	// 16 = 0x10
    NSMutableArray *_scanFutures;	// 24 = 0x18
    CDUnknownBlockType _scanOptionsFactory;	// 32 = 0x20
    HMFTimer *_progressDebounceTimer;	// 40 = 0x28
    HMSoftwareUpdateProgressEvent *_debouncedProgressEvent;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000006c99dc
- (void).cxx_destruct;	// IMP=0x00000000006c9275
@property(retain) HMSoftwareUpdateProgressEvent *debouncedProgressEvent; // @synthesize debouncedProgressEvent=_debouncedProgressEvent;
@property(retain) HMFTimer *progressDebounceTimer; // @synthesize progressDebounceTimer=_progressDebounceTimer;
@property(copy) CDUnknownBlockType scanOptionsFactory; // @synthesize scanOptionsFactory=_scanOptionsFactory;
@property(retain) NSMutableArray *scanFutures; // @synthesize scanFutures=_scanFutures;
@property(readonly) HMDSoftwareUpdateEventProviderContext *context; // @synthesize context=_context;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006c9152
- (void)manager:(id)arg1 didFinishInstallation:(id)arg2;	// IMP=0x00000000006c9079
- (void)manager:(id)arg1 didFailInstallation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000006c8f38
- (void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(_Bool)arg3 waitingForAdmissionControl:(_Bool)arg4 denialReasons:(id)arg5;	// IMP=0x00000000006c8e5f
- (void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(_Bool)arg3 waitingForAdmissionControl:(_Bool)arg4;	// IMP=0x00000000006c8d86
- (void)manager:(id)arg1 didFinishDownload:(id)arg2;	// IMP=0x00000000006c8cad
- (void)manager:(id)arg1 didFailDownload:(id)arg2 withError:(id)arg3;	// IMP=0x00000000006c8b6c
- (void)manager:(id)arg1 didChangeProgressOnDownload:(id)arg2;	// IMP=0x00000000006c8a52
- (void)manager:(id)arg1 scanRequestPostponed:(id)arg2 error:(id)arg3;	// IMP=0x00000000006c88f2
- (void)manager:(id)arg1 scanRequestDidLocateUpdate:(id)arg2 error:(id)arg3;	// IMP=0x00000000006c8792
- (void)respondToScanFuturesWithError:(id)arg1;	// IMP=0x00000000006c86c0
- (void)forwardDebouncedProgressEvent;	// IMP=0x00000000006c84cc
- (void)forwardProgressEventWithProgress:(id)arg1;	// IMP=0x00000000006c8071
- (id)descriptorFromControllerStatus:(id)arg1 controllerDescriptor:(id)arg2 errorCode:(id)arg3;	// IMP=0x00000000006c7d65
- (void)forwardDescriptorEventWithErrorCode:(id)arg1;	// IMP=0x00000000006c7bf4
- (id)scanWithOptions:(unsigned long long)arg1;	// IMP=0x00000000006c79f5
- (id)initWithContext:(id)arg1 scanOptionsFactory:(CDUnknownBlockType)arg2 timerFactory:(CDUnknownBlockType)arg3;	// IMP=0x00000000006c77ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

