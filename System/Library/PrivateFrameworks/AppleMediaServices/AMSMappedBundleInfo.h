//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMappedBundleInfo : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_clientName;	// 16 = 0x10
    NSString *_clientVersion;	// 24 = 0x18
    NSString *_scheme;	// 32 = 0x20
    NSString *_secureScheme;	// 40 = 0x28
    NSString *_accountMediaType;	// 48 = 0x30
    NSString *_proxyAppBundleID;	// 56 = 0x38
    NSString *_userAgentSuffix;	// 64 = 0x40
}

+ (id)_clientVersionFromProcessInfo:(id)arg1 clientName:(id)arg2;	// IMP=0x00400000002cb9d9
+ (id)_clientNameFromProcessInfo:(id)arg1;	// IMP=0x00400000002cb89b
+ (id)_accountMediaTypeForClientName:(id)arg1 bundleID:(id)arg2;	// IMP=0x00400000002cb628
+ (id)bundleInfoForMobileAppStoreWithProcessInfo:(id)arg1;	// IMP=0x00400000002cafc8
+ (id)currentBundleInfo;	// IMP=0x00400000002caf62
+ (id)bundleInfoForProcessInfo:(id)arg1;	// IMP=0x00400000002cae60
+ (id)accountMediaTypeInfoForProcessInfo:(id)arg1;	// IMP=0x00400000002cae58
- (void).cxx_destruct;	// IMP=0x00000000002cbcf1
@property(retain, nonatomic) NSString *userAgentSuffix; // @synthesize userAgentSuffix=_userAgentSuffix;
@property(retain, nonatomic) NSString *proxyAppBundleID; // @synthesize proxyAppBundleID=_proxyAppBundleID;
@property(retain, nonatomic) NSString *accountMediaType; // @synthesize accountMediaType=_accountMediaType;
@property(retain, nonatomic) NSString *secureScheme; // @synthesize secureScheme=_secureScheme;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)_initWithClient:(long long)arg1 processInfo:(id)arg2;	// IMP=0x00000000002cb01a

@end

