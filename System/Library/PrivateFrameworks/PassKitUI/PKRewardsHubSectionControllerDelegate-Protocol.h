//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL, PKAccountEnhancedMerchant, PKLinkedApplication, UICollectionView;

@protocol PKRewardsHubSectionControllerDelegate <NSObject>
- (void)reportEventIfNecessary:(NSDictionary *)arg1;
- (void)navigateToRewardsHubDestination:(long long)arg1;
- (UICollectionView *)rewardsHubCollectionView;
- (void)reloadDataForSectionIdentifier:(NSString *)arg1 animated:(_Bool)arg2;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)deselectCells;

@optional
- (void)presentDisplayableError:(NSError *)arg1;
- (void)presentEnhancedMerchant:(PKAccountEnhancedMerchant *)arg1;
- (void)presentEducationViewController;
- (void)openLinkedApplication:(PKLinkedApplication *)arg1;
- (void)openURL:(NSURL *)arg1 sensitive:(_Bool)arg2 preferInApp:(_Bool)arg3;
@end

