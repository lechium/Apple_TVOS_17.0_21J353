//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMActionModule.h>

@class NSString, TVSMButtonViewController, TVSMCAPackageView;

@interface TVSMExpanseModule : TVSMActionModule
{
    TVSMButtonViewController *_buttonVC;	// 8 = 0x8
    TVSMCAPackageView *_packageView;	// 16 = 0x10
}

+ (id)availableStyles;	// IMP=0x00100000000083a0
- (void).cxx_destruct;	// IMP=0x000000000000a6d0
@property(retain, nonatomic) TVSMCAPackageView *packageView; // @synthesize packageView=_packageView;
@property(retain, nonatomic) TVSMButtonViewController *buttonVC; // @synthesize buttonVC=_buttonVC;
- (void)expanseContextDidUpdate:(id)arg1;	// IMP=0x000000000000a600
- (void)updateContextSpecificUI;	// IMP=0x0000000000008eb0
- (void)showNoSessionAvailableAlert;	// IMP=0x0000000000008be0
- (void)handleAction;	// IMP=0x0000000000008900
- (id)contentViewController;	// IMP=0x0000000000008870
- (void)dealloc;	// IMP=0x00000000000084b0
- (id)init;	// IMP=0x00000000000083c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
