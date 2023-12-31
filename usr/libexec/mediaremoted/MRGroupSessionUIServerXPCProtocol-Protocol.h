//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRDiscoveredGroupSession;

@protocol MRGroupSessionUIServerXPCProtocol <NSObject>
- (void)releaseGroupSessionLowPowerPlatterAssertionWithReply:(void (^)(void))arg1;
- (void)acquireGroupSessionLowPowerPlatterAssertionWithReply:(void (^)(void))arg1;
- (void)releaseGroupSessionNearbyAssertionWithReply:(void (^)(void))arg1;
- (void)acquireGroupSessionNearbyAssertionForSession:(MRDiscoveredGroupSession *)arg1 withReply:(void (^)(void))arg2;
@end

