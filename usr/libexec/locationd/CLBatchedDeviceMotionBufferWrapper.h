//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLBatchedDeviceMotionBufferWrapper : NSObject
{
    struct vector<CMSPU::Safety::DMSample, std::allocator<CMSPU::Safety::DMSample>> _buffer;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0020000000c4a808
- (void).cxx_destruct;	// IMP=0x0010000000c4a7ec
- (const void *)buffer;	// IMP=0x0010000000c4a7e2
- (void)dealloc;	// IMP=0x0010000000c4a7b3
- (id)initWithMovedBuffer:(void *)arg1;	// IMP=0x0010000000c4a761

@end

