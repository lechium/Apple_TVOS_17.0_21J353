//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSOrderedSet, NSString;

@interface GamesPlayedSummaryList : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00100000001cf7e2

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;
@property(copy, nonatomic) NSNumber *withinSecs; // @dynamic withinSecs;

@end

