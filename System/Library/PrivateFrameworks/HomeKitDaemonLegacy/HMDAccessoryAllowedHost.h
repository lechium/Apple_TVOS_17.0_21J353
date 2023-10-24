//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleWAN, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryAllowedHost : HMFObject
{
    HMDNetworkRouterFirewallRuleWAN *_cachedWANRule;	// 8 = 0x8
    NSString *_jsonWANRule;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000641b41
+ (id)allowedHostsFromFirewallRuleConfiguration:(id)arg1;	// IMP=0x00100000006418b1
+ (id)allowedHostsFromJSONFirewallWANRules:(id)arg1;	// IMP=0x0010000000641860
+ (id)allowedHostForFullWANAccess;	// IMP=0x0010000000641830
- (void).cxx_destruct;	// IMP=0x0000000000641321
@property(readonly) NSString *jsonWANRule; // @synthesize jsonWANRule=_jsonWANRule;
- (id)attributeDescriptions;	// IMP=0x0000000000641175
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000641090
- (unsigned long long)hash;	// IMP=0x000000000064104c
- (void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1;	// IMP=0x0000000000640c8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000640b32
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000640a90
@property(readonly) unsigned long long purpose;
@property(readonly) NSSet *addresses;
@property(readonly) NSString *name;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWAN *wanRule;
- (id)initWithWANRule:(id)arg1;	// IMP=0x000000000064087c
- (id)initWithJSONFirewallWANRule:(id)arg1;	// IMP=0x0000000000640810

@end

