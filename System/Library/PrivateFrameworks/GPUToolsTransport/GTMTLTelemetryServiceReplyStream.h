//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTMTLTelemetryServiceObserver;

__attribute__((visibility("hidden")))
@interface GTMTLTelemetryServiceReplyStream
{
    id <GTMTLTelemetryServiceObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001f919
- (void)notifyStatistics_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001f7bf
- (id)initWithObserver:(id)arg1;	// IMP=0x000000000001f71b

@end

