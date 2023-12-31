//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RemovedUser : NSManagedObject
{
}

+ (id)presenceIdentifierKeyPath;	// IMP=0x008000000000e96a
+ (id)statusTypeIdentifierKeyPath;	// IMP=0x008000000000e95d
+ (id)handleKeyPath;	// IMP=0x008000000000e950
+ (id)dateRemovedKeyPath;	// IMP=0x008000000000e943
+ (id)predicateForPresenceIdentifier:(id)arg1;	// IMP=0x008000000000eb0d
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x008000000000ea73
+ (id)predicateForHandleString:(id)arg1;	// IMP=0x008000000000e9d9
+ (id)predicateForHandle:(id)arg1;	// IMP=0x008000000000e977
+ (id)fetchRequest;	// IMP=0x008000000007c19a

// Remaining properties
@property(copy, nonatomic) NSDate *dateRemoved; // @dynamic dateRemoved;
@property(copy, nonatomic) NSString *presenceIdentifier; // @dynamic presenceIdentifier;
@property(copy, nonatomic) NSString *removedHandle; // @dynamic removedHandle;
@property(copy, nonatomic) NSString *statusTypeIdentifier; // @dynamic statusTypeIdentifier;

@end

