//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipAddModelsOperation
{
}

+ (id)logCategory;	// IMP=0x0010000000bf201c
- (void)localZone:(id)arg1 willPerformMirrorOutputForModel:(id)arg2;	// IMP=0x0000000000bf1c92
- (void)updateMirrorOutputModel:(id)arg1;	// IMP=0x0000000000bf1c8c
@property(readonly, copy) NSSet *modelsToAdd;
- (void)main;	// IMP=0x0000000000bf1a19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

