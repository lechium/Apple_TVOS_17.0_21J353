//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

__attribute__((visibility("hidden")))
@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy
{
    _Bool _requiresEntitlement;	// 8 = 0x8
}

+ (id)defaultPolicy;	// IMP=0x0060000000b52435
+ (id)policyWithEntitlementRequirement:(_Bool)arg1;	// IMP=0x0060000000b523da
@property(readonly) _Bool requiresEntitlement; // @synthesize requiresEntitlement=_requiresEntitlement;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b523bd
- (unsigned long long)hash;	// IMP=0x0000000000b523a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b522fe
- (id)__initWithEntitlementRequirement:(_Bool)arg1;	// IMP=0x0000000000b522bc
- (id)init;	// IMP=0x0000000000b52214

@end
