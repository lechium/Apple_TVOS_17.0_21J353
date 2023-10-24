//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraParameterSelection : HMFObject
{
    HMDCameraStreamSessionID *_sessionID;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000093cd3d
+ (id)_selectedCryptoSuiteFromCameraCryptoSuites:(id)arg1;	// IMP=0x001000000093cac1
+ (id)selectedSRTPParametersFromCryptoSuites:(id)arg1;	// IMP=0x001000000093c7e8
+ (id)selectedParametersFromPreferredParameters:(id)arg1 deviceSupportedParameters:(id)arg2 cameraSupportedParameters:(id)arg3 overriddenParameters:(id)arg4 parameterDescription:(id)arg5;	// IMP=0x001000000093c31b
- (void).cxx_destruct;	// IMP=0x000000000093c308
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (id)logIdentifier;	// IMP=0x000000000093c2a7
- (id)initWithSessionID:(id)arg1;	// IMP=0x000000000093c239

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
