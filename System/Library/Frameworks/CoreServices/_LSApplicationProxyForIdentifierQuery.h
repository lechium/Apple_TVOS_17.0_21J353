//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForIdentifierQuery
{
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000006e706
+ (id)alwaysAllowedBundleIdentifiers;	// IMP=0x004000000006e050
+ (id)queryWithIdentifier:(id)arg1;	// IMP=0x004000000006dfb5
- (void).cxx_destruct;	// IMP=0x000000000006e89b
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e7c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006e70e
- (unsigned long long)hash;	// IMP=0x000000000006e678
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e4b1
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x000000000006e3c9
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006e0bc

@end

