//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSObject-Protocol.h>

@class CXNetworkExtensionMessageControllerHostConnection, NSDictionary, NSString;

@protocol CXNetworkExtensionMessageControllerHostConnectionDelegate <NSObject>
- (void)networkExtensionMessageControllerHostConnection:(CXNetworkExtensionMessageControllerHostConnection *)arg1 didReceiveIncomingMessage:(NSDictionary *)arg2 forBundleIdentifier:(NSString *)arg3;
- (void)networkExtensionMessageControllerHostConnectionInvalidated:(CXNetworkExtensionMessageControllerHostConnection *)arg1;
@end

