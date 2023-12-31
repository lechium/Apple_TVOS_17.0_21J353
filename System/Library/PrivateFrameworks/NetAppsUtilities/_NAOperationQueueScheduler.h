//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface _NAOperationQueueScheduler : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000017c56
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017b00
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001792d
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017917
- (id)initWithMaxConcurrentOperationCount:(unsigned long long)arg1;	// IMP=0x0000000000017894

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

