//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, PushNotificationClient;

@interface PushNotification : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;	// IMP=0x00400000000979b2

// Remaining properties
@property(retain, nonatomic) PushNotificationClient *client; // @dynamic client;
@property(copy, nonatomic) NSData *userInfo; // @dynamic userInfo;

@end

