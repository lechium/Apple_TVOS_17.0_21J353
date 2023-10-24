//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLDispatchSilo, GEONavigationListener, NSString;
@protocol CLIntersiloUniverse;

@interface CLRouteListener : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    GEONavigationListener *_geoNavListener;	// 16 = 0x10
    double _lastEtaInSeconds;	// 24 = 0x18
    double _lastEtaAbsTime;	// 32 = 0x20
    CDStruct_2c43369c _lastCoordinate;	// 40 = 0x28
    struct INotifier *_parentNotifier;	// 56 = 0x38
    struct unique_ptr<CLDarwinNotifier_Type::Client, std::default_delete<CLDarwinNotifier_Type::Client>> _darwinNotifierClient;	// 64 = 0x40
    id <CLIntersiloUniverse> _universe;	// 72 = 0x48
    CLDispatchSilo *_silo;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x00200000003e6311
- (void).cxx_destruct;	// IMP=0x00100000003e62f0
- (void)onDarwinNotification:(int)arg1 data:(CDStruct_2920cfb7)arg2;	// IMP=0x00100000003e612a
- (void)logState:(id)arg1;	// IMP=0x00100000003e5aec
- (void)logTransitRoute:(id)arg1;	// IMP=0x00100000003e3e71
- (void)logRoute:(id)arg1;	// IMP=0x00100000003e35d3
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;	// IMP=0x00100000003e311f
- (void)navigationListener:(id)arg1 didUpdateTransitSummary:(id)arg2;	// IMP=0x00100000003e2f59
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;	// IMP=0x00100000003e2a16
- (void)notifyFromLastInfo;	// IMP=0x00100000003e299d
- (void)clearLocationData;	// IMP=0x00100000003e297e
- (void)disable;	// IMP=0x00100000003e2690
- (void)enable;	// IMP=0x00100000003e24b9
- (void)dealloc;	// IMP=0x00100000003e2463
- (id)initInUniverse:(id)arg1 withDelegate:(struct INotifier *)arg2;	// IMP=0x00100000003e231a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

