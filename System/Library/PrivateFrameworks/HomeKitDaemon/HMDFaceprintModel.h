//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBModelReference, NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDFaceprintModel : HMBModel
{
}

+ (_Bool)hmbExcludeFromCloudStorage;	// IMP=0x0060000000967ea3
+ (id)hmbProperties;	// IMP=0x0060000000967e73
- (id)createFaceprint;	// IMP=0x0000000000967c87
- (id)initWithFaceprint:(id)arg1;	// IMP=0x0000000000967b11

// Remaining properties
@property(copy) NSData *data; // @dynamic data;
@property(retain) HMBModelReference *faceCrop; // @dynamic faceCrop;
@property(copy) NSUUID *modelUUID; // @dynamic modelUUID;

@end
