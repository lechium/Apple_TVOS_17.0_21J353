//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCC26AIMLInstrumentationStreams20EventGraphsPublisher34ConnectedComponentGroupsSubscriber : NSObject
{
    MISSING_TYPE *downstream;	// 8 = 0x8
    MISSING_TYPE *graphBuilder;	// 16 = 0x10
    MISSING_TYPE *logicalClockBuilder;	// 24 = 0x18
    MISSING_TYPE *eventTypeBuilder;	// 32 = 0x20
    MISSING_TYPE *graphSessionWindowLength;	// 40 = 0x28
    MISSING_TYPE *dimExpiryTime;	// 48 = 0x30
    MISSING_TYPE *latestRecievedTimestamp;	// 56 = 0x38
    MISSING_TYPE *upstreamFinished;	// 64 = 0x40
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000001e3c0
- (id)init;	// IMP=0x000000000001e370
- (void)cancel;	// IMP=0x000000000001c2f0
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000001c280
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000001c1b0
- (void)receiveSubscription:(id)arg1;	// IMP=0x000000000001c190

@end

