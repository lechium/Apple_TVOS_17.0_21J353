//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSObject, NSString, NSTimer;
@protocol GCMotionServiceClientInterface, GCNintendoJoyConFusionGestureServiceClientInterface, OS_dispatch_source;

@interface JoyConHIDServicePlugin
{
    unsigned char _setupState;	// 8 = 0x8
    unsigned int _quirks;	// 12 = 0xc
    unsigned short _devicePID;	// 16 = 0x10
    NSString *_deviceName;	// 24 = 0x18
    struct {
        NSString *string;
        _Bool hasFecthedAtLeastOnce;
    } _serialNumber;	// 32 = 0x20
    struct {
        struct {
            unsigned short firmwareVersion;
            unsigned char type;
            unsigned char bluetoothMAC[6];
            unsigned char unknown1;
            unsigned char unknown2;
            unsigned char spiColorsOverride;
        } properties;
        _Bool hasFecthedAtLeastOnce;
        _Bool valid;
    } _deviceInfo;	// 48 = 0x30
    struct {
        CDStruct_11ffa521 bodyColor;
        CDStruct_11ffa521 buttonsColor;
        _Bool hasFecthedAtLeastOnce;
        _Bool valid;
    } _colorInfo;	// 62 = 0x3e
    struct {
        struct {
            struct {
                CDStruct_5aea82d7 left;
                CDStruct_5aea82d7 right;
                unsigned int fetchedLeft:1;
                unsigned int fetchedRight:1;
            } factory;
            struct {
                CDStruct_5aea82d7 left;
                CDStruct_5aea82d7 right;
                unsigned int fetchedLeft:1;
                unsigned int fetchedRight:1;
                unsigned int hasLeft:1;
                unsigned int hasRight:1;
            } user;
            struct {
                CDStruct_298edf78 left;
                CDStruct_298edf78 right;
                unsigned int fetchedLeft:1;
                unsigned int fetchedRight:1;
            } parameters;
        } stick;
        struct {
            struct {
                CDStruct_844ecdcb data;
                unsigned int fetchedCalibration:1;
                unsigned int fetchedHorizontalOffset:1;
            } factory;
            struct {
                CDStruct_844ecdcb data;
                unsigned int fetched:1;
                unsigned int hasData:1;
            } user;
            struct {
                CDStruct_03942939 accel;
                CDStruct_03942939 gyro;
            } coefficients;
        } motion;
    } _calibration;	// 72 = 0x48
    struct {
        _Bool initialized;
        struct {
            _Bool charging;
            unsigned char level;
        } info;
    } _battery;	// 272 = 0x110
    unsigned char _lowPowerSetting;	// 275 = 0x113
    unsigned char _inputReportMode;	// 276 = 0x114
    CDStruct_9f249b22 _playerLights;	// 277 = 0x115
    _Bool _vibrationEnabled;	// 281 = 0x119
    _Bool _imuEnabled;	// 282 = 0x11a
    unsigned char _globalPacketNumber;	// 283 = 0x11b
    struct PendingSubcommands _pendingSubcommands;	// 288 = 0x120
    unsigned int _pendingSubcommandsCount;	// 304 = 0x130
    struct {
        struct JoyConSubcommand *subcommand;
        NSObject<OS_dispatch_source> *timeout;
        unsigned long long requestTimestamp;
    } _outstandingSubcommand;	// 312 = 0x138
    struct {
        unsigned long long activateTimestamp;
        unsigned long long cancelTimestamp;
        unsigned long long lastInputReportTimestamp;
        unsigned char detectedInputReportMode;
        struct {
            CDStruct_e6f94ff9 left;
            CDStruct_e6f94ff9 right;
        } sticks;
    } _statistics;	// 336 = 0x150
    id <GCNintendoJoyConFusionGestureServiceClientInterface> _gestureClient;	// 392 = 0x188
    NSTimer *_homeButtonLongPressGestureTimer;	// 400 = 0x190
    NSTimer *_homeButtonLongPressRecognizedGesture;	// 408 = 0x198
    _Bool _previousHomeButtonPressed;	// 416 = 0x1a0
    id <GCMotionServiceClientInterface> _motionClient;	// 424 = 0x1a8
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x001000000000645d
- (id).cxx_construct;	// IMP=0x0000000000013eab
- (void).cxx_destruct;	// IMP=0x0000000000013e24
- (float)defaultRightAxisSnapRadius;	// IMP=0x0000000000013e1b
- (float)defaultLeftAxisSnapRadius;	// IMP=0x0000000000013e12
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x0000000000013e09
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x0000000000013e00
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x0000000000013dd6
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x0000000000013dac
- (void)applyDeadzone:(float)arg1 axisSnapRadius:(float)arg2 input:(MISSING_TYPE **)arg3;	// IMP=0x0000000000013da6
- (void)homeButtonPressed:(_Bool)arg1;	// IMP=0x0000000000013a96
- (void)homeButtonLongPressGestureEnded:(id)arg1;	// IMP=0x00000000000139e2
- (void)homeButtonLongPressGestureBegan:(id)arg1;	// IMP=0x00000000000138cc
- (void)connectToNintendoJoyConFusionGestureServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013816
- (CDStruct_a46637cf)currentRumbleData;	// IMP=0x0000000000013410
- (id)defaultHapticMotors;	// IMP=0x000000000001327a
- (float)defaultHapticDispatchFrequency;	// IMP=0x000000000001326c
- (void)dispatchHapticEvent;	// IMP=0x000000000001325a
- (void)readSensorsActiveWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013241
- (void)updateSensorsActive:(_Bool)arg1;	// IMP=0x00000000000131aa
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000130f7
- (void)dispatchCurrentRumbleData;	// IMP=0x0000000000010d2b
- (void)handleStandardFullPayload:(long long)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000000000f2ee
- (void)handleHIDControllerPayload:(long long)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000000000e721
- (void)setupRawReportHandling;	// IMP=0x000000000000e044
- (void)refreshCalibrationData;	// IMP=0x000000000000bc9b
- (void)refreshDeviceInfo;	// IMP=0x000000000000ac6c
- (void)refreshLowPowerSetting;	// IMP=0x000000000000a4d2
- (void)setVibrationEnabled:(_Bool)arg1;	// IMP=0x000000000000a1ad
- (void)setIMUEnabled:(_Bool)arg1;	// IMP=0x0000000000009e6a
- (void)setLowPower:(_Bool)arg1;	// IMP=0x0000000000009b21
- (void)setInputMode:(unsigned char)arg1;	// IMP=0x0000000000009812
- (void)setPlayerLights:(CDStruct_9f249b22)arg1;	// IMP=0x000000000000940e
- (_Bool)io_playerLights:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000008eb4
- (_Bool)io_inputMode:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000008d30
- (_Bool)io_lowPowerSetting:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000008cdf
- (_Bool)io_calibrationInfo:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000007e60
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x0000000000007cc1
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x0000000000006d91
@property(readonly, copy) NSString *description;
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x0000000000006d72
- (void)initGameControllerDaemonXPC;	// IMP=0x0000000000006d36
- (void)cancel;	// IMP=0x0000000000006b04
- (void)ready;	// IMP=0x00000000000068fc
- (void)activate;	// IMP=0x0000000000006780
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000006562

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

