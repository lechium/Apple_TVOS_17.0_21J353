//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKTokenBaseContext.h"

@class NSString, NSXPCListenerEndpoint, TKTokenConfigurationConnection, TKTokenDriver;

__attribute__((visibility("hidden")))
@interface TKTokenDriverContext : TKTokenBaseContext
{
    TKTokenConfigurationConnection *_configurationConnection;	// 8 = 0x8
    id _initialKeepAlive;	// 16 = 0x10
    TKTokenDriver *_driver;	// 24 = 0x18
    NSXPCListenerEndpoint *_configurationEndpoint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000042de
@property(readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint; // @synthesize configurationEndpoint=_configurationEndpoint;
@property(readonly, nonatomic) TKTokenDriver *driver; // @synthesize driver=_driver;
- (void)releaseTokenWithInstanceID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004166
- (void)configureWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003f46
- (void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003ce9
- (void)acquireTokenWithInstanceID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003a23
- (_Bool)startRequestWithError:(id *)arg1;	// IMP=0x0000000000003884
- (void)setConfigurationEndpoint:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000384b
- (void)setup;	// IMP=0x0000000000003314
@property(readonly, nonatomic) double idleTimeout;
- (void)auditAuthOperation:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 success:(_Bool)arg3;	// IMP=0x00000000000030c3
- (id)configurationForTokenID:(id)arg1;	// IMP=0x000000000000303f
@property(readonly, nonatomic) TKTokenConfigurationConnection *configurationConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

