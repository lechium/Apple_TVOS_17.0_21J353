//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTSharedMemoryTransport_capture, NSObject;
@protocol OS_dispatch_source;

@interface GTBaseSocketTransport_capture
{
    NSObject<OS_dispatch_source> *_readSource;	// 232 = 0xe8
    NSObject<OS_dispatch_source> *_writeSource;	// 240 = 0xf0
    GTSharedMemoryTransport_capture *_smTransport;	// 248 = 0xf8
    _Bool _writeSourceIsSuspended;	// 256 = 0x100
    _Bool _scheduledReadOnWritableSocket;	// 257 = 0x101
}

@property(readonly, nonatomic) GTSharedMemoryTransport_capture *smTransport; // @synthesize smTransport=_smTransport;
- (unsigned int)_nextMessageSerial;	// IMP=0x000000000000bd53
- (_Bool)relayMessageOverSharedMemoryTransport:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bd36
- (void)destroySharedMemoryTransport;	// IMP=0x000000000000bceb
- (void)_destroySharedMemoryTransport;	// IMP=0x000000000000bcb2
- (id)createNewSharedMemoryTransportWithURL:(id)arg1;	// IMP=0x000000000000bbee
- (id)createNewSharedMemoryTransport;	// IMP=0x000000000000bbda
- (void)_invalidate;	// IMP=0x000000000000bb40
- (void)setPrioritizeOutgoingMessages:(_Bool)arg1;	// IMP=0x000000000000baca
- (_Bool)connected;	// IMP=0x000000000000baa5
- (void)scheduleReadOnWritableSocket;	// IMP=0x000000000000ba5c
- (void)runWithSocket:(int)arg1;	// IMP=0x000000000000b7de
- (void)_readAndAccumulateLoop;	// IMP=0x000000000000b791
- (void)closeSocketDescriptor;	// IMP=0x000000000000b775
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000000b745
- (void)_waitEAGAIN;	// IMP=0x000000000000b70b
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000000b6db
- (id)init;	// IMP=0x000000000000b6ac

@end
