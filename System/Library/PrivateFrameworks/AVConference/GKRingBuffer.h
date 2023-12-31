//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GKRingBuffer : NSObject
{
    void *ringBufRef;	// 8 = 0x8
    unsigned int endTime;	// 16 = 0x10
    unsigned int capacity;	// 20 = 0x14
    unsigned int bytesPerFrame;	// 24 = 0x18
}

- (int)fetch:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;	// IMP=0x000000000005280f
- (int)needsNewNumSamples:(unsigned int)arg1 timestamp:(unsigned int)arg2;	// IMP=0x00000000000527fe
- (_Bool)store:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;	// IMP=0x0000000000052756
- (void)increaseCapacity:(unsigned int)arg1;	// IMP=0x000000000005265e
- (void)dealloc;	// IMP=0x00000000000525d1
- (id)init;	// IMP=0x00000000000525b5
- (id)initWithCapacity:(unsigned int)arg1 bytesPerFrame:(unsigned int)arg2;	// IMP=0x0000000000052501

@end

