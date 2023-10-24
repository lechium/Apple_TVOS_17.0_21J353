//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeObjectChangeHandler : HMFObject
{
    HMDHome *_home;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003d2d0
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void)handleObjectUpdate:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000003c018
- (void)handleObjectRemove:(id)arg1 message:(id)arg2;	// IMP=0x000000000003b9e7
- (void)handleObjectAdd:(id)arg1 message:(id)arg2;	// IMP=0x000000000003b58a
- (id)initWithHome:(id)arg1;	// IMP=0x000000000003b4f6

@end

