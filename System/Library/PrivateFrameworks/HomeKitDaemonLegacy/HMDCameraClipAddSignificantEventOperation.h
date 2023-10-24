//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraRecordingSessionSignificantEvent, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipAddSignificantEventOperation
{
    HMDCameraRecordingSessionSignificantEvent *_significantEvent;	// 8 = 0x8
    NSDictionary *_homePresenceByPairingIdentity;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000061c315
+ (unsigned long long)cameraClipOperationType;	// IMP=0x001000000061c30a
- (void).cxx_destruct;	// IMP=0x000000000061c2d9
@property(readonly) NSDictionary *homePresenceByPairingIdentity; // @synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity;
@property(readonly, copy) HMDCameraRecordingSessionSignificantEvent *significantEvent; // @synthesize significantEvent=_significantEvent;
- (id)attributeDescriptions;	// IMP=0x000000000061c12f
- (void)updateMirrorOutputModel:(id)arg1;	// IMP=0x000000000061be67
- (id)modelsToAdd;	// IMP=0x000000000061b5fc
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 dataSource:(id)arg5;	// IMP=0x000000000061b494
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;	// IMP=0x000000000061b3d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

