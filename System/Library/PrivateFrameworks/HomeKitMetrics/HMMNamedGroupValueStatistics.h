//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class HMMNamedGroup, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMMNamedGroupValueStatistics : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x0080000000012d6e

// Remaining properties
@property(nonatomic) long long count; // @dynamic count;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) HMMNamedGroup *group; // @dynamic group;
@property(nonatomic) long long max; // @dynamic max;
@property(nonatomic) long long min; // @dynamic min;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long sum; // @dynamic sum;

@end

