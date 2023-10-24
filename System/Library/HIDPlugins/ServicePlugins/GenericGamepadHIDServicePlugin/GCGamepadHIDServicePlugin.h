//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HIDConnection, HIDDevice, HIDUserDevice, MISSING_TYPE, NSArray, NSNumber, NSString, NSXPCConnection;
@protocol GCBatteryServiceClientInterface, HIDEventDispatcher, OS_dispatch_queue, OS_dispatch_source;

@interface GCGamepadHIDServicePlugin : NSObject
{
    CDUnknownBlockType _cancelHandler;	// 8 = 0x8
    NSNumber *_prop;	// 16 = 0x10
    _Bool _activated;	// 24 = 0x18
    _Bool _clientAdded;	// 25 = 0x19
    NSObject<OS_dispatch_source> *_idleDispatchSource;	// 32 = 0x20
    struct BTSessionImpl *_session;	// 40 = 0x28
    _Bool _buttonHome;	// 48 = 0x30
    _Bool _buttonMenu;	// 49 = 0x31
    _Bool _buttonOptions;	// 50 = 0x32
    _Bool _buttonShare;	// 51 = 0x33
    struct {
        double directionPadUp;
        double directionPadDown;
        double directionPadLeft;
        double directionPadRight;
        double buttonA;
        double buttonB;
        double buttonX;
        double buttonY;
        double buttonL1;
        double buttonR1;
        double buttonL2;
        double buttonR2;
        _Bool leftThumbstick__rightThumbstick__buttonL3;
        _Bool buttonR3;
        unsigned int controllerType;
    } _gameControllerState;	// 56 = 0x38
    CDStruct_cd435f0f _gameControllerExtendedState;	// 176 = 0xb0
    unsigned int _motionSequenceNumber;	// 368 = 0x170
    CDStruct_06597ee6 _motionState;	// 376 = 0x178
    _Bool _hapticsActive;	// 480 = 0x1e0
    int _pendingHapticZeroReports;	// 484 = 0x1e4
    float _hapticDispatchFrequency;	// 488 = 0x1e8
    double _currentHapticClipTime;	// 496 = 0x1f0
    struct timespec _currentHapticDispatchTime;	// 504 = 0x1f8
    _Bool _loopHapticEvent;	// 520 = 0x208
    NSObject<OS_dispatch_source> *_hapticDispatchSource;	// 528 = 0x210
    NSXPCConnection *_daemonConnection;	// 536 = 0x218
    id <GCBatteryServiceClientInterface> _batteryClient;	// 544 = 0x220
    NSObject<OS_dispatch_queue> *_internalQueue;	// 552 = 0x228
    _Bool _bluetoothClassic;	// 560 = 0x230
    _Bool _usb;	// 561 = 0x231
    _Bool _bluetoothLE;	// 562 = 0x232
    _Bool _virtualDevice;	// 563 = 0x233
    unsigned int _service;	// 564 = 0x234
    float _idleTimeoutDuration;	// 568 = 0x238
    float _leftThumbstickNoiseBuffer;	// 572 = 0x23c
    float _rightThumbstickNoiseBuffer;	// 576 = 0x240
    float _leftThumbstickDeadzoneRadius;	// 580 = 0x244
    float _leftThumbstickAxisSnapRadius;	// 584 = 0x248
    float _rightThumbstickDeadzoneRadius;	// 588 = 0x24c
    float _rightThumbstickAxisSnapRadius;	// 592 = 0x250
    HIDConnection *_client;	// 600 = 0x258
    id <HIDEventDispatcher> _dispatcher;	// 608 = 0x260
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 616 = 0x268
    HIDDevice *_device;	// 624 = 0x270
    HIDUserDevice *_batteryUserDevice;	// 632 = 0x278
    unsigned long long _regID;	// 640 = 0x280
    unsigned long long _lastEventTime;	// 648 = 0x288
    NSString *_uniqueIdentifier;	// 656 = 0x290
    CDStruct_f4b747e6 *_batteryReport;	// 664 = 0x298
    NSArray *_hapticMotors;	// 672 = 0x2a0
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x00100000000012ac
- (void).cxx_destruct;	// IMP=0x000000000000547b
@property(nonatomic) float rightThumbstickAxisSnapRadius; // @synthesize rightThumbstickAxisSnapRadius=_rightThumbstickAxisSnapRadius;
@property(nonatomic) float rightThumbstickDeadzoneRadius; // @synthesize rightThumbstickDeadzoneRadius=_rightThumbstickDeadzoneRadius;
@property(nonatomic) float leftThumbstickAxisSnapRadius; // @synthesize leftThumbstickAxisSnapRadius=_leftThumbstickAxisSnapRadius;
@property(nonatomic) float leftThumbstickDeadzoneRadius; // @synthesize leftThumbstickDeadzoneRadius=_leftThumbstickDeadzoneRadius;
@property(retain, nonatomic) NSArray *hapticMotors; // @synthesize hapticMotors=_hapticMotors;
@property(nonatomic) float hapticDispatchFrequency; // @synthesize hapticDispatchFrequency=_hapticDispatchFrequency;
@property(nonatomic) float rightThumbstickNoiseBuffer; // @synthesize rightThumbstickNoiseBuffer=_rightThumbstickNoiseBuffer;
@property(nonatomic) float leftThumbstickNoiseBuffer; // @synthesize leftThumbstickNoiseBuffer=_leftThumbstickNoiseBuffer;
@property(nonatomic) float idleTimeoutDuration; // @synthesize idleTimeoutDuration=_idleTimeoutDuration;
@property(readonly, nonatomic, getter=isVirtualDevice) _Bool virtualDevice; // @synthesize virtualDevice=_virtualDevice;
@property(readonly, nonatomic, getter=isBluetoothLE) _Bool bluetoothLE; // @synthesize bluetoothLE=_bluetoothLE;
@property(readonly, nonatomic, getter=isUSB) _Bool usb; // @synthesize usb=_usb;
@property(readonly, nonatomic, getter=isBluetoothClassic) _Bool bluetoothClassic; // @synthesize bluetoothClassic=_bluetoothClassic;
@property(readonly, nonatomic) CDStruct_f4b747e6 *batteryReport; // @synthesize batteryReport=_batteryReport;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(readonly, nonatomic) HIDUserDevice *batteryUserDevice; // @synthesize batteryUserDevice=_batteryUserDevice;
@property(readonly, nonatomic) HIDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) unsigned int service; // @synthesize service=_service;
@property(nonatomic) __weak id <HIDEventDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak HIDConnection *client; // @synthesize client=_client;
- (void)readBatteryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005201
- (void)connectToGenericDeviceDriverConfigurationServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000051ef
- (void)connectToGameIntentServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000051dd
- (void)connectToBatteryServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000050fa
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000050e8
- (void)connectToAdaptiveTriggersServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000050d6
- (void)connectToLightServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000050c4
- (void)connectToNintendoJoyConFusionGestureServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000050b2
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;	// IMP=0x0000000000004fe1
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;	// IMP=0x0000000000004f6d
- (void)fetchDeviceRegistryIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004eea
- (void)requestServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004e2c
- (void)ping;	// IMP=0x0000000000004dd0
- (float)defaultHapticDispatchFrequency;	// IMP=0x0000000000004dc2
- (id)defaultHapticMotors;	// IMP=0x0000000000004da9
- (float)defaultRightAxisSnapRadius;	// IMP=0x0000000000004da0
- (float)defaultLeftAxisSnapRadius;	// IMP=0x0000000000004d97
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x0000000000004d89
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x0000000000004d7b
- (float)defaultIdleTimeoutDuration;	// IMP=0x0000000000004d6d
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x0000000000004d64
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x0000000000004d5b
- (void)enableHaptics;	// IMP=0x0000000000004a9d
- (_Bool)updateHapticMotor:(id)arg1;	// IMP=0x0000000000004995
- (void)stopHaptics;	// IMP=0x00000000000047a9
- (unsigned int)numberOfTimesToSendZeroHapticReport;	// IMP=0x000000000000479e
- (_Bool)isHapticsActive;	// IMP=0x0000000000004792
- (void)updateHaptics:(_Bool)arg1;	// IMP=0x000000000000478c
- (void)dispatchHapticEvent;	// IMP=0x0000000000004786
- (_Bool)isAnyHapticMotorEnabled;	// IMP=0x0000000000004576
- (void)dispatchShareButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000044a5
- (void)dispatchOptionsButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000043d4
- (void)dispatchMenuButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000004303
- (void)dispatchHomeButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000004232
- (void)dispatchGameControllerExtendedEventWithState:(CDStruct_cd435f0f)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000003d32
- (void)dispatchMotionEventWithState:(CDStruct_06597ee6)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000003a7b
- (_Bool)isTwoAxisInputIdle:(MISSING_TYPE **)arg1 prevInput:(MISSING_TYPE **)arg2 noiseBuffer:(float)arg3;	// IMP=0x0000000000003a22
- (void)applyDeadzone:(float)arg1 axisSnapRadius:(float)arg2 input:(MISSING_TYPE **)arg3;	// IMP=0x0000000000003921
- (void)dispatchEvent:(id)arg1;	// IMP=0x000000000000390a
- (void)dispatchEvent:(id)arg1 updateLastEventTime:(_Bool)arg2;	// IMP=0x0000000000003821
- (id)createEvent:(unsigned int)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000037d3
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x00000000000037cb
- (_Bool)isIdle;	// IMP=0x0000000000003658
- (void)updateIdleState;	// IMP=0x000000000000359e
- (void)scheduleIdleTimer;	// IMP=0x0000000000003468
- (_Bool)shouldCreateBatteryDevice;	// IMP=0x0000000000003460
- (void)sendBatteryReport;	// IMP=0x0000000000003353
- (void)updateClientBattery;	// IMP=0x0000000000003286
- (void)createVirtualHIDDeviceForBattery;	// IMP=0x0000000000002f48
- (void)disconnect;	// IMP=0x0000000000002cf3
- (void)setupRawReportHandling;	// IMP=0x0000000000002c79
- (id)createHIDDeviceForService:(unsigned int)arg1;	// IMP=0x0000000000002c45
- (void)clientNotification:(id)arg1 added:(_Bool)arg2;	// IMP=0x0000000000002b60
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0000000000002a73
- (void)cancel;	// IMP=0x0000000000002909
- (void)activate;	// IMP=0x000000000000288b
- (void)setCancelHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000268d
- (void)setEventDispatcher:(id)arg1;	// IMP=0x00000000000025cf
- (id)eventMatching:(id)arg1 forClient:(id)arg2;	// IMP=0x000000000000245e
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x0000000000002389
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x0000000000002027
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000001cf4
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000001681
- (void)initGameControllerDaemonXPC;	// IMP=0x00000000000012b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
