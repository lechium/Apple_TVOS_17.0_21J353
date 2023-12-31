//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBModelCloudReference, NSData, NSDate, NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDFaceCropModel : HMBModel
{
}

+ (id)faceCropsWithUnassociatedFaceCropUUIDQuery;	// IMP=0x0040000000015238
+ (id)faceCropsForPersonUUIDQuery;	// IMP=0x0040000000015208
+ (id)sentinelParentUUID;	// IMP=0x00400000000151d8
+ (id)hmbQueries;	// IMP=0x0040000000015115
+ (id)hmbProperties;	// IMP=0x00400000000150e5
@property long long source;
@property struct CGRect faceBoundingBox;
- (id)createPersonFaceCrop;	// IMP=0x0000000000015a6b
- (id)initWithPersonFaceCrop:(id)arg1;	// IMP=0x00000000000158a2

// Remaining properties
@property(retain) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(retain) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain) NSData *faceBoundingBoxData; // @dynamic faceBoundingBoxData;
@property(retain) HMBModelCloudReference *person; // @dynamic person;
@property(retain) NSUUID *personUUID; // @dynamic personUUID;
@property(retain) NSNumber *sourceField; // @dynamic sourceField;
@property(retain) NSUUID *unassociatedFaceCropUUID; // @dynamic unassociatedFaceCropUUID;

@end

