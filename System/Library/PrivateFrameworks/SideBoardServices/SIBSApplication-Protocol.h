//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SideBoardServices/NSObject-Protocol.h>

@class HHEndpoint, NSArray, NSString;
@protocol SIBSApplicationDelegate;

@protocol SIBSApplication <NSObject>
@property(readonly) long long applicationPriorityClass;
@property(readonly) NSArray *applicationConfigurations;
@property __weak id <SIBSApplicationDelegate> delegate;
@property(readonly) NSString *applicationIdentifier;
- (void)didReceiveButtonNotificationForEndpoint:(HHEndpoint *)arg1 buttonAction:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)didReceiveDismissNotificationForEndpoint:(HHEndpoint *)arg1;
- (void)endpointDidStop:(HHEndpoint *)arg1;
- (void)endpointDidStart:(HHEndpoint *)arg1;
- (void)didRemoveEndpoint:(HHEndpoint *)arg1 reason:(long long)arg2;
- (void)willRemoveEndpoint:(HHEndpoint *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didAddEndpoint:(HHEndpoint *)arg1 reason:(long long)arg2;
- (void)applicationWillTerminate;
- (void)applicationWillFinishSetup;
@end
