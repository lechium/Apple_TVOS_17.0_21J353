//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSBundleProxiesOfTypeQuery
{
    unsigned long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000006d38d
+ (id)queryWithType:(unsigned long long)arg1;	// IMP=0x006000000006ca9d
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006d420
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006d395
- (unsigned long long)hash;	// IMP=0x000000000006d341
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d235
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x000000000006d22d
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ce24
- (_Bool)bundleUnitMeetsRequirements:(unsigned int)arg1 bundleData:(const struct LSBundleData *)arg2 context:(struct LSContext *)arg3;	// IMP=0x000000000006cb86

@end
