//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIDelayedAction, _UIScreenEdgePanRecognizerSettings;
@protocol _UIScreenEdgePanRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizer : NSObject
{
    struct CGRect _screenBounds;	// 8 = 0x8
    _Bool _shouldUseGrapeFlags;	// 40 = 0x28
    _Bool _hasRecordedData;	// 41 = 0x29
    _Bool _hasDoneInitialBackProjectionTest;	// 42 = 0x2a
    struct CGPoint _initialTouchLocation;	// 48 = 0x30
    double _initialTouchTimestamp;	// 64 = 0x40
    long long _initialInterfaceOrientation;	// 72 = 0x48
    unsigned long long _touchedRegion;	// 80 = 0x50
    UIDelayedAction *_recognitionTimer;	// 88 = 0x58
    struct CGPoint _lastTouchLocation;	// 96 = 0x60
    double _lastTouchTimestamp;	// 112 = 0x70
    long long _lastTouchModifier;	// 120 = 0x78
    long long _type;	// 128 = 0x80
    int _notifyToken;	// 136 = 0x88
    _Bool _simulatorWantsEdgeSwipes;	// 140 = 0x8c
    _Bool _requiresFlatThumb;	// 141 = 0x8d
    _Bool _recognizeAlongEdge;	// 142 = 0x8e
    _UIScreenEdgePanRecognizerSettings *_settings;	// 144 = 0x90
    unsigned long long _targetEdges;	// 152 = 0x98
    long long _state;	// 160 = 0xa0
    unsigned long long _recognizedRegion;	// 168 = 0xa8
    id <_UIScreenEdgePanRecognizerDelegate> _delegate;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000008685d1
@property id <_UIScreenEdgePanRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long recognizedRegion; // @synthesize recognizedRegion=_recognizedRegion;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool recognizeAlongEdge; // @synthesize recognizeAlongEdge=_recognizeAlongEdge;
@property(nonatomic) _Bool requiresFlatThumb; // @synthesize requiresFlatThumb=_requiresFlatThumb;
@property(nonatomic) unsigned long long targetEdges; // @synthesize targetEdges=_targetEdges;
@property(nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
@property(nonatomic) _Bool simulatorWantsEdgeSwipes; // @synthesize simulatorWantsEdgeSwipes=_simulatorWantsEdgeSwipes;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) struct CGPoint _lastTouchLocation; // @synthesize _lastTouchLocation;
@property(readonly, nonatomic) _Bool hasRecordedData; // @synthesize hasRecordedData=_hasRecordedData;
@property(nonatomic) _Bool shouldUseGrapeFlags; // @synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags;
- (unsigned long long)_targetEdges;	// IMP=0x0000000000868455
- (void)_idleTimerElapsed:(id)arg1;	// IMP=0x000000000086830c
- (void)_longPressTimerElapsed:(id)arg1;	// IMP=0x0000000000868212
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;	// IMP=0x0000000000867497
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;	// IMP=0x0000000000866ca7
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;	// IMP=0x0000000000866c17
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000866b87
- (long long)_type;	// IMP=0x0000000000866b7a
- (void)_setState:(long long)arg1;	// IMP=0x0000000000866986
@property(readonly, nonatomic) _Bool useGrapeFlags;
- (void)reset;	// IMP=0x00000000008668f1
- (void)dealloc;	// IMP=0x00000000008668b5
- (id)initWithType:(long long)arg1;	// IMP=0x0000000000866856
- (id)initWithType:(long long)arg1 settings:(id)arg2;	// IMP=0x0000000000866675

@end

