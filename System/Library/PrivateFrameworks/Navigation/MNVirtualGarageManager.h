//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, MNTraceRecorder, NSString, NSTimer, VGVehicle;
@protocol MNVirtualGarageProvider;

__attribute__((visibility("hidden")))
@interface MNVirtualGarageManager : NSObject
{
    id <MNVirtualGarageProvider> _provider;	// 8 = 0x8
    _Bool _isStarted;	// 16 = 0x10
    GEOObserverHashTable *_observers;	// 24 = 0x18
    VGVehicle *_lastVehicle;	// 32 = 0x20
    MNTraceRecorder *_traceRecorder;	// 40 = 0x28
    NSTimer *_timer;	// 48 = 0x30
    NSString *_lastVehicleName;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x00100000000f6399
- (void).cxx_destruct;	// IMP=0x00000000000f6dde
@property(readonly, nonatomic) NSString *lastVehicleName; // @synthesize lastVehicleName=_lastVehicleName;
@property(readonly, nonatomic) VGVehicle *lastVehicle; // @synthesize lastVehicle=_lastVehicle;
- (void)virtualGarageProvider:(id)arg1 didUpdateSelectedVehicle:(id)arg2;	// IMP=0x00000000000f682c
- (_Bool)_isStandardProvider:(id)arg1;	// IMP=0x00000000000f67e1
- (id)_standardVirtualGarageProvider;	// IMP=0x00000000000f67c8
- (void)_stop;	// IMP=0x00000000000f6785
- (void)_start;	// IMP=0x00000000000f6748
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000000f66e0
- (void)registerObserver:(id)arg1;	// IMP=0x00000000000f6659
- (void)updatedVehicleStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f6540
@property(readonly, nonatomic) _Bool assumesFullCharge;
@property(readonly, nonatomic) unsigned long long vehiclesCount;
- (void)setTraceRecorder:(id)arg1;	// IMP=0x00000000000f6503
- (void)setProvider:(id)arg1;	// IMP=0x00000000000f63fe
- (void)dealloc;	// IMP=0x00000000000f6355
- (id)initPrivate;	// IMP=0x00000000000f62a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

