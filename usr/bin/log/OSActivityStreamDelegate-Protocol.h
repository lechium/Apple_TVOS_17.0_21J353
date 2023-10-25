//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, OSActivityStream;

@protocol OSActivityStreamDelegate <NSObject>
- (_Bool)activityStream:(OSActivityStream *)arg1 results:(NSArray *)arg2;

@optional
- (_Bool)activityStream:(OSActivityStream *)arg1 results:(NSArray *)arg2 error:(NSError *)arg3;
- (void)streamDidStop:(OSActivityStream *)arg1;
- (void)streamDidFail:(OSActivityStream *)arg1 error:(NSError *)arg2;
- (void)streamDidStart:(OSActivityStream *)arg1;
@end

