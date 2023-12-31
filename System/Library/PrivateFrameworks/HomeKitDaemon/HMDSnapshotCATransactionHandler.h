//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class BSPortDeathWatcher, CAContext, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSnapshotCATransactionHandler : HMFObject
{
    CAContext *_snapshotContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientQueue;	// 16 = 0x10
    BSPortDeathWatcher *_backboardServicesWatcher;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000003e5abe
+ (id)sharedHandler;	// IMP=0x00100000003e5a8e
- (void).cxx_destruct;	// IMP=0x00000000003e571c
@property(retain, nonatomic) BSPortDeathWatcher *backboardServicesWatcher; // @synthesize backboardServicesWatcher=_backboardServicesWatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) CAContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
- (struct CGImage *)createSnapshotCGImageRef:(id)arg1;	// IMP=0x00000000003e5483
- (void)_deleteSlotWithIdentifier:(id)arg1 filePath:(id)arg2 snapshotCATransaction:(id)arg3;	// IMP=0x00000000003e52de
- (void)deleteSlotWithIdentifier:(id)arg1 filePath:(id)arg2;	// IMP=0x00000000003e51bd
- (id)_createSlotWithFilePath:(id)arg1 snapshotCATransaction:(id)arg2;	// IMP=0x00000000003e503e
- (void)clearSlotWithIdentifier:(id)arg1;	// IMP=0x00000000003e4ee0
- (void)fillSlotWithIdentifier:(id)arg1 filePath:(id)arg2;	// IMP=0x00000000003e4d01
- (id)createSlotWithFilePath:(id)arg1;	// IMP=0x00000000003e4b77
- (void)_backboardServicesRelaunched;	// IMP=0x00000000003e4a58
- (void)_createSnapshotContext;	// IMP=0x00000000003e49d4
- (id)init;	// IMP=0x00000000003e48f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

