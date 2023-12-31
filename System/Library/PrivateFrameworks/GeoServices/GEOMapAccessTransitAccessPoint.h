//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapAccess, NSString;
@protocol GEOMapTransitStation;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitAccessPoint : NSObject
{
    GEOMapAccess *_map;	// 8 = 0x8
    shared_ptr_4792c490 _accessPoint;	// 16 = 0x10
    id <GEOMapTransitStation> _station;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000358a71
- (void).cxx_destruct;	// IMP=0x0000000000358a40
- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003589be
- (id)findStation:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003587d2
- (id)findStops:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003587ca
- (id)findGeometryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000358786
@property(readonly, nonatomic) long long polygonPointsCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingRect;
@property(readonly, nonatomic) double boundingRadius;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000358703
@property(readonly, nonatomic) unsigned short accessType;
@property(readonly, nonatomic) unsigned char entranceExitType;
@property(readonly, nonatomic) double groundRadius;
@property(readonly, nonatomic) unsigned long long stationID;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) unsigned long long transitID;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)initWithMap:(id)arg1 accessPoint:(shared_ptr_4792c490)arg2;	// IMP=0x0000000000358580

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

