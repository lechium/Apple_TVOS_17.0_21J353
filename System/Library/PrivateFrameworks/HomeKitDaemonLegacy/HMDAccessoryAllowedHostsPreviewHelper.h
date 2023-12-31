//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDNetworkRouterFirewallRuleManager, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryAllowedHostsPreviewHelper : HMFObject
{
    HMDHome *_home;	// 8 = 0x8
    HMDNetworkRouterFirewallRuleManager *_firewallRuleManager;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSDate *_expires;	// 32 = 0x20
}

+ (id)helperForHome:(id)arg1;	// IMP=0x00100000002b39c3
- (void).cxx_destruct;	// IMP=0x00000000002b3803
- (id)attributeDescriptions;	// IMP=0x00000000002b373d
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1;	// IMP=0x00000000002b33e4
- (void)fetchAllowedHostsForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b316f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

