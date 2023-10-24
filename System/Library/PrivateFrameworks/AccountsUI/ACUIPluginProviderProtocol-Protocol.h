//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccountsUI/NSObject-Protocol.h>

@class NSObject, PSViewController;
@protocol ACUIAccountViewsProviderProtocol, ACUISettingsPluginProtocol;

@protocol ACUIPluginProviderProtocol <NSObject>
- (NSObject<ACUIAccountViewsProviderProtocol> *)accountViewsProvider;
- (NSObject<ACUISettingsPluginProtocol> *)settingsPluginWithParent:(PSViewController *)arg1;
@end
