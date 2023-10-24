//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGpsAssistantAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000ca05b6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ca059d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000ca0540
- (void)setTunnelEndPointPositionAssistance:(struct TunnelEndPositionAssistance)arg1;	// IMP=0x0020000000ca1064
- (void)setTunnelBridgeAssistance:(struct TunnelBridgeAssistance)arg1;	// IMP=0x0010000000ca0fc8
- (void)setMapMatchedPositionAssistance:(struct MapMatchedPositionAssistance)arg1;	// IMP=0x0010000000ca0f2d
- (void)setDirectionOfTravelAssistance:(struct DirectionOfTravelAssistance)arg1;	// IMP=0x0010000000ca0e6f
- (void)setVehicleGyroAssistance:(double)arg1 vehicleGyro:(CDStruct_15521927)arg2;	// IMP=0x0010000000ca0b2e
- (void)setVehicleSpeedAssistance:(double)arg1 vehicleSpeed:(CDStruct_5e97c62c)arg2;	// IMP=0x0010000000ca07ca
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ca07a2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ca0775
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ca074d
- (void *)adaptee;	// IMP=0x0010000000ca071a
- (void)endService;	// IMP=0x0010000000ca06ff
- (void)beginService;	// IMP=0x0010000000ca064f
- (id)init;	// IMP=0x0010000000ca0612

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

