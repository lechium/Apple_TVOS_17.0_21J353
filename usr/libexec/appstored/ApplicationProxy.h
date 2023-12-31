//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IXApplicationIdentity, LSApplicationRecord, MIStoreMetadata, NSArray, NSData, NSNumber, NSString, NSURL, Optional;

@interface ApplicationProxy : NSObject
{
    unsigned short _signingFlags;	// 8 = 0x8
    NSNumber *_appClipIsConfiguredForIAPValue;	// 16 = 0x10
    Optional *_extensionReceiptURLs;	// 24 = 0x18
    Optional *_storeMetadata;	// 32 = 0x20
    _Bool _appClip;	// 40 = 0x28
    _Bool _appClipIsConfiguredForIAP;	// 41 = 0x29
    _Bool _appleSigned;	// 42 = 0x2a
    _Bool _profileValidated;	// 43 = 0x2b
    _Bool _hasMIDBasedSINF;	// 44 = 0x2c
    _Bool _missingRequiredSINF;	// 45 = 0x2d
    _Bool _installed;	// 46 = 0x2e
    _Bool _offloaded;	// 47 = 0x2f
    _Bool _placeholder;	// 48 = 0x30
    _Bool _arcade;	// 49 = 0x31
    _Bool _beta;	// 50 = 0x32
    _Bool _storeOriginated;	// 51 = 0x33
    LSApplicationRecord *_record;	// 56 = 0x38
    NSNumber *_downloaderDSID;	// 64 = 0x40
    NSNumber *_familyID;	// 72 = 0x48
    NSNumber *_purchaserDSID;	// 80 = 0x50
    NSString *_parentApplicationBundleID;	// 88 = 0x58
    unsigned long long _appPlatform;	// 96 = 0x60
    NSString *_bundleID;	// 104 = 0x68
    NSString *_bundlePath;	// 112 = 0x70
    NSURL *_bundleURL;	// 120 = 0x78
    NSString *_bundleVersion;	// 128 = 0x80
    NSString *_canonicalExecutablePath;	// 136 = 0x88
    NSString *_localizedName;	// 144 = 0x90
    NSString *_shortVersionString;	// 152 = 0x98
    long long _softwarePlatform;	// 160 = 0xa0
    NSString *_vendorName;	// 168 = 0xa8
    unsigned long long _applicationType;	// 176 = 0xb0
    long long _betaExternalVersionID;	// 184 = 0xb8
    NSString *_deviceIdentifierForVendor;	// 192 = 0xc0
    NSString *_storeCohort;	// 200 = 0xc8
    long long _storeExternalVersionID;	// 208 = 0xd0
    NSNumber *_storefront;	// 216 = 0xd8
    long long _storeItemID;	// 224 = 0xe0
    NSString *_thinningVariantID;	// 232 = 0xe8
    unsigned long long _updateAvailability;	// 240 = 0xf0
    NSString *_companionBundleID;	// 248 = 0xf8
}

+ (void)enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00400000001ba0a2
+ (id)proxyForBundleURL:(id)arg1;	// IMP=0x00100000001b8b55
+ (id)proxyForItemID:(id)arg1;	// IMP=0x00100000001b894a
+ (id)proxyForBundleID:(id)arg1;	// IMP=0x00100000001b88fd
+ (id)proxyForBundle:(id)arg1;	// IMP=0x00100000001b88b0
+ (id)proxyMatchingBundleID:(id)arg1 orItemID:(id)arg2;	// IMP=0x00100000001b7fb8
- (void).cxx_destruct;	// IMP=0x00200000001ba714
@property(retain, nonatomic) NSString *thinningVariantID; // @synthesize thinningVariantID=_thinningVariantID;
@property(nonatomic, getter=isStoreOriginated) _Bool storeOriginated; // @synthesize storeOriginated=_storeOriginated;
@property(nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(retain, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property(nonatomic) long long storeExternalVersionID; // @synthesize storeExternalVersionID=_storeExternalVersionID;
@property(retain, nonatomic) NSString *storeCohort; // @synthesize storeCohort=_storeCohort;
@property(retain, nonatomic) NSString *deviceIdentifierForVendor; // @synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor;
@property(nonatomic) long long betaExternalVersionID; // @synthesize betaExternalVersionID=_betaExternalVersionID;
@property(nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
@property(nonatomic, getter=isArcade) _Bool arcade; // @synthesize arcade=_arcade;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic, getter=isOffloaded) _Bool offloaded; // @synthesize offloaded=_offloaded;
@property(nonatomic, getter=isInstalled) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) unsigned long long applicationType; // @synthesize applicationType=_applicationType;
@property(nonatomic) _Bool missingRequiredSINF; // @synthesize missingRequiredSINF=_missingRequiredSINF;
@property(nonatomic) _Bool hasMIDBasedSINF; // @synthesize hasMIDBasedSINF=_hasMIDBasedSINF;
@property(nonatomic, getter=isProfileValidated) _Bool profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isAppleSigned) _Bool appleSigned; // @synthesize appleSigned=_appleSigned;
@property(retain, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly) long long softwarePlatform; // @synthesize softwarePlatform=_softwarePlatform;
@property(retain, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *canonicalExecutablePath; // @synthesize canonicalExecutablePath=_canonicalExecutablePath;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned long long appPlatform; // @synthesize appPlatform=_appPlatform;
@property(nonatomic) _Bool appClipIsConfiguredForIAP; // @synthesize appClipIsConfiguredForIAP=_appClipIsConfiguredForIAP;
@property(retain, nonatomic) NSString *parentApplicationBundleID; // @synthesize parentApplicationBundleID=_parentApplicationBundleID;
@property(nonatomic, getter=isAppClip) _Bool appClip; // @synthesize appClip=_appClip;
@property(retain, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(retain, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(retain, nonatomic) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property(readonly, nonatomic) LSApplicationRecord *record; // @synthesize record=_record;
- (id)description;	// IMP=0x00100000001ba3fd
- (id)validLocationProxy;	// IMP=0x00100000001ba3f4
@property(readonly) _Bool isFactoryInstall;
@property(readonly) _Bool isConfiguratorInstall;
@property(readonly) MIStoreMetadata *storeMetadata;
- (id);	// IMP=0x00100000001b9e5b
@property(readonly) NSURL *receiptURL;
@property(readonly) NSNumber *ratingRank;
@property(readonly, nonatomic) _Bool isB2BCustomApp;
@property(readonly) NSArray *extensionReceiptURLs;
@property(readonly) NSString *appStoreToolsBuildVersion;
@property(readonly) NSNumber *installFailureReason;
@property(readonly) IXApplicationIdentity *applicationIdentity;
@property(readonly, copy) NSData *sinf;
@property(readonly, nonatomic) NSString *sinfPath;
@property(readonly, copy) NSString *md5;
@property(readonly, nonatomic) unsigned int codeSignatureVersion;
@property(readonly) NSString *shortDescription;
- (id)initWithBundleURL:(id)arg1;	// IMP=0x00100000001b901a
- (id)initWithBundlePath:(id)arg1;	// IMP=0x00100000001b8fc0
- (id)initWithBundleID:(id)arg1;	// IMP=0x00100000001b8dae
- (id)initWithBundle:(id)arg1;	// IMP=0x00100000001b8d58
- (id)initWithItemID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b8733
- (id)initWithBundleURL:(id)arg1 allowPlaceholder:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001b85a3
- (_Bool)validateEligibilityForUpdatesWithLogKey:(id)arg1;	// IMP=0x00100000001b8345
- (id)initWithBundleID:(id)arg1 allowPlaceholder:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001b8153

@end

