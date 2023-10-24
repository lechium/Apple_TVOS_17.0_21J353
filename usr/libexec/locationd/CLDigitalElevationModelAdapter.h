//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLDigitalElevationModelAdapter : CLIntersiloService
{
    void *_cldem;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x0020000000ad5806
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ad57ed
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000ad5790
@property(nonatomic) void *cldem; // @synthesize cldem=_cldem;
- (void)updateComputeDemFlatnessMetric:(_Bool)arg1;	// IMP=0x0010000000ad8cb0
- (void)downloadAvailabilityFile:(double)arg1;	// IMP=0x0010000000ad81cb
- (void)downloadIfNeeded:(CDUnknownBlockType)arg1 signalQuality:(_Bool)arg2 allowCenterOverCellular:(_Bool)arg3 ringsToDownloadOverCellular:(int)arg4;	// IMP=0x0010000000ad816d
- (void)downloadIfNeeded:(CDUnknownBlockType)arg1 signalQuality:(_Bool)arg2 allowCenterOverCellular:(_Bool)arg3;	// IMP=0x0010000000ad7810
- (void)updateTunnelBridgeAssistance:(struct TunnelBridgeAssistance)arg1;	// IMP=0x0010000000ad77d7
- (void)updateAirborneActivity:(_Bool)arg1;	// IMP=0x0010000000ad777e
- (void)updateMotion:(int)arg1 conf:(int)arg2;	// IMP=0x0010000000ad74f4
- (void)clear;	// IMP=0x0010000000ad74df
- (_Bool)syncgetAltitude:(void *)arg1 rel:(int *)arg2 undulation:(double *)arg3 feedToAltFilter:(_Bool)arg4;	// IMP=0x0010000000ad5ab5
- (_Bool)syncgetAltitude:(void *)arg1 rel:(int *)arg2 undulation:(double *)arg3;	// IMP=0x0010000000ad5aa0
- (void)endService;	// IMP=0x0010000000ad592f
- (void)beginService;	// IMP=0x0010000000ad589f
- (id)init;	// IMP=0x0010000000ad5862

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
