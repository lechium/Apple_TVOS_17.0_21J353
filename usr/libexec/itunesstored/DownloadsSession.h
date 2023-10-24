//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadPipeline, DownloadPolicyManager, ExternalDownloadState, NSOrderedSet, SSSQLiteDatabase;

@interface DownloadsSession : NSObject
{
    DownloadPipeline *_pipeline;	// 8 = 0x8
    SSSQLiteDatabase *_database;	// 16 = 0x10
    ExternalDownloadState *_externalState;	// 24 = 0x18
    DownloadPolicyManager *_policyManager;	// 32 = 0x20
}

@property(readonly, nonatomic) DownloadPolicyManager *policyManager; // @synthesize policyManager=_policyManager;
@property(readonly, nonatomic) DownloadPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(readonly, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;
- (id)valueForExternalProperty:(id)arg1 ofDownloadID:(long long)arg2;	// IMP=0x0010000000160e28
- (id)valueForExternalProperty:(id)arg1 ofAssetID:(long long)arg2;	// IMP=0x0010000000160d85
- (id)placeholderDownloadForPurchaseIdentifier:(long long)arg1;	// IMP=0x0010000000160cdb
- (id)placeholderDownloadForPurchase:(id)arg1;	// IMP=0x0010000000160c1e
- (_Bool)placeholderDownloadCanceledForPurchaseIdentifier:(long long)arg1;	// IMP=0x0010000000160bd3
- (id)newEventDictionaryWithDownloadIdentifier:(long long)arg1 assetIdentifier:(long long)arg2;	// IMP=0x0010000000160841
- (id)externalValuesForDownloadID:(long long)arg1;	// IMP=0x001000000016082b
- (id)downloadForStoreDownload:(id)arg1;	// IMP=0x0010000000160733
@property(readonly, nonatomic) NSOrderedSet *activeDownloadIdentifiers;
- (void)dealloc;	// IMP=0x00100000001606d3
- (id)initWithSessionDescriptor:(id)arg1;	// IMP=0x001000000016061e
- (id)init;	// IMP=0x001000000016060a

@end

