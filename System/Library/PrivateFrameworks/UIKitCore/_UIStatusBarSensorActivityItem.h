//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class _UIStatusBarSensorActivityView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarSensorActivityItem : _UIStatusBarItem
{
    _UIStatusBarSensorActivityView *_sensorActivityIndicator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000010466e8
@property(retain, nonatomic) _UIStatusBarSensorActivityView *sensorActivityIndicator; // @synthesize sensorActivityIndicator=_sensorActivityIndicator;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x00000000010464ab
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000001046499
- (void)_create_sensorActivityIndicator;	// IMP=0x000000000104643f
- (id)dependentEntryKeys;	// IMP=0x00000000010463e5

@end

