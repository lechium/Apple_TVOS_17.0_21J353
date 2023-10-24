//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATTaskOperation, CATTaskRequest, CATTaskServer, CATTaskSession, CATTransport, NSDictionary, NSError, NSOperation, NSString;

@protocol CATTaskServerDelegate <NSObject>
- (void)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 didInterruptWithError:(NSError *)arg3;
- (CATTaskOperation *)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 operationForRequest:(CATTaskRequest *)arg3 error:(id *)arg4;

@optional
- (void)serverDidInvalidate:(CATTaskServer *)arg1;
- (void)server:(CATTaskServer *)arg1 clientSessionDidInvalidate:(CATTaskSession *)arg2;
- (void)server:(CATTaskServer *)arg1 clientSessionDidDisconnect:(CATTaskSession *)arg2;
- (void)server:(CATTaskServer *)arg1 clientSessionDidConnect:(CATTaskSession *)arg2;
- (void)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 enqueueOperation:(NSOperation *)arg3;
- (void)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 didReceiveNotificationWithName:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
- (_Bool)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 shouldConnectWithTransport:(CATTransport *)arg3;
@end

