//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeHubAssignment/NSObject-Protocol.h>

@class HHSiriEndpointIdleStatus, HHSiriEndpointSessionStatus, NSUUID;
@protocol HHSiriEndpointSessionStatusProvider;

@protocol HHSiriEndpointSessionStatusObserver <NSObject>
- (void)provider:(id <HHSiriEndpointSessionStatusProvider>)arg1 didRemoveEndpointWithIdentifier:(NSUUID *)arg2;
- (void)provider:(id <HHSiriEndpointSessionStatusProvider>)arg1 didUpdateEndpointWithStatus:(HHSiriEndpointSessionStatus *)arg2;

@optional
- (void)provider:(id <HHSiriEndpointSessionStatusProvider>)arg1 didUpdateEndpointIdleStatus:(HHSiriEndpointIdleStatus *)arg2;
@end
