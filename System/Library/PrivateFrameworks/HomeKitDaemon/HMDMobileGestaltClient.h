//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDMobileGestaltClient : HMFObject
{
    _Bool _homeSafetySecurityEnabled;	// 8 = 0x8
}

@property(readonly) _Bool homeSafetySecurityEnabled; // @synthesize homeSafetySecurityEnabled=_homeSafetySecurityEnabled;
@property(readonly) _Bool supportsReceivingARCStreamOverAirPlay;
@property(readonly) _Bool supportsSiriHub;
- (id)init;	// IMP=0x00000000005ae432
- (id)initWithHomeSafetySecurityEnabled:(_Bool)arg1;	// IMP=0x00000000005ae3f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

