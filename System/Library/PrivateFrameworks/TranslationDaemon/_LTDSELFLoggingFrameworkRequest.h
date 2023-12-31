//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SISchemaUUID, _LTDSELFLoggingSessionIdProvider;

__attribute__((visibility("hidden")))
@interface _LTDSELFLoggingFrameworkRequest : NSObject
{
    SISchemaUUID *_mtId;	// 8 = 0x8
    NSArray *_endpoints;	// 16 = 0x10
    _LTDSELFLoggingSessionIdProvider *_sessionIdProvider;	// 24 = 0x18
    SISchemaUUID *_frameworkRequestId;	// 32 = 0x20
    long long _requestRoute;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000259a8
@property(nonatomic) long long requestRoute; // @synthesize requestRoute=_requestRoute;
@property(retain, nonatomic) SISchemaUUID *frameworkRequestId; // @synthesize frameworkRequestId=_frameworkRequestId;
@property(retain, nonatomic) _LTDSELFLoggingSessionIdProvider *sessionIdProvider; // @synthesize sessionIdProvider=_sessionIdProvider;
@property(retain, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) SISchemaUUID *mtId; // @synthesize mtId=_mtId;
- (void)responseReceived;	// IMP=0x0000000000025765
- (id)initWithInvocationId:(id)arg1 endpoints:(id)arg2 sessionIdProvider:(id)arg3 qssSessionId:(id)arg4 requestType:(long long)arg5 requestRoute:(long long)arg6 requestSize:(unsigned long long)arg7;	// IMP=0x0000000000025420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

