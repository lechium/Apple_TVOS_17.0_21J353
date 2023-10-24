//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSAttendingOptions;
@protocol CSAttendingServiceDelegate;

@protocol CSAttendingService <NSObject>
- (void)stopAttendingWithReason:(long long)arg1;
- (void)startAttendingWithOptions:(CSAttendingOptions *)arg1 completion:(void (^)(_Bool, NSError *))arg2;

@optional
@property(nonatomic) __weak id <CSAttendingServiceDelegate> delegate;
@end

