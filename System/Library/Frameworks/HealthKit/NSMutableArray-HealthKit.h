//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (HealthKit)
- (void)hk_shuffle;	// IMP=0x007000000011a13a
- (void)hk_addNonNilObject:(id)arg1;	// IMP=0x007000000011a121
- (void)hk_removeObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x007000000011a075
- (void)hk_addUniqueObjectsFromArray:(id)arg1;	// IMP=0x0070000000119f11
- (void)hk_addObjectsFromArray:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0070000000119da4
- (id)hk_dequeue;	// IMP=0x0070000000119d5f
@end
