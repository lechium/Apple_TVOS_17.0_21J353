//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableViewCell;

@protocol PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate <NSObject>
- (UITableViewCell *)cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (long long)indexOfSectionIdentifier:(NSString *)arg1;
- (void)reloadSectionIdentifier:(NSString *)arg1;
- (void)recomputeMappedSectionsAndReloadSections:(NSArray *)arg1;
@end

