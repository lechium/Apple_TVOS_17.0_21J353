//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPMemoryOwner : NSObject
{
    void *memory;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x000000000008674d
- (void)finalize;	// IMP=0x000000000008670f
- (void)dispose;	// IMP=0x00000000000866ee
- (id)initWithAllocatedMemory:(void *)arg1;	// IMP=0x00000000000866b1

@end

