//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSXPCListenerEndpoint;

@protocol NSXPCStoreServerEndpointFactory <NSObject>
- (NSXPCListenerEndpoint *)newEndpoint;

@optional
- (NSXPCListenerEndpoint *)newEndpointWithError:(id *)arg1;
@end

