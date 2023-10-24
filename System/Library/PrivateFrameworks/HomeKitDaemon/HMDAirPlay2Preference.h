//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFPreference.h>

@class HMFSystemPreference, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDAirPlay2Preference : HMFPreference
{
    HMFSystemPreference *_airPlayPreference;	// 8 = 0x8
    HMFSystemPreference *_homeKitPreference;	// 16 = 0x10
}

+ (void)loadEnableAirPlay2Accessories;	// IMP=0x0010000000298206
- (void).cxx_destruct;	// IMP=0x00000000002981d5
@property(readonly) HMFSystemPreference *homeKitPreference; // @synthesize homeKitPreference=_homeKitPreference;
@property(readonly) HMFSystemPreference *airPlayPreference; // @synthesize airPlayPreference=_airPlayPreference;
- (id)stringValue;	// IMP=0x0000000000298159
- (id)numberValue;	// IMP=0x000000000029805a
- (_Bool)boolValue;	// IMP=0x0000000000298016
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;	// IMP=0x0000000000297e28

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

