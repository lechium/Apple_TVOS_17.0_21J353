//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InAppPurchaseIntentDatabaseStore, NSString;

@interface InAppPurchaseIntentManager : NSObject
{
    NSString *_bundleIdForCurrentInstallSheet;	// 8 = 0x8
    InAppPurchaseIntentDatabaseStore *_databaseStore;	// 16 = 0x10
}

+ (id)_buildPurchaseIntentNotificationRequest:(id)arg1 title:(id)arg2 body:(id)arg3 launchURL:(id)arg4;	// IMP=0x004000000000580a
+ (id)_generateNotificationRequestIdentifierForProductID:(id)arg1;	// IMP=0x00100000000057db
+ (id)manager;	// IMP=0x00100000000050c0
- (void).cxx_destruct;	// IMP=0x0020000000005ab7
- (void)resetPurchaseIntentTimestampsForBundleID:(id)arg1;	// IMP=0x0010000000005703
- (id)purchaseIntentsForBundleID:(id)arg1 afterDate:(id)arg2;	// IMP=0x001000000000551f
- (void)purchaseIntentAppInstallSheetOpenForBundleID:(id)arg1;	// IMP=0x00100000000054c5
- (void)clearPurchaseIntentNotificationForProductID:(id)arg1;	// IMP=0x00100000000054bf
- (void)postPurchaseIntentNotificationIfNeededForBundleIDs:(id)arg1;	// IMP=0x00100000000054b9
- (void)clearPurchaseIntentForProductID:(id)arg1;	// IMP=0x00100000000053e1
- (void)clearPurchaseIntentsForBundleID:(id)arg1;	// IMP=0x0010000000005309
- (void)addPurchaseIntent:(id)arg1;	// IMP=0x0010000000005231
- (id)databaseStore;	// IMP=0x0010000000005145

@end
