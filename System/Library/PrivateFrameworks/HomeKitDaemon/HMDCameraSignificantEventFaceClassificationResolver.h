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

+ (id)logCategory;	// IMP=0x0010000000697376
- (void).cxx_destruct;	// IMP=0x000000000069707a
@property __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x0000000000696fd3
- (id)personManagerWithUUID:(id)arg1;	// IMP=0x0000000000696d8b
- (id)_faceClassificationForSignificantEventFaceClassifications:(id)arg1 user:(id)arg2;	// IMP=0x0000000000696262
- (id)faceClassificationForSignificantEventFaceClassifications:(id)arg1 user:(id)arg2;	// IMP=0x0000000000696250
- (id)faceClassificationForSignificantEventFaceClassifications:(id)arg1;	// IMP=0x00000000006961ac
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000696145

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

