//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeHub/NSObject-Protocol.h>

@class HHAnalyticsInterval, NSError, NSString;

@protocol HHAnalyticsReporter <NSObject>
- (HHAnalyticsInterval *)startIntervalWithEventName:(NSString *)arg1 eventBuilder:(NSMutableDictionary * (^)(void))arg2;
- (void)sendEventWithName:(NSString *)arg1 error:(NSError *)arg2 eventBuilder:(NSMutableDictionary * (^)(void))arg3;
@end

