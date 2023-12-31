//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentityCache, NSString;
@protocol MCMClientCodeSignInfoCache, MCMClientIdentityCache;

__attribute__((visibility("hidden")))
@interface MCMClientFactory : NSObject
{
    MCMUserIdentityCache *_userIdentityCache;	// 8 = 0x8
    id <MCMClientCodeSignInfoCache> _clientCodeSignInfoCache;	// 16 = 0x10
    id <MCMClientIdentityCache> _clientIdentityCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000474a8
@property(readonly, nonatomic) id <MCMClientIdentityCache> clientIdentityCache; // @synthesize clientIdentityCache=_clientIdentityCache;
@property(readonly, nonatomic) id <MCMClientCodeSignInfoCache> clientCodeSignInfoCache; // @synthesize clientCodeSignInfoCache=_clientCodeSignInfoCache;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (id)initWithUserIdentityCache:(id)arg1 clientCodeSignInfoCache:(id)arg2 clientIdentityCache:(id)arg3;	// IMP=0x0000000000047331
- (id)_codeSignInfoWithClient:(struct container_client *)arg1 CDHash:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000048820
- (id)_clientIdentityWithClient:(struct container_client *)arg1 realAuditToken:(CDStruct_4c969caf)arg2 extension:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000047e67
- (id)_clientIdentityWithClientMessageContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000047b81
- (id)clientIdentityWithClientMessageContext:(id)arg1 xpcMessage:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000474fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

