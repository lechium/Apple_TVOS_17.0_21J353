//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWScheduler, NSArray, NSSet, NSString, NSXPCConnection;
@protocol AWFrameworkClient, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWRemoteClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AWScheduler *_scheduler;	// 16 = 0x10
    id <AWFrameworkClient> _proxy;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    unsigned long long _tagIndex;	// 40 = 0x28
    unsigned long long _notificationMask;	// 48 = 0x30
    unsigned long long _eventMask;	// 56 = 0x38
    unsigned long long _attentionLostEventMask;	// 64 = 0x40
    _Bool _sampleWhileAbsent;	// 72 = 0x48
    _Bool _retroactiveTimeoutMode;	// 73 = 0x49
    _Bool _continuousFaceDetectMode;	// 74 = 0x4a
    NSSet *_digitizerDisplayUUIDs;	// 80 = 0x50
    NSSet *_keyboardDisplayUUIDs;	// 88 = 0x58
    NSSet *_buttonDisplayUUIDs;	// 96 = 0x60
    NSArray *_attentionLostTimeoutsSec;	// 104 = 0x68
    NSSet *_allowedHIDEventsForRemoteEvent;	// 112 = 0x70
    int _clientIndex;	// 120 = 0x78
    CDStruct_264b1ab3 *_clientState;	// 128 = 0x80
    AWAttentionEvent *_lastEvent;	// 136 = 0x88
    AWAttentionAwarenessConfiguration *_lastConfig;	// 144 = 0x90
    _Bool _invalid;	// 152 = 0x98
    _Bool _activateAttentionDetection;	// 153 = 0x99
    _Bool _activateMotionDetect;	// 154 = 0x9a
    _Bool _activateEyeRelief;	// 155 = 0x9b
    NSString *_identifier;	// 160 = 0xa0
    unsigned long long _samplingInterval;	// 168 = 0xa8
    unsigned long long _samplingDelay;	// 176 = 0xb0
    unsigned long long _streamingStartTime;	// 184 = 0xb8
    double _streamingDuration;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000000fcb0
@property(readonly, nonatomic) _Bool activateEyeRelief; // @synthesize activateEyeRelief=_activateEyeRelief;
@property(readonly, nonatomic) _Bool activateMotionDetect; // @synthesize activateMotionDetect=_activateMotionDetect;
@property(readonly, nonatomic) _Bool activateAttentionDetection; // @synthesize activateAttentionDetection=_activateAttentionDetection;
@property(nonatomic) double streamingDuration; // @synthesize streamingDuration=_streamingDuration;
@property(nonatomic) unsigned long long streamingStartTime; // @synthesize streamingStartTime=_streamingStartTime;
@property(readonly, nonatomic) int clientIndex; // @synthesize clientIndex=_clientIndex;
@property(readonly, nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) unsigned long long samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property(readonly, nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)cancelFaceDetectStreamWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fa50
- (void)streamFaceDetectEventsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f79b
- (_Bool)isStreamingClient;	// IMP=0x000000000000f792
- (void)notifyStreamingClientOfInterruption:(unsigned long long)arg1;	// IMP=0x000000000000f780
- (void)notifyClientOfStreamingEvent:(id)arg1;	// IMP=0x000000000000f1c6
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f138
- (unsigned long long)nextTimerForTime:(unsigned long long)arg1;	// IMP=0x000000000000ed10
- (void)updateDeadlinesForTime:(unsigned long long)arg1;	// IMP=0x000000000000decc
- (_Bool)shouldInitBeSent;	// IMP=0x000000000000dd2d
- (unsigned long long)nextSampleTime;	// IMP=0x000000000000dafc
- (unsigned long long)nextAttentionLostTime:(_Bool *)arg1;	// IMP=0x000000000000d62b
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d53c
- (void)resetAttentionLostTimerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d4c6
- (void)_resetAttentionLostTimer;	// IMP=0x000000000000d332
- (void)getLastEvent:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d2a4
- (_Bool)_interestedInHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 metadata:(CDUnion_8fa1bcb8 *)arg3 senderID:(unsigned long long)arg4 displayUUID:(id)arg5;	// IMP=0x000000000000cd52
- (void)notifyHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 senderID:(unsigned long long)arg4 displayUUID:(id)arg5;	// IMP=0x000000000000ccb9
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000cca4
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 metadata:(CDUnion_8fa1bcb8 *)arg3;	// IMP=0x000000000000c43c
- (void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000c3c6
- (void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2;	// IMP=0x000000000000c1ba
- (void)deliverEvent:(id)arg1;	// IMP=0x000000000000bfab
- (void)deliverNotification:(unsigned long long)arg1;	// IMP=0x000000000000be22
- (void)setClientConfig:(id)arg1 shouldReset:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bce6
- (void)reevaluateConfig;	// IMP=0x000000000000bb4f
- (_Bool)_setClientConfig:(id)arg1 shouldReset:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000ae02
- (_Bool)_isSamplingClient;	// IMP=0x000000000000ade9
- (unsigned long long)_activeEventMask;	// IMP=0x000000000000adbb
- (void)invalidate;	// IMP=0x000000000000ad70
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ab2f
- (id)connection;	// IMP=0x000000000000ab21
- (id)description;	// IMP=0x000000000000a8e5
- (void)initializeClientState;	// IMP=0x000000000000a44d
- (id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3 clientIndex:(int)arg4 scheduler:(id)arg5 error:(id *)arg6;	// IMP=0x000000000000a13f

@end

