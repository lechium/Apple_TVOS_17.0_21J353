//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKUploadRequestManagerResponseActionThrottlerMetadata : NSObject
{
    double _lastRunTime;	// 8 = 0x8
    long long _repeatCount;	// 16 = 0x10
    unsigned long long _totalThrottleCount;	// 24 = 0x18
}

@property(nonatomic) unsigned long long totalThrottleCount; // @synthesize totalThrottleCount=_totalThrottleCount;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double lastRunTime; // @synthesize lastRunTime=_lastRunTime;

@end

