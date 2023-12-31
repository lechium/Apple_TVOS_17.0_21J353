//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString, PLCacheMetricsCollectorServerShell;

@interface PLAssetsdResourceAvailabilityService : PLAbstractLibraryServicesManagerService
{
    NSString *_trustedCallerBundleID;	// 8 = 0x8
    int _clientPid;	// 16 = 0x10
    PLCacheMetricsCollectorServerShell *_cacheMetricsShellObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000008f54
@property(readonly, nonatomic) PLCacheMetricsCollectorServerShell *cacheMetricsShellObject; // @synthesize cacheMetricsShellObject=_cacheMetricsShellObject;
- (void)initializeSharedMemoryForCacheMetricsCollector:(id)arg1;	// IMP=0x0010000000008cdf
- (id)appyCorrectionsToAssetWithRequest:(id)arg1 errorCodes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008b14
- (id)appyCorrectionsToResourceWithRequest:(id)arg1 errorCodes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008949
- (id)runVideoRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000871a
- (void)makeResourceUnavailableWithRequest:(id)arg1;	// IMP=0x001000000000861c
- (id)makeResourceAvailableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000083dd
- (id)_clientPidPrefixedTaskIdentifierWithTaskIdentifier:(id)arg1;	// IMP=0x00100000000083aa
- (id)initWithLibraryServicesManager:(id)arg1 shellObject:(id)arg2 trustedCallerBundleID:(id)arg3 clientPid:(int)arg4;	// IMP=0x00100000000082ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

