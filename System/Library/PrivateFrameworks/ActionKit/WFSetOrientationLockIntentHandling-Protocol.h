//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFSetOrientationLockIntent;

@protocol WFSetOrientationLockIntentHandling <NSObject>
- (void)handleSetOrientationLock:(WFSetOrientationLockIntent *)arg1 completion:(void (^)(WFSetOrientationLockIntentResponse *))arg2;

@optional
- (void)confirmSetOrientationLock:(WFSetOrientationLockIntent *)arg1 completion:(void (^)(WFSetOrientationLockIntentResponse *))arg2;
@end

