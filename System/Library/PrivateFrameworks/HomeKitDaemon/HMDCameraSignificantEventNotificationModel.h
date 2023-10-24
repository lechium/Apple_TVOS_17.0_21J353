//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class CKAsset, HMBModelCloudReference, NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventNotificationModel : HMBModel
{
}

+ (id)significantEventsBetweenDatesQueryWithIsAscending:(_Bool)arg1;	// IMP=0x00600000002e780a
+ (id)hmbQueries;	// IMP=0x00600000002e773f
+ (id)hmbExternalRecordType;	// IMP=0x00600000002e7732
+ (id)hmbProperties;	// IMP=0x00600000002e7702
- (id)createClipSignificantEventWithCameraProfileUUID:(id)arg1 faceClassification:(id)arg2;	// IMP=0x00000000002e7ee3

// Remaining properties
@property(retain) HMBModelCloudReference *associatedClip; // @dynamic associatedClip;
@property(retain) NSNumber *confidenceLevel; // @dynamic confidenceLevel;
@property(retain) NSDate *dateOfOccurrence; // @dynamic dateOfOccurrence;
@property(retain) CKAsset *faceCropAsset; // @dynamic faceCropAsset;
@property(retain) CKAsset *heroFrameAsset; // @dynamic heroFrameAsset;
@property(retain) NSNumber *significantEvent; // @dynamic significantEvent;
@property(retain) NSNumber *timeOffsetWithinClip; // @dynamic timeOffsetWithinClip;

@end
