//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAttSiriStateMonitor : CSEventMonitor
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _attendingState;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000a5a6c
- (void).cxx_destruct;	// IMP=0x00200000000a58c4
@property(nonatomic) unsigned long long attendingState; // @synthesize attendingState=_attendingState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_stopMonitoring;	// IMP=0x00100000000a5877
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000a5871
- (_Bool)isAttendingForDictation;	// IMP=0x00100000000a5857
- (_Bool)isAttending;	// IMP=0x00100000000a583e
- (void)updateState:(unsigned long long)arg1;	// IMP=0x00100000000a57e8
- (unsigned long long)getAttendingState;	// IMP=0x00100000000a5755
- (id)init;	// IMP=0x00100000000a56e7

@end

