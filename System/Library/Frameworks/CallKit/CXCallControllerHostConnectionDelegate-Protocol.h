//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSObject-Protocol.h>

@class CXCallControllerHostConnection, CXTransaction;

@protocol CXCallControllerHostConnectionDelegate <NSObject>
- (void)callControllerHostConnection:(CXCallControllerHostConnection *)arg1 requestTransaction:(CXTransaction *)arg2 completion:(void (^)(NSError *))arg3;
- (void)callControllerHostConnection:(CXCallControllerHostConnection *)arg1 requestCalls:(void (^)(NSArray *))arg2;
- (void)callControllerHostConnectionInvalidated:(CXCallControllerHostConnection *)arg1;
@end

