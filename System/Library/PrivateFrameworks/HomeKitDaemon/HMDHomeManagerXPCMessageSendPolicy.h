//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHomeManagerXPCMessageSendPolicy
{
    _Bool _active;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    unsigned long long _entitlements;	// 24 = 0x18
}

@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)attributeDescriptions;	// IMP=0x0000000000a9dc7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a9dc6f
- (unsigned long long)hash;	// IMP=0x0000000000a9dc33
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a9dae0
- (_Bool)canSendWithPolicyParameters:(id)arg1;	// IMP=0x0000000000a9d9c5
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 active:(_Bool)arg3;	// IMP=0x0000000000a9d931
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000a9d91c

@end

