//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIReusePool : NSObject
{
    NSMutableSet *_reuseSet;	// 8 = 0x8
    unsigned long long _purgePolicy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00600000008b97db
+ (void)__applicationWillEnterForeground:(id)arg1;	// IMP=0x00600000008b97cd
+ (void)__applicationDidEnterBackground:(id)arg1;	// IMP=0x00600000008b9588
- (void).cxx_destruct;	// IMP=0x00000000008b9d9a
- (void)drainPool;	// IMP=0x00000000008b9d35
@property(readonly, nonatomic) unsigned long long purgePolicy;
- (id)reusableObject;	// IMP=0x00000000008b9bde
- (void)addObject:(id)arg1;	// IMP=0x00000000008b9afc
- (id)initWithPolicy:(unsigned long long)arg1;	// IMP=0x00000000008b99c0
- (id)init;	// IMP=0x00000000008b99a9

@end
