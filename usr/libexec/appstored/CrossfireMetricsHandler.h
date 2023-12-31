//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC9appstored6LogKey;

@interface CrossfireMetricsHandler
{
    _Bool _collectingMetrics;	// 8 = 0x8
    _TtC9appstored6LogKey *_logKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a3a23
- (void)_removeAppUsageSessionForBundleID:(id)arg1;	// IMP=0x00100000000a377f
- (void)_handleAppDeletion:(id)arg1;	// IMP=0x00100000000a3779
- (_Bool)shouldCollectMetrics;	// IMP=0x00100000000a3733
- (void)recordInstallEventsForBundleIDs:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x00100000000a35f6
- (void)recordDeletedBundleIDs:(id)arg1;	// IMP=0x00100000000a35dc
- (id)logKey;	// IMP=0x00100000000a3569
- (_Bool)isCandidateAppProxy:(id)arg1 isMetadataLookup:(_Bool)arg2;	// IMP=0x00100000000a3356
- (_Bool)isCandidateAppMetadata:(id)arg1;	// IMP=0x00100000000a31d0
- (_Bool)includeClipDetails;	// IMP=0x00100000000a31c8
- (long long)appUsageType;	// IMP=0x00100000000a31bd
- (id)init;	// IMP=0x00100000000a316b

@end

