//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@protocol SPPersistentConnectionProtocol <NSObject>
- (void)stopRefreshingPersistentConnection;
- (void)beaconsToMaintainPersistentConnection:(void (^)(NSSet *))arg1;
- (void)startRefreshingPersistentConnectionWithBlock:(void (^)(NSSet *))arg1;
@end

