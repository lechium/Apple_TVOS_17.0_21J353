//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatus/NSObject-Protocol.h>

@protocol STStatusDomainUserInteraction;

@protocol STStatusDomainPublisherXPCClient <NSObject>
- (void)handleUserInteraction:(id <STStatusDomainUserInteraction>)arg1 forDomain:(unsigned long long)arg2;
@end

