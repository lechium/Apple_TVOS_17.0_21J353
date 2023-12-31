//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICEResultWaitQueue, NSMutableArray, VideoConference;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VideoConferenceManager : NSObject
{
    unsigned char _clientUUID[16];	// 8 = 0x8
    struct _opaque_pthread_mutex_t stateLock;	// 24 = 0x18
    struct _opaque_pthread_mutex_t sipLock;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 152 = 0x98
    NSMutableArray *vcList;	// 160 = 0xa0
    VideoConference *activeConference;	// 168 = 0xa8
    VideoConference *conferenceWithMic;	// 176 = 0xb0
    ICEResultWaitQueue *resultQueue;	// 184 = 0xb8
    struct tagHANDLE *hSIP;	// 192 = 0xc0
    int sipRefCount;	// 200 = 0xc8
    id _vtpWrapper;	// 208 = 0xd0
    _Bool isVTPInitialized;	// 216 = 0xd8
    id _networkAgent;	// 224 = 0xe0
}

+ (void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2;	// IMP=0x0010000000225115
+ (id)defaultVideoConferenceManager;	// IMP=0x0010000000224f74
@property(readonly) NSMutableArray *vcList; // @synthesize vcList;
@property(readonly) ICEResultWaitQueue *resultQueue; // @synthesize resultQueue;
@property VideoConference *activeConference; // @synthesize activeConference;
- (void)getClientUUID:(unsigned char [16])arg1;	// IMP=0x0000000000229060
- (void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;	// IMP=0x0000000000228f07
- (void)pauseVideoConferences:(_Bool)arg1;	// IMP=0x0000000000228b6e
- (id)conferenceForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000002288de
- (id)conferenceForParticipantID:(id)arg1;	// IMP=0x000000000022873d
- (_Bool)hasVideoConference:(id)arg1;	// IMP=0x00000000002286f3
- (id)conferenceForCallID:(unsigned int)arg1;	// IMP=0x00000000002285ac
@property VideoConference *conferenceWithMic;
- (void)removeVideoConference:(id)arg1;	// IMP=0x0000000000228186
- (void)addVideoConference:(id)arg1;	// IMP=0x0000000000228042
- (void)stopSIPWithTransportType:(unsigned int)arg1;	// IMP=0x0000000000227ca6
- (void)cleanupVTP;	// IMP=0x0000000000227a37
- (_Bool)isSIPHandleValid:(struct tagHANDLE *)arg1;	// IMP=0x0000000000227917
- (void)startSIPWithPacketMultiplexMode:(int)arg1 transportType:(unsigned int)arg2;	// IMP=0x0000000000227760
- (void)createSIPWithPacketMultiplexMode:(int)arg1;	// IMP=0x0000000000227028
- (void)setupVTPCallback;	// IMP=0x0000000000226d4b
- (struct tagHANDLE *)SIPHandle;	// IMP=0x0000000000226d1e
- (void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;	// IMP=0x0000000000226c37
- (void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned int)arg2;	// IMP=0x0000000000226b8e
- (void)videoConference:(id)arg1 localAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x0000000000226a8d
- (void)videoConference:(id)arg1 remoteAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000002269a5
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000002268e2
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;	// IMP=0x0000000000226839
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;	// IMP=0x0000000000226640
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(_Bool)arg3;	// IMP=0x0000000000226558
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x0000000000226441
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;	// IMP=0x000000000022637e
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;	// IMP=0x00000000002262bb
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;	// IMP=0x00000000002261f8
- (void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(_Bool)arg2;	// IMP=0x0000000000226143
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;	// IMP=0x000000000022608e
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;	// IMP=0x0000000000225fd9
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x0000000000225f59
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x0000000000225ed9
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x0000000000225e00
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x0000000000225d27
- (void)videoConference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x0000000000225c3f
- (void)videoConference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x0000000000225b57
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;	// IMP=0x0000000000225aae
- (void)videoConference:(id)arg1 remoteMediaStalled:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000002259c6
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned int)arg3;	// IMP=0x00000000002258ac
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 didPauseVideo:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000002257ab
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 isSendingAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000002256aa
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000002255a9
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;	// IMP=0x00000000002254cb
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;	// IMP=0x00000000002253bc
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x00000000002252ca
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;	// IMP=0x0000000000225207
- (id)init;	// IMP=0x0000000000224fe2
- (void)registerBlocksForConference;	// IMP=0x00000000003edf5e

@end

