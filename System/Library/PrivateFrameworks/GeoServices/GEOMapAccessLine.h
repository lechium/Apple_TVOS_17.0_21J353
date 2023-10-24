//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapAccess, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessLine : NSObject
{
    GEOMapAccess *_map;	// 8 = 0x8
    shared_ptr_035a2da2 _edge;	// 16 = 0x10
    struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> _coordinates;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000011a04b1
- (void).cxx_destruct;	// IMP=0x00000000011a0479
- (double)distanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 outSegmentCoordinate:(struct PolylineCoordinate *)arg2;	// IMP=0x00000000011a01d1
@property(readonly, nonatomic) double length;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
@property(readonly, nonatomic) unsigned long long coordinateCount;
- (id)initWithMap:(id)arg1 edge:(shared_ptr_035a2da2)arg2;	// IMP=0x00000000011a00b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

