//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/RTMapItem.h>

@class NSString;

@interface RTMapItem (RTExtensions)
+ (id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000258ca7
+ (id)createWithLearnedLocationOfInterestMO:(id)arg1;	// IMP=0x001000000028dce2
+ (id)createWithLearnedPlaceMO:(id)arg1;	// IMP=0x001000000028dbf1
+ (id)createWithMapItemMO:(id)arg1;	// IMP=0x001000000028d051
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x001000000028cee5
- (id)mergeWithMapItem:(id)arg1 preservingProperties:(id)arg2;	// IMP=0x0010000000258b0a
- (id)removeSource:(unsigned long long)arg1;	// IMP=0x0010000000258aae
- (id)appendSource:(unsigned long long)arg1;	// IMP=0x0010000000258a49
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x001000000028de42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

