//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMButtonViewController.h>

@class HFItem;

@interface TVSMHomeSceneButtonViewController : TVSMButtonViewController
{
    HFItem *_homeItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003d30
@property(readonly, nonatomic) HFItem *homeItem; // @synthesize homeItem=_homeItem;
- (id)_iconTintColorForIconIdentifier:(id)arg1;	// IMP=0x0000000000003820
- (void)_toggleActionSet;	// IMP=0x0000000000002ee0
- (void)toggleActionSetWithAppleRemote:(_Bool)arg1;	// IMP=0x0000000000002340
- (void)updateContentViewController;	// IMP=0x0000000000001e30
- (id)initWithHFItem:(id)arg1;	// IMP=0x0000000000001d60

@end
