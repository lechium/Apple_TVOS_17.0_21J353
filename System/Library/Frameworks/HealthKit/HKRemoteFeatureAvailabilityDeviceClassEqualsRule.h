//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityDeviceClassEqualsRule
{
    NSString *_deviceClass;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x0010000000256103
- (void).cxx_destruct;	// IMP=0x00000000002561e6
- (_Bool)evaluate;	// IMP=0x0000000000256158
- (void)processUserInfo:(id)arg1;	// IMP=0x0000000000256110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

