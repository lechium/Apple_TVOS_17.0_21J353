//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDMPCSessionControllerExecutionEvent
{
    _Bool _didPartiallySucceed;	// 8 = 0x8
}

+ (id)identifier;	// IMP=0x0060000000c86032
@property _Bool didPartiallySucceed; // @synthesize didPartiallySucceed=_didPartiallySucceed;
- (id)coreAnalyticsEventDictionary;	// IMP=0x0000000000c85f64
- (id)coreAnalyticsEventName;	// IMP=0x0000000000c85f57
@property(readonly, copy) NSString *resultString;

@end
