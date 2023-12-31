//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSConnectionServiceDelegate, CSSmartSiriVolumeProcessor, OS_dispatch_queue;

@interface CSSmartSiriVolumeManager : NSObject
{
    id <CSConnectionServiceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSSmartSiriVolumeProcessor> _smartSiriVolume;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x002000000011326e
- (void).cxx_destruct;	// IMP=0x00200000001131c1
@property(retain, nonatomic) id <CSSmartSiriVolumeProcessor> smartSiriVolume; // @synthesize smartSiriVolume=_smartSiriVolume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSConnectionServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)CSAutomaticVolumeEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x0010000000113051
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;	// IMP=0x0010000000112f6a
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;	// IMP=0x0010000000112e39
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;	// IMP=0x0010000000112d08
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;	// IMP=0x0010000000112be5
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;	// IMP=0x0010000000112ac2
- (void)setPermanentVolumeOffsetWithDirection:(_Bool)arg1;	// IMP=0x0010000000112aac
- (void)setSmartSiriVolumeDirection:(_Bool)arg1;	// IMP=0x0010000000112a96
- (void)setSmartSiriVolumePercentage:(float)arg1;	// IMP=0x0010000000112a80
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;	// IMP=0x0010000000112a6a
- (void)setAsset:(id)arg1;	// IMP=0x0010000000112a54
- (void)startSmartSiriVolume;	// IMP=0x0010000000112a3e
- (id)initWithSamplingRate:(float)arg1;	// IMP=0x00100000001127bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

