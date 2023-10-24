//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMActionModule.h>

@class NSString, TVSMButtonViewController;

@interface TVSMExpanseNowPlayingModule : TVSMActionModule
{
    TVSMButtonViewController *_buttonVC;	// 8 = 0x8
}

+ (id)availableStyles;	// IMP=0x0010000000001a60
- (void).cxx_destruct;	// IMP=0x0000000000002830
@property(retain, nonatomic) TVSMButtonViewController *buttonVC; // @synthesize buttonVC=_buttonVC;
- (void)expanseContextDidUpdate:(id)arg1;	// IMP=0x0000000000002790
- (void)handleAction;	// IMP=0x0000000000002030
- (void)updateContextSpecificUI;	// IMP=0x0000000000001c80
- (id)contentViewController;	// IMP=0x0000000000001bf0
- (void)dealloc;	// IMP=0x0000000000001b70
- (id)init;	// IMP=0x0000000000001a80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
