//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZoneLocalInput, NSMutableSet, NSString, NSUUID;
@protocol HMDPersonDataSource;

__attribute__((visibility("hidden")))
@interface HMDPersonDataBatchChange : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    id <HMDPersonDataSource> _dataSource;	// 16 = 0x10
    HMBLocalZoneLocalInput *_localInput;	// 24 = 0x18
    NSMutableSet *_addedOrUpdatedPersons;	// 32 = 0x20
    NSMutableSet *_removedPersonsUUIDs;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000002b24da
- (void).cxx_destruct;	// IMP=0x00000000002b2478
@property(readonly) NSMutableSet *removedPersonsUUIDs; // @synthesize removedPersonsUUIDs=_removedPersonsUUIDs;
@property(readonly) NSMutableSet *addedOrUpdatedPersons; // @synthesize addedOrUpdatedPersons=_addedOrUpdatedPersons;
@property(readonly) HMBLocalZoneLocalInput *localInput; // @synthesize localInput=_localInput;
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x00000000002b2327
- (id)logIdentifier;	// IMP=0x00000000002b22d7
- (void)commit;	// IMP=0x00000000002b1f55
- (void)removeFaceCropWithUUID:(id)arg1;	// IMP=0x00000000002b1e2f
- (void)removePersonWithUUID:(id)arg1;	// IMP=0x00000000002b1d0b
- (void)addOrUpdateFaceCrop:(id)arg1;	// IMP=0x00000000002b1b59
- (void)addOrUpdatePerson:(id)arg1;	// IMP=0x00000000002b1a35
- (id)initWithLocalInput:(id)arg1;	// IMP=0x00000000002b1918

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

