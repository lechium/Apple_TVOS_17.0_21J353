//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccountsUI/NSObject-Protocol.h>

@class PSViewController;

@protocol ACUIViewControllerAccountChangeObserver <NSObject>

@optional
- (void)viewController:(PSViewController *)arg1 didFinishRemovingAccountWithSuccess:(_Bool)arg2;
- (void)viewController:(PSViewController *)arg1 didFinishSavingAccountWithSuccess:(_Bool)arg2;
@end

