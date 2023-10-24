//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioTime;

__attribute__((visibility("hidden")))
@interface AVAudioClock : NSObject
{
    void *_impl;	// 8 = 0x8
}

- (id)awaitIOCycle:(unsigned int *)arg1;	// IMP=0x00000000000626a7
- (long long)currentIONumberFrames;	// IMP=0x000000000006269a
- (struct AudioTimeStamp)currentAudioTimeStamp;	// IMP=0x0000000000062633
@property(readonly, nonatomic) AVAudioTime *currentTime;
- (void)dealloc;	// IMP=0x0000000000062587
- (id)initWithNode:(void *)arg1;	// IMP=0x0000000000062482
- (id)init;	// IMP=0x0000000000062412

@end
