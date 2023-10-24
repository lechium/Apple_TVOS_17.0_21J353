//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSXPCListenerEndpoint, TUCall;

@protocol TUCallCenterXPCClient <NSObject>
- (oneway void)handleUIXPCEndpointChanged:(NSXPCListenerEndpoint *)arg1;
- (oneway void)handleNotificationName:(NSString *)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (oneway void)resetCallProvisionalStates;
- (oneway void)handleCurrentCallsChanged:(NSArray *)arg1 callDisconnected:(TUCall *)arg2;
- (oneway void)handleMeterLevelChangedTo:(float)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg3;
- (oneway void)handleFrequencyChangedTo:(NSData *)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg3;
@end

