//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebModelInterface-Protocol.h>

@class AMSBinaryPromise, AMSMetricsEvent, AMSUIWebContainerViewController, AMSUIWebNavigationBarModel, NSString, UIViewController;
@protocol AMSUIWebPagePresenter;

@protocol AMSUIWebPageProvider <AMSUIWebModelInterface>
@property(readonly, nonatomic) struct CGSize windowSize;
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
- (AMSBinaryPromise *)loadPage;
- (UIViewController<AMSUIWebPagePresenter> *)createViewControllerForContainer:(AMSUIWebContainerViewController *)arg1;
@end

