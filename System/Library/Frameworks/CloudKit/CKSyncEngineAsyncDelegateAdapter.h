//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKSyncEngineDelegate;

@interface CKSyncEngineAsyncDelegateAdapter : NSObject
{
    id <CKSyncEngineDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000110271
@property(nonatomic) __weak id <CKSyncEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)syncEngine:(id)arg1 nextFetchChangesOptionsForContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010fcb2
- (void)syncEngine:(id)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(id)arg2 recordIDs:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000010fbc7
- (void)syncEngine:(id)arg1 nextRecordZoneChangeBatchForContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010fb0e
- (void)syncEngine:(id)arg1 handleEvent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010fa6e
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000010f957

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

