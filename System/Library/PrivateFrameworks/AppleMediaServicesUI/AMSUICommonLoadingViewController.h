//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSUILoadingView;

__attribute__((visibility("hidden")))
@interface AMSUICommonLoadingViewController : AMSUICommonViewController
{
    AMSUILoadingView *_loadingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002063e
@property(retain, nonatomic) AMSUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)_setup;	// IMP=0x000000000002027c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000020212
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000020149
- (void)viewDidLoad;	// IMP=0x0000000000020108
- (void)loadView;	// IMP=0x0000000000020071

@end
