//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSHBacklightEnvironmentPresentation, BLSHBacklightInactiveEnvironmentSession;

@protocol BLSHBacklightInactiveEnvironmentSessionObserving <NSObject>
- (void)didEndInactiveEnvironmentSession:(BLSHBacklightInactiveEnvironmentSession *)arg1;
- (void)inactiveEnvironmentSession:(BLSHBacklightInactiveEnvironmentSession *)arg1 didUpdateToPresentation:(BLSHBacklightEnvironmentPresentation *)arg2;

@optional
- (void)inactiveEnvironmentSession:(BLSHBacklightInactiveEnvironmentSession *)arg1 didBeginUpdateToBacklightState:(long long)arg2;
@end

