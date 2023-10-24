//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSObject;
@protocol GTVMBuffer, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GTBaseStreamTransport_replayer
{
    struct dy_transport_message_unpack_s *_tmu;	// 104 = 0x68
    id <GTVMBuffer> _messageBuffer;	// 112 = 0x70
    void *_messageBufferWritePtr;	// 120 = 0x78
    unsigned long long _bytesToRead;	// 128 = 0x80
    struct iovec _iov[3];	// 136 = 0x88
    NSData *_buffers[3];	// 184 = 0xb8
    NSObject<OS_dispatch_semaphore> *_sendSema;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_relayQueue;	// 216 = 0xd8
    struct dy_transport_message_unpack_s *_relayTmu;	// 224 = 0xe0
}

- (long long)_relayBuffer:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0020000000043995
- (long long)_relayBufferInner:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x001000000004377a
- (long long)_sendMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000435a0
- (_Bool)_packMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000433bb
- (long long)_writeBuffers:(id *)arg1;	// IMP=0x0010000000043157
- (void)_clearBuffers;	// IMP=0x0010000000043116
- (long long)_readAndAccumulate;	// IMP=0x0000000000042f6e
- (long long)_performRead:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0010000000042e3b
- (void)_allocateMessageBuffer;	// IMP=0x0010000000042d4f
- (void)_unpackAndDispatchMessage;	// IMP=0x0010000000042a80
- (long long)_syncTmuToHeader:(struct dy_transport_message_unpack_s *)arg1 ioBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004295d
- (void)_waitEAGAIN;	// IMP=0x001000000004294e
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0010000000042936
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x001000000004291e
- (void)_scheduleInvalidation:(id)arg1;	// IMP=0x00100000000428dd
- (void)_invalidate;	// IMP=0x0010000000042840
- (void)dealloc;	// IMP=0x00100000000427cd
- (id)init;	// IMP=0x001000000004264e

@end

