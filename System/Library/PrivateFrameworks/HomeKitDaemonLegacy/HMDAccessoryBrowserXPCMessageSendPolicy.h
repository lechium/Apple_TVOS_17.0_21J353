//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDAccessoryBrowserXPCMessageSendPolicy
{
    unsigned long long _requiredEntitlements;	// 8 = 0x8
}

@property(readonly) unsigned long long requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
- (id)attributeDescriptions;	// IMP=0x0000000000b53f2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b53f1f
- (unsigned long long)hash;	// IMP=0x0000000000b53f0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b53e17
- (_Bool)canSendWithPolicyParameters:(id)arg1;	// IMP=0x0000000000b53d4a
- (id)initWithRequiredEntitlements:(unsigned long long)arg1;	// IMP=0x0000000000b53d02

@end

