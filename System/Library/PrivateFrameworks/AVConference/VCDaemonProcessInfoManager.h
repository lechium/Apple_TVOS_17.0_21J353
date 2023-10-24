//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCDaemonProcessInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 8 = 0x8
}

+ (id)copyProcessInfo;	// IMP=0x00600000000fb4a1
+ (id)sharedManager;	// IMP=0x00600000000fb452
- (id)copyAuditTokenInfo;	// IMP=0x00000000000fb9e8
- (id)copyUniquePidInfo;	// IMP=0x00000000000fb765
- (void)deregisterBlocksForService;	// IMP=0x00000000000fb72c
- (void)registerBlocksForService;	// IMP=0x00000000000fb5f7
- (id)autorelease;	// IMP=0x00000000000fb5ee
- (oneway void)release;	// IMP=0x00000000000fb5e8
- (unsigned long long)retainCount;	// IMP=0x00000000000fb5db
- (id)retain;	// IMP=0x00000000000fb5d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb5c9
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb5bc
- (void)dealloc;	// IMP=0x00000000000fb552
- (id)init;	// IMP=0x00000000000fb4d4

@end
