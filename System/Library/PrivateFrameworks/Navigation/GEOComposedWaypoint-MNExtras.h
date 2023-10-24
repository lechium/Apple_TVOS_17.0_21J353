//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedWaypoint.h>

@interface GEOComposedWaypoint (MNExtras)
+ (id)appleParkWaypointFromLatLng;	// IMP=0x0080000000052632
+ (id)appleParkWaypointFromAddress;	// IMP=0x00800000000525bf
+ (id)appleParkWaypointFromMuid;	// IMP=0x008000000005254c
- (id)humanDescriptionWithAddressAndLatLng;	// IMP=0x001000000005047a
- (id)humanDescriptionWithLatLng;	// IMP=0x0010000000050349
- (id)humanDescription;	// IMP=0x0010000000050226
- (id)navAnnouncementAddressAndSubstituteType:(int *)arg1;	// IMP=0x00100000000500a5
- (id)navAnnouncementAddress;	// IMP=0x0010000000050091
- (id)navAnnouncementNameAndSubstituteType:(int *)arg1;	// IMP=0x001000000004fee7
- (id)navAnnouncementName;	// IMP=0x001000000004fed3
- (id)localeIdentifier;	// IMP=0x001000000004fe11
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1 substituteType:(int *)arg2;	// IMP=0x001000000004fd64
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1;	// IMP=0x001000000004fd17
- (id)navDisplayNameAndSubstituteType:(int *)arg1;	// IMP=0x001000000004fc95
- (id)navDisplayAddressAndSubstituteType:(int *)arg1;	// IMP=0x001000000004fc48
- (id)navDisplayName;	// IMP=0x001000000004fc2f
- (id)navDisplayAddress;	// IMP=0x001000000004fbae
- (id)directionsListAddress;	// IMP=0x001000000004fb03
- (id)bestSpokenName;	// IMP=0x001000000004f9d0
- (id)bestDisplayName:(_Bool)arg1;	// IMP=0x001000000004f854
@end

