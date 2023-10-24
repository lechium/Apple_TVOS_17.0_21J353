//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDUser, NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDTriggerModel
{
}

+ (id)properties;	// IMP=0x0010000000021fdf
+ (Class)cd_entityClass;	// IMP=0x00100000002b9f47
+ (id)cd_parentReferenceName;	// IMP=0x00100000002b9f3a
- (id)dependentUUIDs;	// IMP=0x0000000000021d8a
- (id)createPayload;	// IMP=0x0000000000021bb0
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x00000000002b9991
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x00000000002b96e4

// Remaining properties
@property(copy, nonatomic) NSNumber *active; // @dynamic active;
@property(retain, nonatomic) NSNumber *autoDelete; // @dynamic autoDelete;
@property(retain, nonatomic) NSString *configuredName; // @dynamic configuredName;
@property(retain, nonatomic) NSArray *currentActionSets; // @dynamic currentActionSets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @dynamic mostRecentFireDate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) HMDUser *owner; // @dynamic owner;
@property(retain, nonatomic) HMDDevice *owningDevice; // @dynamic owningDevice;
@property(readonly) Class superclass;

@end

