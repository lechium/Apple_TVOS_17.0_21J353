//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC28SiriPrivateLearningAnalyticsP33_95987ADD223C83697EEA450CF0CC3A3519ScanTurnsSubscriber : NSObject
{
    MISSING_TYPE *downstream;	// 8 = 0x8
    MISSING_TYPE *turnsStartDateTime;	// 0 = 0x0
    MISSING_TYPE *innerSubscription;	// 0 = 0x0
    MISSING_TYPE *eventTables;	// 0 = 0x0
    MISSING_TYPE *endpointer;	// 0 = 0x0
    MISSING_TYPE *previousTurnId;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000006c3c0
- (id)init;	// IMP=0x000000000006c340
- (void)cancel;	// IMP=0x000000000006a7a0
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000006a610
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000006a3a0
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000069cc0

@end

