//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

__attribute__((visibility("hidden")))
@interface SSVBarrierOperationQueue : NSOperationQueue
{
}

- (void)addBarrierOperation:(id)arg1;	// IMP=0x00000000001472a8
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x0000000000146f55
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000146f02
- (void)addOperation:(id)arg1;	// IMP=0x0000000000146ca1

@end

