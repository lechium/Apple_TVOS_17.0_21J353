//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface ISBundleIdentifierIcon
{
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000d541
- (void).cxx_destruct;	// IMP=0x000000000000df8b
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x000000000000deb4
- (double)_aspectRatio;	// IMP=0x000000000000dea6
- (id)makeSymbolResourceProvider;	// IMP=0x000000000000de92
- (id)makeResourceProvider;	// IMP=0x000000000000de7b
- (id)_makeResourceProviderAllowIconResourceFallback:(_Bool)arg1;	// IMP=0x000000000000dae5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000da68
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d9cd
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000000d549

@end
