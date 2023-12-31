//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLIndirectArgumentBufferLayout.h>

@class MTLSimDevice;

__attribute__((visibility("hidden")))
@interface MTLSimIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout
{
    unsigned int _reference;	// 16 = 0x10
    MTLSimDevice *_device;	// 24 = 0x18
    _Bool _bufferLayoutMatchesFrontEndLayout;	// 32 = 0x20
    unsigned long long _encodedLength;	// 40 = 0x28
    unsigned long long _alignment;	// 48 = 0x30
}

@property(readonly) unsigned int argumentBufferLayoutRef; // @dynamic argumentBufferLayoutRef;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000001716
- (unsigned long long)alignment;	// IMP=0x0000000000001705
- (unsigned long long)encodedLength;	// IMP=0x00000000000016f4
- (_Bool)bufferLayoutMatchesFrontEndLayout;	// IMP=0x00000000000016e4
- (void)dealloc;	// IMP=0x000000000000160f
- (id)initWithDevice:(id)arg1 reference:(unsigned int)arg2 data:(CDStruct_146dae35 *)arg3;	// IMP=0x0000000000001570

@end

