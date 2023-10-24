//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DYTransport.h"

@class NSData, NSObject;
@protocol DYVMBuffer, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface DYBaseStreamTransport : DYTransport
{
    struct dy_transport_message_unpack_s *_tmu;	// 104 = 0x68
    id <DYVMBuffer> _messageBuffer;	// 112 = 0x70
    void *_messageBufferWritePtr;	// 120 = 0x78
    unsigned long long _bytesToRead;	// 128 = 0x80
    struct iovec _iov[3];	// 136 = 0x88
    NSData *_buffers[3];	// 184 = 0xb8
    NSObject<OS_dispatch_semaphore> *_sendSema;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_relayQueue;	// 216 = 0xd8
    struct dy_transport_message_unpack_s *_relayTmu;	// 224 = 0xe0
}

- (long long)_relayBuffer:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000002c4a3
- (long long)_relayBufferInner:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000002c21a
- (long long)_sendMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bf63
- (_Bool)_packMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bd5f
- (long long)_writeBuffers:(id *)arg1;	// IMP=0x000000000002baad
- (void)_clearBuffers;	// IMP=0x000000000002ba6c
- (long long)_readAndAccumulate;	// IMP=0x000000000002b88e
- (long long)_performRead:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000002b6fd
- (void)_allocateMessageBuffer;	// IMP=0x000000000002b611
- (void)_unpackAndDispatchMessage;	// IMP=0x000000000002b33f
- (long long)_syncTmuToHeader:(struct dy_transport_message_unpack_s *)arg1 ioBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b1da
- (void)_waitEAGAIN;	// IMP=0x000000000002b1cb
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000002b1b3
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000002b19b
- (void)_scheduleInvalidation:(id)arg1;	// IMP=0x000000000002b15a
- (void)_invalidate;	// IMP=0x000000000002b0e1
- (void)dealloc;	// IMP=0x000000000002b06e
- (id)init;	// IMP=0x000000000002aedb

@end
