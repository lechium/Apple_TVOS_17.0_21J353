//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString, VCAudioRedBuilder;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCTextTransmitter : NSObject
{
    struct _VCTextTransmitterConfiguration _config;	// 8 = 0x8
    double _txIntervalMin;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    double _startTime;	// 48 = 0x30
    VCAudioRedBuilder *_redBuilder;	// 56 = 0x38
    int _redPayloadType;	// 64 = 0x40
    int _currentPayloadType;	// 68 = 0x44
    _Bool _isIdle;	// 72 = 0x48
    NSLock *_textFramesSendQueueLock;	// 80 = 0x50
    NSMutableArray *_textFramesSendQueue;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_heartbeat;	// 96 = 0x60
    double _idleDuration;	// 104 = 0x68
    unsigned int _emptyFramesToBeSent;	// 112 = 0x70
}

- (void)stopHeartbeat;	// IMP=0x00000000002755c4
- (_Bool)startHeartbeat;	// IMP=0x00000000002751ef
- (void)heartbeat;	// IMP=0x00000000002750f1
- (void)updatePayloadHistory:(id)arg1 timestamp:(unsigned int)arg2 payloadType:(int *)arg3 payload:(char **)arg4 payloadLength:(int *)arg5;	// IMP=0x0000000000274dd1
- (void)sendTextFrameWithRedundancy:(id)arg1 marker:(int)arg2;	// IMP=0x0000000000274755
- (unsigned int)getCharTimestampForSystemTime:(double)arg1;	// IMP=0x0000000000274739
- (void)sendText:(id)arg1;	// IMP=0x0000000000274552
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x00000000002744e1
- (void)stop;	// IMP=0x0000000000274317
- (_Bool)start;	// IMP=0x00000000002740ac
- (void)dealloc;	// IMP=0x000000000027402f
- (id)initWithConfiguration:(struct _VCTextTransmitterConfiguration *)arg1;	// IMP=0x0000000000273f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

