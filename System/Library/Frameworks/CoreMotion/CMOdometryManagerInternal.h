//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface CMOdometryManagerInternal : NSObject
{
    struct InertialOdometryData _previousOdometryData;	// 8 = 0x8
    struct InertialOdometryData _currentOdometryData;	// 96 = 0x60
    _Bool _hasFirstSample;	// 184 = 0xb8
    struct Dispatcher *_odometryDispatcher;	// 192 = 0xc0
    double _odometryUpdateInterval;	// 200 = 0xc8
    CDUnknownBlockType _odometryHandler;	// 208 = 0xd0
    NSOperationQueue *_odometryQueue;	// 216 = 0xd8
}

- (id)init;	// IMP=0x00000000001ad081

@end

