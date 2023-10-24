//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AKAccountCleanup : NSObject
{
    AKAccountManager *_accountManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_group;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001a5c2
- (void)_saveAccounts:(id)arg1 inMemoryTokens:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a100
- (void)_removeAccounts:(id)arg1;	// IMP=0x0010000000019e39
- (id)_inMemoryTokensForAccounts:(id)arg1;	// IMP=0x0010000000019b3d
- (void)_cleanupAccountsToRemove:(id)arg1 accountsToSave:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001998d
- (id)_eligibleCleanupAccounts;	// IMP=0x0010000000019846
- (void)cleanupStaleAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019154
- (id)init;	// IMP=0x001000000001909b

@end
