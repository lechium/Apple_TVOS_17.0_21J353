//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString;

@protocol SBSRemoteAlertHandleServiceClientInterface
- (oneway void)remoteAlertHandleWithID:(NSString *)arg1 didInvalidateWithError:(NSError *)arg2;
- (oneway void)remoteAlertHandleWithIDDidDeactivate:(NSString *)arg1;
- (oneway void)remoteAlertHandleWithIDDidActivate:(NSString *)arg1;
@end

