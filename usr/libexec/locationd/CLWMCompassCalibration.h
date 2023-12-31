//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMCompassCalibration
{
    shared_ptr_da0ccc6f _writer;	// 8 = 0x8
    id <CLWorkoutRecordingDelegate> _delegate;	// 24 = 0x18
    id <CLIntersiloUniverse> _universe;	// 32 = 0x20
    NSMutableDictionary *_metadata;	// 40 = 0x28
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _compassCalibrationDispatcher;	// 48 = 0x30
    struct __CFString *_kCompassCalibrationKey;	// 56 = 0x38
    double _kCachedCalibrationLifeTime;	// 64 = 0x40
    float _kCachedCompassCalibrationQuality;	// 72 = 0x48
    int _sampleCount;	// 76 = 0x4c
}

- (id).cxx_construct;	// IMP=0x0020000000f87e8a
- (void).cxx_destruct;	// IMP=0x0010000000f87e4e
- (int)getSampleCount;	// IMP=0x0010000000f87e3e
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000000f87e2a
- (void)onCompassCalibrationData:(const struct CompassCalibration *)arg1;	// IMP=0x0010000000f87c6a
- (void)retrieveCachedCompassCalibration;	// IMP=0x0010000000f877d9
- (id)metadata;	// IMP=0x0010000000f877b4
- (void)dealloc;	// IMP=0x0010000000f87766
- (void)teardownListeners;	// IMP=0x0010000000f87599
- (void)setupListener;	// IMP=0x0010000000f873c4
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000000f872fe

@end

