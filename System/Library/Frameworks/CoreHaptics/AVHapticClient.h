//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVHapticClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    void *_commandWriter;	// 16 = 0x10
    unsigned long long _uniqueID;	// 24 = 0x18
    int _serverTimeout;	// 32 = 0x20
    CDUnknownBlockType _completionCallback;	// 40 = 0x28
    CDUnknownBlockType _connectionCallback;	// 48 = 0x30
    struct mutex _mapMutex;	// 56 = 0x38
    struct map<unsigned long, AVHapticSequenceEntry *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, AVHapticSequenceEntry *>>> _sequenceEntryMap;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_completionQueue;	// 144 = 0x90
    int _state;	// 152 = 0x98
    _Bool _disconnecting;	// 156 = 0x9c
    _Bool _prewarmed;	// 157 = 0x9d
    _Bool _connected;	// 158 = 0x9e
    int _serverProcessID;	// 160 = 0xa0
    unsigned long long _clientID;	// 168 = 0xa8
    NSArray *_channelKeys;	// 176 = 0xb0
    CDUnknownBlockType _asyncStopCallback;	// 184 = 0xb8
}

- (id).cxx_construct;	// IMP=0x000000000002ffef
- (void).cxx_destruct;	// IMP=0x000000000002ff79
@property(copy) CDUnknownBlockType asyncStopCallback; // @synthesize asyncStopCallback=_asyncStopCallback;
@property int serverProcessID; // @synthesize serverProcessID=_serverProcessID;
@property(readonly) _Bool disconnecting; // @synthesize disconnecting=_disconnecting;
@property(copy) CDUnknownBlockType connectionCallback; // @synthesize connectionCallback=_connectionCallback;
@property(copy) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property _Bool connected; // @synthesize connected=_connected;
@property(readonly) _Bool prewarmed; // @synthesize prewarmed=_prewarmed;
@property(readonly) NSArray *channelKeys; // @synthesize channelKeys=_channelKeys;
@property(readonly) unsigned long long clientID; // @synthesize clientID=_clientID;
- (void)clientDisconnectingForReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000002fd43
- (void)clientStoppedForReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000002f97f
- (void)clientCompletedWithError:(id)arg1;	// IMP=0x000000000002f28f
- (void)sequenceFinished:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000002ed2e
- (void)destroySharedMemory;	// IMP=0x000000000002ecd4
- (unsigned int)calculateHapticCommandParamCurveMemorySize:(unsigned int)arg1;	// IMP=0x000000000002ecb5
- (void)handleServerConnectionInvalidation;	// IMP=0x000000000002e9d4
- (void)handleServerConnectionInterruption;	// IMP=0x000000000002e37a
- (_Bool)removeAssignedChannelID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002e052
- (_Bool)requestAssignedChannels:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002dad8
- (void)clearAssignedChannels;	// IMP=0x000000000002d9c0
- (_Bool)setPlayerBehavior:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000002d599
- (void)setChannelKeys:(id)arg1;	// IMP=0x000000000002d527
- (void)disconnect;	// IMP=0x000000000002d36d
- (id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d03c
- (id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cd0b
- (_Bool)setupConnectionWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002be49
- (void)doInit;	// IMP=0x000000000002bd9b
- (void)releaseResources;	// IMP=0x000000000002bbac
- (void)detachHapticSequence:(unsigned long long)arg1;	// IMP=0x000000000002b9c6
- (_Bool)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b821
- (_Bool)setSequenceChannelParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 sequenceID:(unsigned long long)arg4 channel:(unsigned long long)arg5;	// IMP=0x000000000002b618
- (_Bool)sendUnduckAudioCommand:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b452
- (_Bool)resetHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002b28c
- (_Bool)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2;	// IMP=0x000000000002b0d6
- (_Bool)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002af10
- (_Bool)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002ad4a
- (_Bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x000000000002ab84
- (_Bool)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3;	// IMP=0x000000000002a984
- (_Bool)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id *)arg3;	// IMP=0x000000000002a771
- (_Bool)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id *)arg3;	// IMP=0x000000000002a55e
- (_Bool)enableSequenceLooping:(unsigned long long)arg1 enable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002a35e
- (_Bool)prepareHapticSequence:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000029d8a
- (void)detachSequenceEntryforID:(unsigned long long)arg1;	// IMP=0x0000000000029b44
- (void)setRunStateForSequenceEntryWithID:(unsigned long long)arg1 running:(_Bool)arg2;	// IMP=0x0000000000029ab5
- (void)callSequenceFinishedHandlersWithError:(id)arg1;	// IMP=0x00000000000298b5
- (CDUnknownBlockType)getSequenceFinishedHandlerForID:(unsigned long long)arg1;	// IMP=0x0000000000029801
- (void)setSequenceFinishedHandlerForID:(unsigned long long)arg1 finishedHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029608
- (_Bool)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channel:(unsigned long long)arg3;	// IMP=0x00000000000290c4
- (_Bool)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000289ef
- (_Bool)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028278
- (_Bool)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027a32
- (_Bool)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000000278a7
- (_Bool)setParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 channel:(unsigned long long)arg4;	// IMP=0x0000000000027677
- (_Bool)clearEventsFromTime:(double)arg1 channel:(unsigned long long)arg2;	// IMP=0x0000000000027493
- (_Bool)sendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 outToken:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x00000000000273b3
- (_Bool)doScheduleParamCurveWithMemoryReserve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 memoryReserve:(struct HapticSharedMemoryAddressReserve *)arg4 paramCurve:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000026529
- (_Bool)doScheduleParamCurve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 paramCurve:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000025ddb
- (_Bool)doSendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 sorted:(_Bool)arg5 outToken:(unsigned long long *)arg6 error:(id *)arg7;	// IMP=0x0000000000024204
- (_Bool)resetChannel:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x00000000000238c3
- (_Bool)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2;	// IMP=0x00000000000233a5
- (void)expectNotifyAfter:(double)arg1;	// IMP=0x000000000002339f
- (_Bool)finish:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022af6
- (void)stopRunning:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022629
- (void)stopRunning;	// IMP=0x000000000002231e
- (void)startRunning:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021e54
- (void)stopPrewarm;	// IMP=0x0000000000021b69
- (void)prewarm:(CDUnknownBlockType)arg1;	// IMP=0x000000000002177a
- (_Bool)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021324
- (_Bool)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020ec4
- (_Bool)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020a1f
- (_Bool)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000020520
- (_Bool)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ff84
- (void)allocateResources:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f6db
@property(readonly) double hapticLatency;
- (void)queryServerCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f01b
- (void)dealloc;	// IMP=0x000000000001edbf
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001eaa9
@property(readonly) int state;
- (void)setState:(int)arg1;	// IMP=0x000000000001e6fe
@property(readonly) _Bool running;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
