//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineOutgoingResources, CPLEnginePushRepository, CPLEngineResourceStorage, CPLPrequeliteClientCache, CPLPrequeliteResourceUploadQueue, CPLPrequeliteStore, NSError;

@interface CPLPrequeliteFlattentPipelineMigrator : NSObject
{
    CPLPrequeliteClientCache *_clientCache;	// 8 = 0x8
    CPLEnginePushRepository *_pushRepository;	// 16 = 0x10
    CPLEngineOutgoingResources *_outgoingResources;	// 24 = 0x18
    CPLEngineResourceStorage *_resources;	// 32 = 0x20
    CPLPrequeliteResourceUploadQueue *_uploadQueue;	// 40 = 0x28
    unsigned long long _countOfMigratedChanges;	// 48 = 0x30
    unsigned long long _countOfDroppedResources;	// 56 = 0x38
    unsigned long long _countOfOutgoingResources;	// 64 = 0x40
    NSError *_lastError;	// 72 = 0x48
    CPLPrequeliteStore *_store;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000658a1
@property(readonly, nonatomic) CPLPrequeliteStore *store; // @synthesize store=_store;
- (_Bool)migrate;	// IMP=0x0010000000065618
- (_Bool)_migratePushQueue:(id)arg1;	// IMP=0x0010000000064f4a
- (_Bool)_discardResourceForUpload:(id)arg1;	// IMP=0x0010000000064dd5
- (_Bool)_enqueueResourcesForChange:(id)arg1 inOutgoingResourcesWithUploadIdentifier:(id)arg2;	// IMP=0x00100000000648e3
- (unsigned long long)_availabilityOfResource:(id)arg1;	// IMP=0x00100000000646a1
@property(readonly, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
- (void)_setLastError:(id)arg1;	// IMP=0x00100000000645f5
- (id)initWithStore:(id)arg1;	// IMP=0x001000000006445c

@end

