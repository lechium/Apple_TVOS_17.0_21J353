//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_EXExtensionIdentity.h"

@class LSBundleRecord, NSDictionary, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface _EXExtensionValueIdentity : _EXExtensionIdentity
{
    unsigned char _userElection;	// 8 = 0x8
    unsigned char _defaultUserElection;	// 9 = 0x9
    unsigned int _platform;	// 12 = 0xc
    NSString *_extensionPointIdentifier;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_bundleVersion;	// 32 = 0x20
    LSBundleRecord *_containingBundleRecord;	// 40 = 0x28
    NSUUID *_UUID;	// 48 = 0x30
    NSString *_localizedName;	// 56 = 0x38
    NSURL *_url;	// 64 = 0x40
    NSURL *_containingURL;	// 72 = 0x48
    NSDictionary *_sdkDictionary;	// 80 = 0x50
    NSDictionary *_extensionDictionary;	// 88 = 0x58
    NSDictionary *_attributes;	// 96 = 0x60
    NSDictionary *_entitlements;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002e8d6
- (void).cxx_destruct;	// IMP=0x000000000002ef66
- (unsigned char)defaultUserElection;	// IMP=0x000000000002ef55
- (unsigned char)userElection;	// IMP=0x000000000002ef44
- (id)entitlements;	// IMP=0x000000000002ef2e
- (id)attributes;	// IMP=0x000000000002ef18
- (id)extensionDictionary;	// IMP=0x000000000002ef02
- (id)sdkDictionary;	// IMP=0x000000000002eeec
- (id)containingURL;	// IMP=0x000000000002eed6
- (id)url;	// IMP=0x000000000002eec0
- (id)localizedName;	// IMP=0x000000000002eeaa
- (id)UUID;	// IMP=0x000000000002ee94
- (unsigned int)platform;	// IMP=0x000000000002ee84
- (id)containingBundleRecord;	// IMP=0x000000000002ee6e
- (id)bundleVersion;	// IMP=0x000000000002ee58
- (id)bundleIdentifier;	// IMP=0x000000000002ee42
- (id)extensionPointIdentifier;	// IMP=0x000000000002ee2c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e8de
- (id)applicationExtensionRecord;	// IMP=0x000000000002e8ce
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;	// IMP=0x000000000002e845

@end

