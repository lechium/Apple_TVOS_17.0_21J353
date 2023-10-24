//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraProfileSettingsCoreDataAdapter : HMFObject
{
    NSUUID *_hapAccessoryUUID;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    NSUUID *_cameraProfileSettingsModelID;	// 24 = 0x18
    NSUUID *_derivedPropertiesModelID;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000a466ff
- (void).cxx_destruct;	// IMP=0x0000000000a45372
@property(readonly) NSUUID *derivedPropertiesModelID; // @synthesize derivedPropertiesModelID=_derivedPropertiesModelID;
@property(readonly) NSUUID *cameraProfileSettingsModelID; // @synthesize cameraProfileSettingsModelID=_cameraProfileSettingsModelID;
@property(readonly) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) NSUUID *hapAccessoryUUID; // @synthesize hapAccessoryUUID=_hapAccessoryUUID;
- (id)logIdentifier;	// IMP=0x0000000000a452ca
- (void)updateDerivedPropertiesModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a45172
- (void)updateCameraProfileSettingsModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a4501a
- (id)fetchDerivedPropertiesModelWithError:(id *)arg1;	// IMP=0x0000000000a44e39
- (id)fetchCameraProfileSettingsModelWithError:(id *)arg1;	// IMP=0x0000000000a44c58
- (id)initWithHAPAccessory:(id)arg1 cameraProfileSettingsModelID:(id)arg2 derivedPropertiesModelID:(id)arg3;	// IMP=0x0000000000a44b0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

