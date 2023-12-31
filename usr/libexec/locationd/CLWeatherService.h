//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString;

@interface CLWeatherService : CLIntersiloService
{
    NSMutableSet *_clients;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x002000000084bb67
+ (id)getSilo;	// IMP=0x001000000084ba5b
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000084ba42
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000084b9e5
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)localLocationForecastUpdatedForConditions:(id)arg1;	// IMP=0x001000000084bbef
- (void)weatherForecastUpdated:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 location:(id)arg5;	// IMP=0x001000000084bbdd
- (void)unregisterForWeatherUpdates:(byref id)arg1;	// IMP=0x001000000084bbac
- (void)registerForWeatherUpdates:(byref id)arg1;	// IMP=0x001000000084bb7b
- (void)endService;	// IMP=0x001000000084bb75
- (void)beginService;	// IMP=0x001000000084bb6f
- (void)dealloc;	// IMP=0x001000000084bb20
- (id)init;	// IMP=0x001000000084bab7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

