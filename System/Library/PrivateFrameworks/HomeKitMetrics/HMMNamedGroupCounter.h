//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class HMMNamedGroup, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMMNamedGroupCounter : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x0080000000012d4e

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) HMMNamedGroup *group; // @dynamic group;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long value; // @dynamic value;

@end

