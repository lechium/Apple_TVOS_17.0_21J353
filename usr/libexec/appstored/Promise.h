//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock, PromiseResult;

@interface Promise : NSObject
{
    NSMutableArray *;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSRecursiveLock *_stateLock;	// 24 = 0x18
    PromiseResult *_result;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000041ab4
- (id)joinWithPromise:(id)arg1;	// IMP=0x00100000000413f3
- (void)thenPerform:(CDUnknownBlockType)arg1 orCatchError:(CDUnknownBlockType)arg2 onScheduler:(id)arg3;	// IMP=0x0010000000040d93
- (id)initOnScheduler:(id)arg1 withExecutor:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040b7b
- (id)init;	// IMP=0x0010000000040ab4

@end

