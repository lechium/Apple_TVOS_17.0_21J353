//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMDelegateCaller.h"

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface __HMOperationQueueDelegateCaller : HMDelegateCaller
{
    NSOperationQueue *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000042ebd
- (void)invokeBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042e99
- (id)initWithOperationQueue:(id)arg1;	// IMP=0x0000000000042e2b
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000042d6a
- (id)init;	// IMP=0x0000000000042cfd

@end
