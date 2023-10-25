//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLBuffer;

@interface GTDownloadGPUBuffer : NSObject
{
    _Atomic unsigned long long *_usedGPUMemory;	// 8 = 0x8
    id <MTLBuffer> _buffer;	// 16 = 0x10
    unsigned long long offset;	// 24 = 0x18
    unsigned long long size;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a4f57
@property(nonatomic) unsigned long long size; // @synthesize size;
@property(nonatomic) unsigned long long offset; // @synthesize offset;
@property(retain, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (void)dealloc;	// IMP=0x00000000000a4ec1
- (id)initWithTracking:(_Atomic unsigned long long *)arg1;	// IMP=0x00000000000a4e84

@end

