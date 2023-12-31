//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBSScheduledSleepRequest;

@protocol PBSScheduledSleepServiceInterface <NSObject>
- (void)cancelScheduledSleepWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)getCurrentScheduledSleepWithCompletion:(void (^)(PBSScheduledSleep *, NSError *))arg1;
- (void)getAvailableScheduledSleepRequestsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)scheduleSleepWithRequest:(PBSScheduledSleepRequest *)arg1 completion:(void (^)(PBSScheduledSleep *, NSError *))arg2;
@end

