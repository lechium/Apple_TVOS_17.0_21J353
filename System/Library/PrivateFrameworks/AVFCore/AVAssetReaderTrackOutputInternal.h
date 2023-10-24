//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrack, AVOutputSettings, AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetReaderTrackOutputInternal : NSObject
{
    AVAssetTrack *track;	// 8 = 0x8
    AVOutputSettings *outputSettings;	// 16 = 0x10
    NSString *audioTimePitchAlgorithm;	// 24 = 0x18
    _Bool appliesPreferredTrackTransform;	// 32 = 0x20
    _Bool limitsImageQueueCapacityToOneFrame;	// 33 = 0x21
    AVWeakReference *weakReferenceToAttachedAdaptor;	// 40 = 0x28
}

@end

