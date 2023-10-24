//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMOverlayModule.h>

@class TVNPGroupableRoutingController, TVSMButtonViewController, TVSMCAPackageView;

@interface TVNPAirPlayRoutingModule : TVSMOverlayModule
{
    _Bool _hasActiveOutput;	// 8 = 0x8
    TVSMCAPackageView *_packageView;	// 16 = 0x10
    TVSMButtonViewController *_buttonViewController;	// 24 = 0x18
    TVNPGroupableRoutingController *_routingController;	// 32 = 0x20
}

+ (id)availableStyles;	// IMP=0x0060000000024000
- (void).cxx_destruct;	// IMP=0x0000000000024b20
@property(readonly, nonatomic) _Bool hasActiveOutput; // @synthesize hasActiveOutput=_hasActiveOutput;
@property(readonly, nonatomic) TVNPGroupableRoutingController *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) TVSMButtonViewController *buttonViewController; // @synthesize buttonViewController=_buttonViewController;
@property(retain, nonatomic) TVSMCAPackageView *packageView; // @synthesize packageView=_packageView;
- (id)analyticsElementInfo;	// IMP=0x00000000000249d0
- (id)analyticsActionType;	// IMP=0x00000000000249b0
- (void)_updateRouteDependentUI;	// IMP=0x00000000000247d0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000246d0
- (id)overlayContentViewController;	// IMP=0x0000000000024640
- (id)contentViewController;	// IMP=0x0000000000024550
- (void)dumpViewController;	// IMP=0x0000000000024190
- (void)dealloc;	// IMP=0x0000000000024120
- (id)init;	// IMP=0x0000000000024020

@end

