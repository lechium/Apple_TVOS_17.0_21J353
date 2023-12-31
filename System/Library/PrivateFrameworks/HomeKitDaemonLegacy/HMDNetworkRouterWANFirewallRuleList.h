//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterWANFirewallRuleList : NSObject
{
    NSMutableArray *_portRules;	// 8 = 0x8
    NSMutableArray *_icmpRules;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004c82bb
- (void).cxx_destruct;	// IMP=0x00000000004c5a03
@property(retain, nonatomic) NSMutableArray *icmpRules; // @synthesize icmpRules=_icmpRules;
@property(retain, nonatomic) NSMutableArray *portRules; // @synthesize portRules=_portRules;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c5711
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c5683
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004c5184
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c4d9a
- (id)initWithPortRules:(id)arg1 icmpRules:(id)arg2;	// IMP=0x00000000004c4d01
- (id)init;	// IMP=0x00000000004c4cd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

