//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface RMStatusSubscription : NSManagedObject
{
}

- (id)reportDetails;	// IMP=0x0020000000015ad5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *items; // @dynamic items;
@property(retain, nonatomic) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
@property(retain, nonatomic) NSString *sourceServerToken; // @dynamic sourceServerToken;
@property(nonatomic) short sourceType; // @dynamic sourceType;
@property(readonly) Class superclass;

@end

