//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADRadarManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0040000000286b53
- (void)createCrashDraft:(id)arg1 withDisplayReason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00400000002866b1
- (void)createDraft:(id)arg1 withDisplayReason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000286686
- (void)_sharedCreateDraft:(id)arg1 withDisplayReason:(id)arg2 reproducibility:(long long)arg3 classification:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000028623b
- (id)_init;	// IMP=0x001000000028620c

@end

