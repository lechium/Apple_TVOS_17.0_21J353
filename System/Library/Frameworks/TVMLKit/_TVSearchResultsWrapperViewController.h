//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class _TVStackCollectionViewController;

__attribute__((visibility("hidden")))
@interface _TVSearchResultsWrapperViewController : UIViewController
{
    _TVStackCollectionViewController *_stackCollectionViewController;	// 8 = 0x8
    UIViewController *_defaultResultsViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a1122
@property(retain, nonatomic) UIViewController *defaultResultsViewController; // @synthesize defaultResultsViewController=_defaultResultsViewController;
@property(retain, nonatomic) _TVStackCollectionViewController *stackCollectionViewController; // @synthesize stackCollectionViewController=_stackCollectionViewController;
- (id)preferredFocusEnvironments;	// IMP=0x00000000000a106b
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000a0ca2
- (void)viewDidLoad;	// IMP=0x00000000000a0b22
- (id)initWithStackCollectionViewController:(id)arg1;	// IMP=0x00000000000a0979

@end
