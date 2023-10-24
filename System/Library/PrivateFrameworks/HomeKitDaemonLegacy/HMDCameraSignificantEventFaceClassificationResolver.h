//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventFaceClassificationResolver : HMFObject
{
    HMDHome *_home;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000005bf6c2
- (void).cxx_destruct;	// IMP=0x00000000005bf3c6
@property __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x00000000005bf31f
- (id)personManagerWithUUID:(id)arg1;	// IMP=0x00000000005bf0d7
- (id)_faceClassificationForSignificantEventFaceClassifications:(id)arg1 user:(id)arg2;	// IMP=0x00000000005be5ae
- (id)faceClassificationForSignificantEventFaceClassifications:(id)arg1 user:(id)arg2;	// IMP=0x00000000005be59c
- (id)faceClassificationForSignificantEventFaceClassifications:(id)arg1;	// IMP=0x00000000005be4f8
- (id)initWithHome:(id)arg1;	// IMP=0x00000000005be491

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
