//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ADRapportLinkConnectionOptions, ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions;

@protocol ADRapportLinkConfigurationMutating <NSObject>
- (void)setEnablesProximityTracking:(long long)arg1;
- (void)setConnectionOptions:(ADRapportLinkConnectionOptions *)arg1;
- (void)setTransportOptions:(ADRapportLinkTransportOptions *)arg1;
- (void)setDiscoveryOptions:(ADRapportLinkDiscoveryOptions *)arg1;
@end

