//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class CDDCloudKitRegisteredClient, NSDate, NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface CDDCloudKitScheduledActivity : NSManagedObject
{
}

+ (id)entityName;	// IMP=0x004000000025084b
- (id)xpcActivityCriteria;	// IMP=0x0000000000250953
- (void)populateFromCriteria:(id)arg1;	// IMP=0x00000000002508bb
@property(nonatomic) unsigned long long activityType;

// Remaining properties
@property(retain, nonatomic) NSNumber *activityTypeNum; // @dynamic activityTypeNum;
@property(retain, nonatomic) NSUUID *activityUUID; // @dynamic activityUUID;
@property(retain, nonatomic) NSNumber *isUserRequestedBackupTask; // @dynamic isUserRequestedBackupTask;
@property(retain, nonatomic) CDDCloudKitRegisteredClient *registeredClient; // @dynamic registeredClient;
@property(retain, nonatomic) NSDate *scheduledAt; // @dynamic scheduledAt;

@end

