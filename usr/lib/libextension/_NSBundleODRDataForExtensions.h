//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForExtensions
{
    NSXPCConnection *_connection;	// 40 = 0x28
}

- (void)hostApplicationAssetPacksBecameUnavailable:(id)arg1;	// IMP=0x000000000070bebd
- (void)hostApplicationAssetPacksBecameAvailable:(id)arg1;	// IMP=0x000000000070be01
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000070bd97
- (void)accessSandboxExtension:(id)arg1;	// IMP=0x000000000070bccb
- (void)dealloc;	// IMP=0x000000000070bc51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

