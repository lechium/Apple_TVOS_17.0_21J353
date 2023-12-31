//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItemCollection, NSArray, NSString, VUIContentRating, VUIMediaEntityAssetControllerState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemCollectionAssetController : NSObject
{
    _Bool _supportsStartingDownload;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;	// 16 = 0x10
    VUIMediaEntityAssetControllerState *_state;	// 24 = 0x18
    MPMediaItemCollection *_mediaItemCollection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 40 = 0x28
    NSArray *_assetControllers;	// 48 = 0x30
    unsigned long long _fullyDownloadedAssetBytes;	// 56 = 0x38
}

+ (id)_downloadingAssetControllersWithAssetControllers:(id)arg1;	// IMP=0x0010000000171040
+ (id)_stateFromDownloadingAssetControllers:(id)arg1 fullyDownloadedAssetBytes:(unsigned long long)arg2;	// IMP=0x0010000000170c0a
- (void).cxx_destruct;	// IMP=0x0000000000171698
@property(nonatomic) unsigned long long fullyDownloadedAssetBytes; // @synthesize fullyDownloadedAssetBytes=_fullyDownloadedAssetBytes;
@property(retain, nonatomic) NSArray *assetControllers; // @synthesize assetControllers=_assetControllers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) MPMediaItemCollection *mediaItemCollection; // @synthesize mediaItemCollection=_mediaItemCollection;
@property(copy, nonatomic) VUIMediaEntityAssetControllerState *state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool supportsStartingDownload; // @synthesize supportsStartingDownload=_supportsStartingDownload;
- (void)_notifyDelegateStateDidChange:(id)arg1;	// IMP=0x0000000000171437
- (_Bool)_allAssetsDownloaded;	// IMP=0x00000000001712aa
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001711f5
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001710d5
- (void)_onProcessingQueue_setState:(id)arg1 andNotifyDelegate:(_Bool)arg2;	// IMP=0x0000000000170ac7
- (void)_onProcessingQueue_updateStateAndNotifyListeners:(_Bool)arg1;	// IMP=0x0000000000170989
- (void)_onProcessingQueue_cancelAndRemoveDownload;	// IMP=0x000000000017085a
- (void)_onProcessingQueue_resumeDownload;	// IMP=0x00000000001706dc
- (void)_onProcessingQueue_pauseDownload;	// IMP=0x000000000017055e
- (void)_onProcessingQueue_startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000016ffea
- (void)_onProcessingQueue_invalidate;	// IMP=0x000000000016fe24
- (void)_assetControllerStateDidChange:(id)arg1;	// IMP=0x000000000016fd1e
- (void)cancelKeyFetch;	// IMP=0x000000000016fd18
- (void)cancelAndRemoveDownload;	// IMP=0x000000000016fcea
- (void)resumeDownload;	// IMP=0x000000000016fc5b
- (void)pauseDownload;	// IMP=0x000000000016fbcc
- (void)fetchNewKeysForDownloadedVideo;	// IMP=0x000000000016fb8b
- (void)deleteAndRedownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000016fb4a
- (void)startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 preferEnhancedDownload:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000016f7e1
@property(readonly, nonatomic) _Bool contentAllowsCellularDownload;
@property(readonly, nonatomic) _Bool supportsRedownloadingContent;
- (void)invalidate;	// IMP=0x000000000016f671
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
- (void)dealloc;	// IMP=0x000000000016f53a
- (id)init;	// IMP=0x000000000016f4cb
- (id)initWithMediaItemCollection:(id)arg1 serialProcessingDispatchQueue:(id)arg2;	// IMP=0x000000000016f0f4

// Remaining properties
@property(readonly, nonatomic) _Bool allowsManualDownloadRenewal;
@property(readonly, nonatomic) NSString *brandID;
@property(readonly, nonatomic) NSString *brandName;
@property(readonly, nonatomic) VUIContentRating *contentRating;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

