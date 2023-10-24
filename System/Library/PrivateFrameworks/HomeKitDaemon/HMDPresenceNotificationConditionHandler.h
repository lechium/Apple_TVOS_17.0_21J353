//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString;
@protocol HMDFeaturesDataSource, HMDPresenceNotificationConditionPresenceProvider;

__attribute__((visibility("hidden")))
@interface HMDPresenceNotificationConditionHandler : HMFObject
{
    HMDHome *_home;	// 8 = 0x8
    id <HMDPresenceNotificationConditionPresenceProvider> _presenceProvider;	// 16 = 0x10
    id <HMDFeaturesDataSource> _featuresDataSource;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000c03b09
- (void).cxx_destruct;	// IMP=0x0000000000c03ab4
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) id <HMDPresenceNotificationConditionPresenceProvider> presenceProvider; // @synthesize presenceProvider=_presenceProvider;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (_Bool)conditionPasses:(id)arg1 registrationUser:(id)arg2;	// IMP=0x0000000000c033ce
- (_Bool)canHandleCondition:(id)arg1;	// IMP=0x0000000000c03387
- (id)initWithHome:(id)arg1 presenceProvider:(id)arg2 featuresDataSource:(id)arg3;	// IMP=0x0000000000c032c2
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000c0323d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

