//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCameraClipEncryptionManager, NSDate;

__attribute__((visibility("hidden")))
@interface HMDCameraClipCreateClipWithSignificantEventOperation
{
    double _targetFragmentDuration;	// 8 = 0x8
    NSDate *_clipStartDate;	// 16 = 0x10
    long long _quality;	// 24 = 0x18
    HMCameraClipEncryptionManager *_encryptionManager;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0060000000a7a943
+ (unsigned long long)cameraClipOperationType;	// IMP=0x0060000000a7a938
- (void).cxx_destruct;	// IMP=0x0000000000a7a907
@property(readonly) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(readonly) long long quality; // @synthesize quality=_quality;
@property(readonly, copy) NSDate *clipStartDate; // @synthesize clipStartDate=_clipStartDate;
@property(readonly) double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;
- (id)attributeDescriptions;	// IMP=0x0000000000a7a6c1
- (id)modelsToAdd;	// IMP=0x0000000000a7a2cb
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 quality:(long long)arg7 encryptionManager:(id)arg8 dataSource:(id)arg9;	// IMP=0x0000000000a7a0c2
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 quality:(long long)arg7 encryptionManager:(id)arg8;	// IMP=0x0000000000a79fbd

@end
