//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AppDefaultsManager : NSObject
{
}

+ (_Bool)_boolForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2 ifMissing:(_Bool)arg3;	// IMP=0x002000000004faa2
+ (id)transporterConfiguration;	// IMP=0x001000000004fa82
+ (void)setTransporterConfiguration:(id)arg1;	// IMP=0x001000000004fa55
+ (void)setExternalPurchaseSpringBoardAppDeleteAlertEnabled:(_Bool)arg1;	// IMP=0x001000000004fa14
+ (_Bool)externalPurchaseSpringBoardAppDeleteAlertEnabled;	// IMP=0x001000000004f9ee
+ (_Bool)alwaysUseLegacyAPIForStoreKitProductsRequest;	// IMP=0x001000000004f9ce
+ (_Bool)allowPurchaseRequestData;	// IMP=0x001000000004f98d
+ (void)setOcelotApps:(id)arg1;	// IMP=0x001000000004f960
+ (id)ocelotApps;	// IMP=0x001000000004f940
+ (_Bool)marketingDemoModeEnabled;	// IMP=0x001000000004f920
+ (_Bool)keepTemporaryFiles;	// IMP=0x001000000004f900

@end

