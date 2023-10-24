//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFActionSetItemProvider, HFCameraItemProvider, NSArray;

@interface TVSMHomeModuleItemManager : HFItemManager
{
    NSArray *_homeItemProviders;	// 8 = 0x8
    HFCameraItemProvider *_cameraItemProvider;	// 16 = 0x10
    HFActionSetItemProvider *_actionSetItemProvider;	// 24 = 0x18
}

+ (_Bool)isFilteringToFavoriteCameras;	// IMP=0x00600000000052a0
- (void).cxx_destruct;	// IMP=0x00000000000060e0
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0000000000005780
- (id)_itemForSorting;	// IMP=0x0000000000005750
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x0000000000005310

@end
