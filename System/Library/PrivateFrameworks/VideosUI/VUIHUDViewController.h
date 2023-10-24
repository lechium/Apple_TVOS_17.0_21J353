//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface VUIHUDViewController : UIViewController
{
    int _tabIndex;	// 8 = 0x8
    UIViewController *_hudContentViewController;	// 16 = 0x10
    NSObject *_tabObserver;	// 24 = 0x18
    struct CGSize _playerViewSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000aa4f7
@property(retain, nonatomic) NSObject *tabObserver; // @synthesize tabObserver=_tabObserver;
@property(nonatomic) struct CGSize playerViewSize; // @synthesize playerViewSize=_playerViewSize;
@property(nonatomic) int tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) UIViewController *hudContentViewController; // @synthesize hudContentViewController=_hudContentViewController;
- (struct CGSize)_computePreferredContentSize;	// IMP=0x00000000000aa460
- (void)_addViewControllerToHud;	// IMP=0x00000000000aa33c
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000aa267
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000aa20d
- (void)dealloc;	// IMP=0x00000000000aa14d
- (id)init;	// IMP=0x00000000000a9f9f

@end

