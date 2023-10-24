//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCPacketFilter, IDSDatagramChannel, IDSService;

__attribute__((visibility("hidden")))
@interface AVCPacketRelayIDSConnection : NSObject
{
    unsigned char _type;	// 8 = 0x8
    CDUnknownBlockType _readHandler;	// 16 = 0x10
    _Bool _isDemuxNeeded;	// 24 = 0x18
    _Bool _isResumed;	// 25 = 0x19
    IDSDatagramChannel *_datagramChannel;	// 32 = 0x20
    IDSService *_packetRelayService;	// 40 = 0x28
    AVCPacketFilter *_packetFilter;	// 48 = 0x30
}

@property(retain) AVCPacketFilter *packetFilter; // @synthesize packetFilter=_packetFilter;
@property _Bool isDemuxNeeded; // @synthesize isDemuxNeeded=_isDemuxNeeded;
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property(readonly) unsigned char type; // @synthesize type=_type;
@property _Bool isResumed; // @synthesize isResumed=_isResumed;
- (void)dealloc;	// IMP=0x000000000038c06a
- (_Bool)sendData:(const void *)arg1 size:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000038bcac
- (void)readyToRead;	// IMP=0x000000000038bc74
- (int)stop;	// IMP=0x000000000038bb55
- (int)start;	// IMP=0x000000000038b39b
- (id)initWithIDSDestination:(id)arg1;	// IMP=0x000000000038b192
- (id)initWithIDSSocketDescriptor:(unsigned short)arg1;	// IMP=0x000000000038af88

@end

