//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKRecordID, NSError;

@protocol CKMarkAssetBrokenOperationCallbacks <CKOperationCallbacks>
- (void)handleMarkAssetBrokenCompletionWithRepairRecordID:(CKRecordID *)arg1 error:(NSError *)arg2;
@end

