//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDLostModeManager : HMFObject
{
    struct hmf_unfair_data_lock_s _lock;	// 8 = 0x8
    _Bool _lost;	// 12 = 0xc
}

+ (id)sharedManager;	// IMP=0x0010000000884096
+ (id)logCategory;	// IMP=0x001000000029fadd
@property(readonly, getter=isLost) _Bool lost;
- (id)init;	// IMP=0x0000000000883baa
- (id)attributeDescriptions;	// IMP=0x000000000029fa09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

