//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMSDTransactionStore : NSObject
{
}

+ (void)takeKeepAliveTransaction:(id)arg1 withQueue:(id)arg2 whilePerformingSyncBlock:(CDUnknownBlockType)arg3;	// IMP=0x0020000000046b31
+ (void)takeKeepAliveTransaction:(id)arg1 withQueue:(id)arg2 whilePerformingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000468f8
+ (void)takeKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004686a
+ (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x00100000000465a1
+ (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x001000000004625f
+ (id)transactionsCount;	// IMP=0x00100000000461da
+ (id)transactionsAccessQueue;	// IMP=0x0010000000046159
+ (id)transactions;	// IMP=0x00100000000460d4

@end

