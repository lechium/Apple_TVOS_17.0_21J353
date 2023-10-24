//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFNetAddress, NSArray;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleLANStatic
{
    unsigned char _transportProtocol;	// 8 = 0x8
    unsigned short _portStart;	// 10 = 0xa
    unsigned short _portEnd;	// 12 = 0xc
    HMFNetAddress *_ipAddress;	// 16 = 0x10
    NSArray *_icmpTypes;	// 24 = 0x18
}

+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ruleDictionary:(id)arg8 error:(id *)arg9;	// IMP=0x0060000000cde54a
- (void).cxx_destruct;	// IMP=0x0000000000cde504
@property(readonly, nonatomic) NSArray *icmpTypes; // @synthesize icmpTypes=_icmpTypes;
@property(readonly, nonatomic) unsigned short portEnd; // @synthesize portEnd=_portEnd;
@property(readonly, nonatomic) unsigned short portStart; // @synthesize portStart=_portStart;
@property(readonly, nonatomic) HMFNetAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(readonly, nonatomic) unsigned char transportProtocol; // @synthesize transportProtocol=_transportProtocol;
- (id)prettyJSONDictionary;	// IMP=0x0000000000cde1dc
- (id)attributeDescriptions;	// IMP=0x0000000000cddf76
- (unsigned long long)hash;	// IMP=0x0000000000cddec3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cddcce
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 transportProtocol:(unsigned char)arg8 ipAddress:(id)arg9 portStart:(unsigned short)arg10 portEnd:(unsigned short)arg11 icmpTypes:(id)arg12;	// IMP=0x0000000000cddbaa

@end
