//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ASDTaskScheduler;

__attribute__((visibility("hidden")))
@interface ASDPromiseObserver : NSObject
{
    CDUnknownBlockType _valueBlock;	// 8 = 0x8
    CDUnknownBlockType _errorBlock;	// 16 = 0x10
    id <ASDTaskScheduler> _scheduler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000357dd
- (void)notifyRejectedWithError:(id)arg1;	// IMP=0x00000000000356e4
- (void)notifyResolvedWithValue:(id)arg1;	// IMP=0x00000000000355eb
- (id)initWithValueBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 scheduler:(id)arg3;	// IMP=0x000000000003550b

@end

