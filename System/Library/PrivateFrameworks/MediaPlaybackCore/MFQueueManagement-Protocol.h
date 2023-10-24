//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MFQueuePlayerItem;

@protocol MFQueueManagement
- (void)reloadCurrentItemWithReason:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)clearPlaybackQueue;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1 allowReuse:(_Bool)arg2;
- (void)restoreQueue:(void (^)(NSError *))arg1;
@property(nonatomic, readonly) id <MFQueuePlayerItem> currentQueueItem;
@end

