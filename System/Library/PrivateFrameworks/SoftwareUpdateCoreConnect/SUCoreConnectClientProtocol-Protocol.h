//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUCoreConnectMessage;

@protocol SUCoreConnectClientProtocol
- (void)connectProtocolFromServerSendClientMessage:(SUCoreConnectMessage *)arg1 reply:(void (^)(SUCoreConnectMessage *, NSError *))arg2;
- (void)connectProtocolFromServerSendClientMessage:(SUCoreConnectMessage *)arg1;
- (void)connectProtocolFromServerRequestClientID:(void (^)(NSString *))arg1;
@end
