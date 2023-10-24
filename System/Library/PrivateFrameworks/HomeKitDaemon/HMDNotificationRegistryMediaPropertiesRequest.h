//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistryMediaPropertiesRequest
{
    NSUUID *_mediaProfileUUID;	// 40 = 0x28
    NSMutableSet *_mediaProperties;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000007f658b
@property(retain) NSMutableSet *mediaProperties; // @synthesize mediaProperties=_mediaProperties;
@property(readonly, copy) NSUUID *mediaProfileUUID; // @synthesize mediaProfileUUID=_mediaProfileUUID;
- (id)attributeDescriptions;	// IMP=0x00000000007f6388
- (id)initWithEnable:(_Bool)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3 mediaProfileUUID:(id)arg4;	// IMP=0x00000000007f6255

@end

