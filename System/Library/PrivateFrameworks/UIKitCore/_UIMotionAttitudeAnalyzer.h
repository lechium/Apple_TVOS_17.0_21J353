//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIMotionAttitudeAnalyzer
{
    double _smoothingDegree;	// 8 = 0x8
    double _referenceShiftSpeed;	// 16 = 0x10
    double _distanceMultiplier;	// 24 = 0x18
    _Bool _hasReferenceQuaternion;	// 32 = 0x20
    union _GLKQuaternion _referenceQuaternion;	// 48 = 0x30
    union _GLKQuaternion _absoluteQuaternion;	// 64 = 0x40
    double _lastUpdate;	// 80 = 0x50
    double _idleStartTime;	// 88 = 0x58
    struct UIOffset _idleStartOffset;	// 96 = 0x60
    double _jumpThreshold;	// 112 = 0x70
    double _idleLeeway;	// 120 = 0x78
    double _secondsBeforeIdle;	// 128 = 0x80
    double _lockValue;	// 136 = 0x88
    double _lockStrength;	// 144 = 0x90
    UIWindow *_diagnosticsWindow;	// 152 = 0x98
    UILabel *_idleIndicator;	// 160 = 0xa0
    UIView *_horizontalLockIndicator;	// 168 = 0xa8
    UIView *_verticalLockIndicator;	// 176 = 0xb0
    _Bool _hasHistory;	// 184 = 0xb8
    struct UIOffset _lastAppliedViewerOffset;	// 192 = 0xc0
    union _GLKQuaternion _lastAppliedRelativeQuaternion;	// 208 = 0xd0
    _Bool _isApplyingHysteresis;	// 224 = 0xe0
    union _GLKQuaternion _relativeQuaternionOnHysteresisEntry;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000000d227d7
- (void)_tearDownDiagnosticsWindow;	// IMP=0x0000000000d2279a
- (void)_createDiagnosticsWindow;	// IMP=0x0000000000d2269f
- (void)_tearDownDirectionLockIndicators;	// IMP=0x0000000000d2262d
- (void)_createDirectionLockIndicators;	// IMP=0x0000000000d222cf
- (void)_tearDownIdleIndicator;	// IMP=0x0000000000d22297
- (void)_createIdleIndicator;	// IMP=0x0000000000d21fba
- (void)_updateDirectionalLockIndicators;	// IMP=0x0000000000d21d89
- (void)_showIdleUI:(_Bool)arg1;	// IMP=0x0000000000d21d66
- (void)_updateSettings;	// IMP=0x0000000000d2194e
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000d2193c
- (void)resetHysteresis;	// IMP=0x0000000000d2191e
- (void)updateHistory;	// IMP=0x0000000000d21871
- (_Bool)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(struct UIOffset)arg1 wasSuspendingApplicationForHysteresis:(_Bool)arg2;	// IMP=0x0000000000d217b7
- (_Bool)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(_Bool)arg3 returningShouldToggleSlowUpdates:(_Bool *)arg4 logger:(id)arg5;	// IMP=0x0000000000d2151d
- (_Bool)_isIdleGivenTimestamp:(double)arg1;	// IMP=0x0000000000d214fc
- (void)_updateIdleStateForRawOffset:(struct UIOffset)arg1 timestamp:(double)arg2;	// IMP=0x0000000000d2146c
- (double)_directionLockStrength;	// IMP=0x0000000000d2145a
- (long long)_directionLockStatus;	// IMP=0x0000000000d213d3
- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset)arg1;	// IMP=0x0000000000d21352
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion)arg1;	// IMP=0x0000000000d211c2
- (union _GLKQuaternion)_relativeQuaternion;	// IMP=0x0000000000d2112d
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;	// IMP=0x0000000000d210eb
- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1 timestamp:(double)arg2;	// IMP=0x0000000000d20c3a
- (struct UIOffset)_currentRawOffset:(union _GLKQuaternion)arg1;	// IMP=0x0000000000d20b10
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset)arg1;	// IMP=0x0000000000d20a4b
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset)arg1;	// IMP=0x0000000000d20749
- (void)reset;	// IMP=0x0000000000d206c1
- (void)updateWithEvent:(id)arg1;	// IMP=0x0000000000d204e9
- (void)dealloc;	// IMP=0x0000000000d2041a
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000d20359

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
