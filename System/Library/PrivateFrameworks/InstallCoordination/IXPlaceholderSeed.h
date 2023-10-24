//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface IXPlaceholderSeed
{
    NSString *_bundleName;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    unsigned long long _installType;	// 24 = 0x18
    unsigned long long _placeholderType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000316d4
- (void).cxx_destruct;	// IMP=0x000000000003187a
@property(nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property(nonatomic) unsigned long long installType; // @synthesize installType=_installType;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, nonatomic) _Bool isAppExtension;
- (Class)clientPromiseClass;	// IMP=0x00000000000317c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000316dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003155e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031396

@end

