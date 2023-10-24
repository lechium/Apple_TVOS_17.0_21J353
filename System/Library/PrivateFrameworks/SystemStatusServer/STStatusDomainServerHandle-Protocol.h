//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusServer/NSObject-Protocol.h>

@protocol STStatusDomainClientHandle, STStatusDomainData, STStatusDomainUserInteraction;

@protocol STStatusDomainServerHandle <NSObject>
- (void)reportUserInteraction:(id <STStatusDomainUserInteraction>)arg1 forClient:(id <STStatusDomainClientHandle>)arg2 domain:(unsigned long long)arg3;
- (void)removeClient:(id <STStatusDomainClientHandle>)arg1 forDomain:(unsigned long long)arg2;
- (void)registerClient:(id <STStatusDomainClientHandle>)arg1 forDomain:(unsigned long long)arg2;
- (id <STStatusDomainData>)dataForDomain:(unsigned long long)arg1;
@end

