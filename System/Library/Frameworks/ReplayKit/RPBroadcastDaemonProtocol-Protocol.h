//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSDictionary, NSError, NSURL;

@protocol RPBroadcastDaemonProtocol <NSObject>
- (void)finishBroadcastWithError:(NSError *)arg1;
- (void)updateBroadcastURL:(NSURL *)arg1;
- (void)updateServiceInfo:(NSDictionary *)arg1;
- (void)ping;
@end

