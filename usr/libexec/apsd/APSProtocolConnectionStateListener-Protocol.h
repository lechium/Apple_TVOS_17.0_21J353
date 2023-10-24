//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol APSProtocolConnection;

@protocol APSProtocolConnectionStateListener <NSObject>
- (void)didRecoverFromSuspensionOnProtocolConnection:(id <APSProtocolConnection>)arg1;
- (void)didSuspendProtocolConnection:(id <APSProtocolConnection>)arg1;
- (void)outgoingDataAboutToSendForProtocolConnection:(id <APSProtocolConnection>)arg1;
- (void)efficientToUseChangedForProtocolConnection:(id <APSProtocolConnection>)arg1;
- (void)failedToConnectOnProtocolConnection:(id <APSProtocolConnection>)arg1;
- (void)protocolConnection:(id <APSProtocolConnection>)arg1 encounteredError:(NSError *)arg2;
- (void)protocolConnection:(id <APSProtocolConnection>)arg1 didDisconnectWithConnectionState:(long long)arg2 reason:(unsigned int)arg3;
@end
