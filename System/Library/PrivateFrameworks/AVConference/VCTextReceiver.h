//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, VCTextJitterBuffer;
@protocol VCTextReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCTextReceiver : NSObject
{
    struct tagHANDLE *_rtpHandle;	// 8 = 0x8
    unsigned int _sampleRate;	// 16 = 0x10
    id <VCTextReceiverDelegate> _delegate;	// 24 = 0x18
    struct tagVCRealTimeThread *_receiverThread;	// 32 = 0x20
    NSArray *_supportedPayloads;	// 40 = 0x28
    VCTextJitterBuffer *_jitterBuffer;	// 48 = 0x30
    double _lastReceivedRTPPacketTime;	// 56 = 0x38
    double _lastReceivedRTCPPacketTime;	// 64 = 0x40
    struct OpaqueVCTransportStreamRunLoop *_runLoop;	// 72 = 0x48
}

@property(nonatomic) double lastReceivedRTCPPacketTime; // @synthesize lastReceivedRTCPPacketTime=_lastReceivedRTCPPacketTime;
@property(nonatomic) double lastReceivedRTPPacketTime; // @synthesize lastReceivedRTPPacketTime=_lastReceivedRTPPacketTime;
@property(retain, nonatomic) NSArray *supportedPayloads; // @synthesize supportedPayloads=_supportedPayloads;
- (void)didReceiveFrame:(struct tagAudioFrame *)arg1;	// IMP=0x0000000000224961
- (void)didDetectMissingFrame;	// IMP=0x000000000022492f
- (_Bool)enqueuePacket:(struct tagAudioPacket *)arg1;	// IMP=0x00000000002248e9
- (_Bool)parsePacket:(struct tagAudioPacket *)arg1;	// IMP=0x00000000002246a0
- (struct tagAudioFrame *)allocFrameWithPacket:(struct tagAudioPacket *)arg1 data:(char *)arg2 dataLength:(int)arg3 timestamp:(unsigned int)arg4;	// IMP=0x00000000002245f7
- (void)splitPacket:(struct tagAudioPacket *)arg1 packetArray:(struct tagAudioPacketArray *)arg2;	// IMP=0x0000000000224470
- (void)validateAndEnqueuePackets:(struct tagAudioPacketArray *)arg1;	// IMP=0x000000000022427d
- (_Bool)isSupportedPayload:(int)arg1;	// IMP=0x000000000022412d
- (void)processRTCPPacket;	// IMP=0x0000000000224060
- (void)processRTPPacket;	// IMP=0x0000000000223f76
- (void)receiverThreadCallback:(struct tagVCRealTimeThreadParameters *)arg1;	// IMP=0x0000000000223a5b
- (int)retrieveRTPPacket:(struct tagAudioPacket *)arg1;	// IMP=0x0000000000223767
- (void)initializeTextPacket:(struct tagAudioPacket *)arg1 withMediaPacket:(struct _RTPMediaPacket *)arg2;	// IMP=0x000000000022370f
- (_Bool)stop;	// IMP=0x0000000000223516
- (_Bool)start;	// IMP=0x000000000022328a
@property(nonatomic) id <VCTextReceiverDelegate> delegate;
- (void)dealloc;	// IMP=0x0000000000223120
- (id)initWithConfiguration:(struct _VCTextReceiverConfiguration *)arg1;	// IMP=0x0000000000222ef9

@end

