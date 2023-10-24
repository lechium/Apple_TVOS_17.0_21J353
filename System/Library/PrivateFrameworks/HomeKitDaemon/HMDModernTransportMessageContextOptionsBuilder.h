//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDModernTransportMessageContextOptionsBuilder : NSObject
{
    _Bool _expectsMultipleResponses;	// 8 = 0x8
    _Bool _trackingDeviceReachability;	// 9 = 0x9
    NSSet *_transports;	// 16 = 0x10
    double _timeoutOverride;	// 24 = 0x18
    double _timeToLive;	// 32 = 0x20
    NSString *_requestStartTimeHeaderKey;	// 40 = 0x28
    NSString *_timeToLiveHeaderKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000bdc2bd
@property(copy) NSString *timeToLiveHeaderKey; // @synthesize timeToLiveHeaderKey=_timeToLiveHeaderKey;
@property(copy) NSString *requestStartTimeHeaderKey; // @synthesize requestStartTimeHeaderKey=_requestStartTimeHeaderKey;
@property _Bool trackingDeviceReachability; // @synthesize trackingDeviceReachability=_trackingDeviceReachability;
@property _Bool expectsMultipleResponses; // @synthesize expectsMultipleResponses=_expectsMultipleResponses;
@property double timeToLive; // @synthesize timeToLive=_timeToLive;
@property double timeoutOverride; // @synthesize timeoutOverride=_timeoutOverride;
@property(copy) NSSet *transports; // @synthesize transports=_transports;

@end

