//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCC26AIMLInstrumentationStreams25SiriConversationPublisher26SiriConversationSubscriber : NSObject
{
    MISSING_TYPE *downstream;	// 8 = 0x8
    MISSING_TYPE *lastReceivedTimestamp;	// 16 = 0x10
    MISSING_TYPE *graphBuilder;	// 24 = 0x18
    MISSING_TYPE *upstreamFinished;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000356e0
- (id)init;	// IMP=0x0000000000035690
- (void)cancel;	// IMP=0x0000000000034cf0
- (void)receiveCompletion:(id)arg1;	// IMP=0x0000000000034c80
- (long long)receiveInput:(id)arg1;	// IMP=0x0000000000034bb0
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000034b90

@end

