//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TransientSubscriptionHistory : NSManagedObject
{
}

+ (id)channelIdentifierKeyPath;	// IMP=0x004000000000e275
+ (id)lastSubscriptionDateKeyPath;	// IMP=0x004000000000e268
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x004000000000e31c
+ (id)predicateForLastSubscriptionDate:(id)arg1;	// IMP=0x004000000000e282
+ (id)sortDescriptorForLastSubscriptionDateAscending:(_Bool)arg1;	// IMP=0x004000000000e3b6
+ (id)fetchRequest;	// IMP=0x004000000007c21a

// Remaining properties
@property(copy, nonatomic) NSString *channelIdentifier; // @dynamic channelIdentifier;
@property(copy, nonatomic) NSDate *lastSubscriptionDate; // @dynamic lastSubscriptionDate;

@end

