//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface UAActivityWasSuggestedEvent
{
    NSString *_activityType;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003eee8
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
- (id)reportedActivityType;	// IMP=0x001000000003ee3b
- (void)sendEvent;	// IMP=0x001000000003ede0
- (id)eventPayload;	// IMP=0x001000000003ece2
- (id)eventName;	// IMP=0x001000000003ecd5
- (id)initWithAnalyticsInfo:(id)arg1;	// IMP=0x001000000003ec0a

@end

