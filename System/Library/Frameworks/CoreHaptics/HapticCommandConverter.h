//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HapticServerConfig;

__attribute__((visibility("hidden")))
@interface HapticCommandConverter : NSObject
{
    HapticServerConfig *_serverConfig;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018b71
@property(readonly) HapticServerConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
- (id)CHtoAVParameterCurve:(id)arg1;	// IMP=0x00000000000184f8
- (id)eventForParameterCurveEntry:(id)arg1;	// IMP=0x0000000000018301
- (id)eventForDynamicParameterEntry:(id)arg1;	// IMP=0x0000000000016ed2
- (id)eventForEventEntry:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3;	// IMP=0x0000000000015f05
- (id)eventForSPIEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000015360
- (id)eventForContinuousHapticEventType:(int)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4;	// IMP=0x000000000001446b
- (unsigned long long)continuousHapticEventTypeForDefaultSharpness:(_Bool)arg1;	// IMP=0x00000000000143f1
- (unsigned long long)continuousHapticEventTypeFromSharpness:(float)arg1 sustained:(_Bool)arg2;	// IMP=0x00000000000142e9
- (id)eventForLegacyTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;	// IMP=0x00000000000131dc
- (id)eventForTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;	// IMP=0x00000000000124d1
- (unsigned long long)transientHapticEventTypeForDefaultSharpness;	// IMP=0x000000000001245d
- (unsigned long long)transientHapticEventTypeFromSharpness:(float)arg1;	// IMP=0x0000000000012375
- (id)eventForAudioEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000011360
- (float)limitDynamicParameter:(id)arg1 value:(float)arg2 parameter:(id)arg3;	// IMP=0x00000000000111f1
- (float)limitEventParameter:(id)arg1 value:(float)arg2 parameter:(id)arg3 eventType:(id)arg4;	// IMP=0x000000000001107d
- (id)initWithServerConfig:(id)arg1;	// IMP=0x0000000000010ffe

@end

