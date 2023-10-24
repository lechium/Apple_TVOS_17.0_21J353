//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSCKRecordZoneMetadata, NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NSCKMirroredRelationship : NSManagedObject
{
}

+ (id)entityPath;	// IMP=0x00400000002a045d

// Remaining properties
@property(retain, nonatomic) NSString *cdEntityName; // @dynamic cdEntityName;
@property(retain, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(retain, nonatomic) NSNumber *isPending; // @dynamic isPending;
@property(retain, nonatomic) NSNumber *isUploaded; // @dynamic isUploaded;
@property(retain, nonatomic) NSNumber *needsDelete; // @dynamic needsDelete;
@property(retain, nonatomic) NSString *recordName; // @dynamic recordName;
@property(retain, nonatomic) NSCKRecordZoneMetadata *recordZone; // @dynamic recordZone;
@property(retain, nonatomic) NSString *relatedEntityName; // @dynamic relatedEntityName;
@property(retain, nonatomic) NSString *relatedRecordName; // @dynamic relatedRecordName;
@property(retain, nonatomic) NSString *relationshipName; // @dynamic relationshipName;

@end

