//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VGVirtualGarage;

@protocol VGVirtualGarageObserver
- (void)virtualGarageDidUpdate:(VGVirtualGarage *)arg1;

@optional
- (void)virtualGarage:(VGVirtualGarage *)arg1 didUpdateUnpairedVehicles:(NSArray *)arg2;
@end

