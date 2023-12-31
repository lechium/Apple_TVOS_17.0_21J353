//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSFilePresenterRelinquishment : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSCountedSet *_blockingAccessClaimIDs;	// 16 = 0x10
    NSMutableArray *_relinquishReplies;	// 24 = 0x18
    CDUnknownBlockType _reacquirer;	// 32 = 0x20
    NSMutableArray *_blockingPrerelinquishReplies;	// 40 = 0x28
    _Bool _prerelinquishInProgress;	// 48 = 0x30
}

- (void)didRelinquish;	// IMP=0x00000000007f24a1
- (void)_locked_addPrerelinquishReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f23f2
- (_Bool)_locked_addRelinquishReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f238f
- (void)removeAllBlockingAccessClaimIDs;	// IMP=0x00000000007f2289
- (void)removeBlockingAccessClaimID:(id)arg1;	// IMP=0x00000000007f226a
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;	// IMP=0x00000000007f2162
- (void)setReacquirer:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f2062
- (void)performRelinquishmentToAccessClaimIfNecessary:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000000007f1d0a
- (void)performRemoteDeletePrerelinquishmentIfNecessaryUsingBlock:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000007f18a6
- (void)dealloc;	// IMP=0x00000000007f182b

@end

