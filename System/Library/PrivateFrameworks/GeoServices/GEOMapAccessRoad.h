//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessRoad
{
    shared_ptr_92bc9970 _roadEdge;	// 56 = 0x38
    unsigned long long _roadID;	// 72 = 0x48
}

+ (double)estimatedWidthForRoad:(id)arg1;	// IMP=0x0010000000ea1e72
- (id).cxx_construct;	// IMP=0x0000000000ea1e5b
- (void).cxx_destruct;	// IMP=0x0000000000ea1e4a
@property(readonly, copy) NSString *description;
- (id)tileKeys;	// IMP=0x0000000000ea1b6b
@property(readonly, nonatomic) unsigned long long roadID;
@property(readonly, nonatomic) NSString *internalRoadName;
- (id)findRoadsToNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ea1403
- (id)findRoadsFromNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ea1267
- (id)findRoadsToPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ea10cb
- (id)findRoadsFromPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ea0f2f
- (id)findRoadsFrom:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ea0d8e
- (void)roadEdgesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ea0cf4
- (void)roadFeaturesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ea0c22
@property(readonly, nonatomic) int rampType;
@property(readonly, nonatomic) _Bool isRail;
@property(readonly, nonatomic) _Bool isBridge;
@property(readonly, nonatomic) _Bool isTunnel;
@property(readonly, nonatomic) _Bool speedLimitIsMPH;
@property(readonly, nonatomic) unsigned long long speedLimit;
@property(readonly, nonatomic) double roadWidth;
@property(readonly, nonatomic) int travelDirection;
@property(readonly, nonatomic) int formOfWay;
@property(readonly, nonatomic) int roadClass;
- (id)initWithMap:(id)arg1 roadEdge:(shared_ptr_92bc9970)arg2;	// IMP=0x0000000000ea0662

// Remaining properties
@property(readonly, nonatomic) unsigned long long coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double length;
@property(readonly) Class superclass;

@end
