//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MRDRouteRecommendationOutputContextLogic : NSObject
{
    NSDictionary *_localOutputContextDeviceTypesCount;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000f0100
@property(retain, nonatomic) NSDictionary *localOutputContextDeviceTypesCount; // @synthesize localOutputContextDeviceTypesCount=_localOutputContextDeviceTypesCount;
- (_Bool)localOutputContextShouldSuppressRecommendations;	// IMP=0x00100000000eff3a
- (id)_localOutputContextDeviceTypesCount;	// IMP=0x00100000000eff09
- (void)reloadOutputContextData;	// IMP=0x00100000000efbb4
- (_Bool)localOutputContextHasDeviceOfType:(unsigned int)arg1;	// IMP=0x00100000000efac8

@end
