//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUMFiReadRequest : NSObject
{
    unsigned long long minLen;	// 8 = 0x8
    unsigned long long maxLen;	// 16 = 0x10
    CUMFiReadRequest *next;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006c2d0
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end

