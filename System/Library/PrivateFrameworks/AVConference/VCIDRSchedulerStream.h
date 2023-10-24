//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCIDRSchedulerStream : NSObject
{
    unsigned int _keyFrameInterval;	// 8 = 0x8
    unsigned int _framerate;	// 12 = 0xc
    unsigned int _weightFactor;	// 16 = 0x10
    unsigned int _framePosition;	// 20 = 0x14
    unsigned int _framesPerIdrPeriod;	// 24 = 0x18
}

+ (id)schedulerStreamWithKeyFrameInterval:(unsigned int)arg1 framerate:(unsigned int)arg2 weightFactor:(unsigned int)arg3;	// IMP=0x00600000002f6ab6
@property(nonatomic) unsigned int framesPerIdrPeriod; // @synthesize framesPerIdrPeriod=_framesPerIdrPeriod;
@property(nonatomic) unsigned int framePosition; // @synthesize framePosition=_framePosition;
@property(nonatomic) unsigned int weightFactor; // @synthesize weightFactor=_weightFactor;
@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
@property(nonatomic) unsigned int keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
- (id)description;	// IMP=0x00000000002f6bce
- (long long)compareWeightFactor:(id)arg1;	// IMP=0x00000000002f6b75
- (id)initWithKeyFrameInterval:(unsigned int)arg1 framerate:(unsigned int)arg2 weightFactor:(unsigned int)arg3;	// IMP=0x00000000002f6b00

@end

