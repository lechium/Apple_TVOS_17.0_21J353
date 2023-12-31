//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMIExternalPersonManager, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAIPhotosPersonDataInterface
{
    HMIExternalPersonManager *_photosPersonManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000041c4ae
- (void).cxx_destruct;	// IMP=0x000000000041c27b
@property(readonly) HMIExternalPersonManager *photosPersonManager; // @synthesize photosPersonManager=_photosPersonManager;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x000000000041c0e3
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000041c02b
- (id)logIdentifier;	// IMP=0x000000000041bfb1
- (id)initWithPhotosPersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000041bf36
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x000000000041be84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

