//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperationOptions, HMFTimer, NSArray, NSMutableArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSyncOperation : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_operationCompletions;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    HMFTimer *_delayTimer;	// 32 = 0x20
    CDUnknownBlockType _operationBlock;	// 40 = 0x28
    HMDSyncOperationOptions *_options;	// 48 = 0x30
}

+ (id)cloudOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0060000000660cf6
+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(_Bool)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0060000000660c2f
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0060000000660b80
+ (id)cloudFetchSyncOperationWithCloudConflict:(_Bool)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0060000000660ae6
+ (id)cloudVerifyAccountSyncOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000660a4f
+ (id)cloudForcePushSyncOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00600000006609bb
+ (id)cloudPushSyncOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000660927
+ (id)cancelOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000660890
+ (id)postFetchOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00600000006607f9
+ (id)queryDatabaseOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000660762
- (void).cxx_destruct;	// IMP=0x00000000006606fe
@property(readonly, nonatomic) HMDSyncOperationOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)removeAllOperationCompletions;	// IMP=0x0000000000660640
- (void)updateOperationCompletionsWithArray:(id)arg1;	// IMP=0x00000000006605ca
@property(readonly) NSArray *operationCompletions;
@property(readonly, nonatomic) NSString *zoneName;
@property(readonly, nonatomic) unsigned long long operationType;
- (id)description;	// IMP=0x00000000006603f4
- (id)_initWithOptions:(id)arg1 syncBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000660293

@end

