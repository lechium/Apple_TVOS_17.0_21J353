//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterRuleDirection, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterMulticastBridgingRule : NSObject
{
    HMDNetworkRouterRuleDirection *_direction;	// 8 = 0x8
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_destinationIPAddress;	// 24 = 0x18
    HAPTLVUnsignedNumberValue *_destinationPort;	// 32 = 0x20
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004c4060
+ (id)ruleFromFirewallRuleLAN:(id)arg1;	// IMP=0x001000000044ac17
- (void).cxx_destruct;	// IMP=0x00000000004c4022
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *destinationPort; // @synthesize destinationPort=_destinationPort;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress; // @synthesize destinationIPAddress=_destinationIPAddress;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c3afc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c3a1d
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004c3590
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c30fa
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 destinationIPAddress:(id)arg3 destinationPort:(id)arg4;	// IMP=0x00000000004c3012
- (id)init;	// IMP=0x00000000004c2fe3
- (void)addTo:(id)arg1;	// IMP=0x000000000044915c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

