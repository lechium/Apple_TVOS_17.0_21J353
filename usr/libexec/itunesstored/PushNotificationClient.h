//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSString;

@interface PushNotificationClient : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;	// IMP=0x0040000000096c8c

// Remaining properties
@property(copy, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;
@property(copy, nonatomic) NSArray *notifications; // @dynamic notifications;

@end

