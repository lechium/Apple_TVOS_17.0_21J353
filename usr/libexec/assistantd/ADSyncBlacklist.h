//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface ADSyncBlacklist : NSObject
{
    NSDictionary *_cachedTimeoutTable;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000a29a0
- (void).cxx_destruct;	// IMP=0x00200000000a204c
- (void)_saveTimeouts:(id)arg1;	// IMP=0x00100000000a1f3c
- (void)saveTimeouts:(id)arg1;	// IMP=0x00100000000a1eaf
- (id)_timeouts:(id)arg1 expiringAfter:(id)arg2;	// IMP=0x00100000000a1da8
- (id)_timeoutsExpiringAfter:(id)arg1;	// IMP=0x00100000000a1d8f
- (id)timeoutsExpiringAfter:(id)arg1;	// IMP=0x00100000000a1c91
- (void)filterBlacklistedKeys:(id)arg1 appSources:(id)arg2;	// IMP=0x00100000000a17e2
- (void)filterBlacklistedKeys:(id)arg1 vocabSources:(id)arg2;	// IMP=0x00100000000a1633
- (void)filterBlacklistedAnchorsFrom:(id)arg1 includingNewRestrictionsFromResponse:(id)arg2;	// IMP=0x00100000000a0ff5
- (void)checkPermissionToSyncSlot:(id)arg1 forApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a0f13
- (void)checkIfAnyUserVocabularyIsBlacklistedForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a0e4d
- (id)_storePath;	// IMP=0x00100000000a0dff
- (id)init;	// IMP=0x00100000000a0cce

@end
