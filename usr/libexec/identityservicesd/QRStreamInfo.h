//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface QRStreamInfo : NSObject
{
    NSArray *_publishedStreams;	// 8 = 0x8
    NSArray *;	// 16 = 0x10
    NSNumber *_generationCounter;	// 24 = 0x18
    NSNumber *_maxConcurrentStreams;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000029d3d4
- (id)initQRStreamInfo:(id)arg1 subscribedStreams:(id)arg2 generationCounter:(id)arg3 maxConcurrentStreams:(id)arg4;	// IMP=0x001000000029d2ec

@end

