//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, SHMetadataMO;

@interface SHGroupMO : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x001000000004b95e

// Remaining properties
@property(retain, nonatomic) SHMetadataMO *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *syncID; // @dynamic syncID;
@property(retain, nonatomic) NSSet *tracks; // @dynamic tracks;

@end

