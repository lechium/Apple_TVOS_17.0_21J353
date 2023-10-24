//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (SCROBundleExtras)
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;	// IMP=0x0060000000034bc4
+ (_Bool)doesBrailleTableSupportEightDot:(id)arg1;	// IMP=0x0060000000034b13
+ (_Bool)doesBrailleTableSupportContractions:(id)arg1;	// IMP=0x0060000000034a62
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;	// IMP=0x00600000000348c6
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;	// IMP=0x00600000000346f4
+ (id)_brailleTableBundles;	// IMP=0x006000000003411e
+ (id)brailleDriverDeviceDetectionInfo;	// IMP=0x0060000000033e37
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;	// IMP=0x0060000000033dbe
+ (id)brailleDriverBundles;	// IMP=0x006000000003378d
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;	// IMP=0x0010000000034c72
@end

