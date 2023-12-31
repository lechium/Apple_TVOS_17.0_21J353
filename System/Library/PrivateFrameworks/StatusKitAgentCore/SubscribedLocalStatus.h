//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface SubscribedLocalStatus : NSManagedObject
{
}

+ (id)identifierKeyPath;	// IMP=0x004000000003f10c
+ (id)idsIdentifierKeyPath;	// IMP=0x004000000003f0ff
+ (id)predicateForSubscribedLocalStatusIdentifier:(id)arg1 idsIdentifier:(id)arg2;	// IMP=0x004000000003f24d
+ (id)predicateForSubscribedLocalStatusIDSIdentifier:(id)arg1;	// IMP=0x004000000003f1b3
+ (id)predicateForSubscribedLocalStatusIdentifier:(id)arg1;	// IMP=0x004000000003f119
+ (id)fetchRequest;	// IMP=0x004000000007c1da

// Remaining properties
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *idsIdentifier; // @dynamic idsIdentifier;
@property(copy, nonatomic) NSString *keyDomain; // @dynamic keyDomain;
@property(copy, nonatomic) NSString *keyName; // @dynamic keyName;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) NSData *payload; // @dynamic payload;

@end

