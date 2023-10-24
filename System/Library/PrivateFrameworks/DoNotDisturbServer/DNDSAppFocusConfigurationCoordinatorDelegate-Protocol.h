//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSAppFocusConfigurationCoordinator, DNDState, NSString;

@protocol DNDSAppFocusConfigurationCoordinatorDelegate <NSObject>
- (DNDState *)currentStateForAppFocusConfigurationCoordinator:(DNDSAppFocusConfigurationCoordinator *)arg1;

@optional
- (void)appFocusConfigurationCoordinator:(DNDSAppFocusConfigurationCoordinator *)arg1 didUpdateAppConfigurationContextForModeIdentifier:(NSString *)arg2;
@end

