//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOAltitudeManifestReserved : NSObject
{
    struct map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>>> _reservedTriggerData;	// 8 = 0x8
    unsigned int _reservedCurrentRegion;	// 32 = 0x20
    unsigned char _reservedTourServerType;	// 36 = 0x24
    geo_isolater *_reservedIsolater;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000010f3afd
- (void).cxx_destruct;	// IMP=0x00000000010f3ada

@end
