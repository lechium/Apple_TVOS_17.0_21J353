//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierClient
{
}

- (void)clearAllIdentifiersOfType:(long long)arg1;	// IMP=0x00000000000a28e9
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a2601
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000000000a2353
- (void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000000000a207c
- (void)getIdentifierOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a1cf5
- (void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a131b
- (_Bool)canAccessAdvertisingIdentifier;	// IMP=0x00000000000a0d3b
- (_Bool)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1;	// IMP=0x00000000000a0c23
- (_Bool)hasUninstallEntitlement;	// IMP=0x00000000000a0b8e
- (unsigned int)findAppBundleForExecutableURL:(id)arg1 withContext:(struct LSContext *)arg2;	// IMP=0x00000000000a0aaf
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000000000a0a80

@end
