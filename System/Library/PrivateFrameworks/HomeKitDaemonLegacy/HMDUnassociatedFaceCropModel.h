//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedFaceCropModel : HMBModel
{
}

+ (id)unassociatedFaceCropsBetweenDatesQueryWithIsAscending:(_Bool)arg1;	// IMP=0x004000000034815a
+ (id)sentinelParentUUID;	// IMP=0x004000000034812a
+ (id)hmbQueries;	// IMP=0x004000000034805f
+ (id)hmbExternalRecordType;	// IMP=0x0040000000348052
+ (id)hmbProperties;	// IMP=0x0040000000348022
@property struct CGRect faceBoundingBox;
- (id)createFaceCrop;	// IMP=0x0000000000348727
- (id)initWithFaceCrop:(id)arg1;	// IMP=0x00000000003485c6

// Remaining properties
@property(retain) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(retain) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain) NSData *faceBoundingBoxData; // @dynamic faceBoundingBoxData;

@end
