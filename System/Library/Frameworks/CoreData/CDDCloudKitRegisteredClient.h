//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitRegisteredClient : NSManagedObject
{
}

+ (id)entityName;	// IMP=0x00400000002cd73a

// Remaining properties
@property(retain, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(retain, nonatomic) NSString *containerIdentifier; // @dynamic containerIdentifier;
@property(retain, nonatomic) NSString *fileProtectionType; // @dynamic fileProtectionType;
@property(retain, nonatomic) NSSet *scheduledActivities; // @dynamic scheduledActivities;
@property(retain, nonatomic) NSString *storeConfigurationName; // @dynamic storeConfigurationName;
@property(retain, nonatomic) NSString *storePath; // @dynamic storePath;

@end

