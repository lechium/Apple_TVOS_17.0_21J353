//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICEnvironmentMonitor, NSString;
@protocol MPCVocalAttenuationPolicyDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCVocalAttenuationThermalPressurePolicy : NSObject
{
    _Bool _disableVocalAttenuation;	// 8 = 0x8
    struct os_unfair_lock_s _dataLock;	// 12 = 0xc
    id <MPCVocalAttenuationPolicyDelegate> _delegate;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    ICEnvironmentMonitor *_thermalMonitor;	// 32 = 0x20
    long long _currentThermalLevel;	// 40 = 0x28
    long long _cutoffThermalLevel;	// 48 = 0x30
    long long _reenablementThermalLevel;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001cf671
@property(nonatomic, getter=shouldDisableVocalAttenuation) _Bool disableVocalAttenuation; // @synthesize disableVocalAttenuation=_disableVocalAttenuation;
@property(readonly, nonatomic) struct os_unfair_lock_s dataLock; // @synthesize dataLock=_dataLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(nonatomic) long long reenablementThermalLevel; // @synthesize reenablementThermalLevel=_reenablementThermalLevel;
@property(nonatomic) long long cutoffThermalLevel; // @synthesize cutoffThermalLevel=_cutoffThermalLevel;
@property(nonatomic) long long currentThermalLevel; // @synthesize currentThermalLevel=_currentThermalLevel;
@property(retain, nonatomic) ICEnvironmentMonitor *thermalMonitor; // @synthesize thermalMonitor=_thermalMonitor;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak id <MPCVocalAttenuationPolicyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateEvaluationWithReason:(id)arg1;	// IMP=0x00000000001cf49c
- (void)thermalStateDidChange:(long long)arg1;	// IMP=0x00000000001cf243
- (void)environmentMonitorDidChangeThermalLevel:(id)arg1;	// IMP=0x00000000001cf1ea
- (id)evaluation;	// IMP=0x00000000001cf0f1
- (void)reset;	// IMP=0x00000000001cf0eb
@property(readonly, nonatomic) _Bool canBeReset;
- (id)initWithThermalMonitor:(id)arg1 calloutQueue:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000001cefc1
- (id)initWithCalloutQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000001cef2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

