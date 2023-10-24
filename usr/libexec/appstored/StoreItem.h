//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, StoreAsset, TimeWindow;

@interface StoreItem : NSObject
{
    _Bool _automatic;	// 8 = 0x8
    _Bool _gameCenterEnabled;	// 9 = 0x9
    _Bool _gameCenterEverEnabled;	// 10 = 0xa
    _Bool _hasMessagesExtension;	// 11 = 0xb
    _Bool _hasWatchApp;	// 12 = 0xc
    _Bool _hasWatchIndependentApp;	// 13 = 0xd
    _Bool _hasWatchOnlyApp;	// 14 = 0xe
    _Bool _isB2BCustomApp;	// 15 = 0xf
    _Bool _launchProhibited;	// 16 = 0x10
    _Bool _purchasedRedownload;	// 17 = 0x11
    _Bool _supports32BitOnly;	// 18 = 0x12
    _Bool _requiredUniversalVariant;	// 19 = 0x13
    _Bool _receivedThinnedVariants;	// 20 = 0x14
    _Bool _thinnedAppKeyMissing;	// 21 = 0x15
    NSString *_alternateIconName;	// 24 = 0x18
    NSData *_appReceiptData;	// 32 = 0x20
    NSString *_artistName;	// 40 = 0x28
    NSString *_artworkURL;	// 48 = 0x30
    NSArray *_assetDeltaPackages;	// 56 = 0x38
    StoreAsset *_assetFullPackage;	// 64 = 0x40
    NSNumber *_betaExternalVersionID;	// 72 = 0x48
    NSString *;	// 80 = 0x50
    NSString *_bundleID;	// 88 = 0x58
    NSString *_bundleShortVersion;	// 96 = 0x60
    NSString *_bundleVersion;	// 104 = 0x68
    NSString *_cancelDownloadURL;	// 112 = 0x70
    NSDictionary *_capabilities;	// 120 = 0x78
    NSDictionary *_capabilityOptions;	// 128 = 0x80
    NSNumber *_evid;	// 136 = 0x88
    NSString *_genre;	// 144 = 0x90
    NSNumber *_genreID;	// 152 = 0x98
    NSNumber *_hasOrEverHasHadIAP;	// 160 = 0xa0
    NSNumber *_iAdAttribution;	// 168 = 0xa8
    NSString *_iAdConversionString;	// 176 = 0xb0
    NSString *_iAdImpressionString;	// 184 = 0xb8
    NSNumber *_itemID;	// 192 = 0xc0
    NSString *_itemName;	// 200 = 0xc8
    NSString *_kind;	// 208 = 0xd0
    NSString *_messagesArtworkURL;	// 216 = 0xd8
    NSURL *_preflightPackageURL;	// 224 = 0xe0
    NSString *_purchaseDate;	// 232 = 0xe8
    NSString *_redownloadParams;	// 240 = 0xf0
    NSString *_releaseDate;	// 248 = 0xf8
    NSString *_ratingLabel;	// 256 = 0x100
    NSNumber *_ratingRank;	// 264 = 0x108
    long long _softwarePlatform;	// 272 = 0x110
    NSString *_storefront;	// 280 = 0x118
    NSString *_storeTransactionID;	// 288 = 0x120
    NSString *_storeCohort;	// 296 = 0x128
    NSArray *_subGenres;	// 304 = 0x130
    TimeWindow *_optimalDownloadWindow;	// 312 = 0x138
    NSDictionary *_nameTranscriptions;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x002000000018b95c
- (id)description;	// IMP=0x001000000018b87a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018b318

@end
