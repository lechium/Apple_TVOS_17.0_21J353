//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class NSMutableArray, NSMutableDictionary;
@protocol CKMapShareURLsToInstalledBundleIDsOperationCallbacks;

@interface CKDMapShareURLsToInstalledBundleIDsOperation : CKDOperation
{
    CDUnknownBlockType _bundleIDsFetchedBlock;	// 8 = 0x8
    NSMutableArray *_shareURLs;	// 16 = 0x10
    NSMutableDictionary *_shareMetadatasByURL;	// 24 = 0x18
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x006000000003035b
- (void).cxx_destruct;	// IMP=0x0000000000031cdb
@property(retain, nonatomic) NSMutableDictionary *shareMetadatasByURL; // @synthesize shareMetadatasByURL=_shareMetadatasByURL;
@property(retain, nonatomic) NSMutableArray *shareURLs; // @synthesize shareURLs=_shareURLs;
@property(copy, nonatomic) CDUnknownBlockType bundleIDsFetchedBlock; // @synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock;
- (void)main;	// IMP=0x0000000000031a63
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000319fd
- (void)_fetchRegisteredBundleIDs;	// IMP=0x0000000000030ea5
- (void)_fetchShareMetadata;	// IMP=0x000000000003065b
- (void)_performCallbackForURL:(id)arg1 withAppBundleIDs:(id)arg2 daemonBundleIDs:(id)arg3 error:(id)arg4;	// IMP=0x00000000000303bd
- (_Bool)makeStateTransition;	// IMP=0x000000000003028a
- (int)operationType;	// IMP=0x000000000003027f
- (id)activityCreate;	// IMP=0x0000000000030256
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000030187

// Remaining properties
@property(retain, nonatomic) id <CKMapShareURLsToInstalledBundleIDsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

