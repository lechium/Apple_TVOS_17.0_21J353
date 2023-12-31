//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/RTLocation.h>

@class NSString;

@interface RTLocation (RTCoreDataTransformable)
+ (id)createWithMapItemMO:(id)arg1;	// IMP=0x00100000001bb4ea
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x00100000001bb3c2
+ (int)convertLocationReferenceFrame:(int)arg1;	// IMP=0x0010000000282f15
- (id)locationAtDistance:(double)arg1 course:(double)arg2;	// IMP=0x001000000028441d
- (void)_distanceBetweenShiftedLocation:(id)arg1 unshiftedLocation:(id)arg2 locationShifter:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002840e4
- (void)distanceFromLocation:(id)arg1 locationShifter:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000283c13
- (double)distanceFromLocation:(id)arg1 locationShifter:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000283509
- (id)initWithCLCircularRegion:(id)arg1;	// IMP=0x00100000002833e8
- (id)initWithCLLocationCoordinate2D:(struct CLLocationCoordinate2D *)arg1;	// IMP=0x001000000028334c
- (id)initWithRTPair:(id)arg1;	// IMP=0x00100000002831a6
- (id)initWithCLLocation:(id)arg1;	// IMP=0x001000000028304b
- (id)initWithRTPLocation:(id)arg1;	// IMP=0x0010000000282f29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

