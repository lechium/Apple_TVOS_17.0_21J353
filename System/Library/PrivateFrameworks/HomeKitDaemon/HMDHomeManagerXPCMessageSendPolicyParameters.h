//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHomeManagerXPCMessageSendPolicyParameters
{
    _Bool _active;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
}

@property(getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)attributeDescriptions;	// IMP=0x000000000052567b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005255f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005255eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005254c5
- (id)signature;	// IMP=0x000000000052540e
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000005253ca

@end
