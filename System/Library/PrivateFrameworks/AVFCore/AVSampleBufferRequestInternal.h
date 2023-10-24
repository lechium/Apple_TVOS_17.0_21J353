//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSampleCursor;

__attribute__((visibility("hidden")))
@interface AVSampleBufferRequestInternal : NSObject
{
    AVSampleCursor *startCursor;	// 8 = 0x8
    long long direction;	// 16 = 0x10
    AVSampleCursor *limitCursor;	// 24 = 0x18
    long long preferredMinSampleCount;	// 32 = 0x20
    long long maxSampleCount;	// 40 = 0x28
    long long mode;	// 48 = 0x30
    CDStruct_1b6d18a9 overrideTime;	// 56 = 0x38
}

@end

