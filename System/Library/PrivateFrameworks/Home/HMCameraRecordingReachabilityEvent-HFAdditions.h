//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCameraRecordingReachabilityEvent.h>

@class NSDate, NSString, NSUUID;

@interface HMCameraRecordingReachabilityEvent (HFAdditions)
- (unsigned long long)containerType;	// IMP=0x0020000000050c5c
- (id)videoAssetRequiredHTTPHeaders;	// IMP=0x0020000000050c4f
- (id)encryptionKey;	// IMP=0x0020000000050c36
- (double)targetFragmentDuration;	// IMP=0x0020000000050c28
- (_Bool)hf_hasInsufficientAnalysis;	// IMP=0x0020000000050c20
- (_Bool)hf_isPlayable;	// IMP=0x0020000000050c18
- (id)hf_dateInterval;	// IMP=0x0020000000050ba3
- (id)hf_endDate;	// IMP=0x0020000000050b3a
- (_Bool)canAskForUserFeedback;	// IMP=0x0020000000050b32
- (_Bool)isComplete;	// IMP=0x0020000000050b2a
- (double)hf_duration;	// IMP=0x0020000000050b18
- (double)duration;	// IMP=0x0020000000050b0a
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00200000000b4893

// Remaining properties
@property(readonly, copy) NSDate *dateOfOccurrence;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSUUID *uniqueIdentifier;
@end

