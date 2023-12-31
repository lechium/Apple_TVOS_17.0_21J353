//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface _LSServerSettingsStore
{
    NSXPCListener *_listener;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e097b
- (void).cxx_destruct;	// IMP=0x00000000000e205a
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)postSettingsChangeNotification;	// IMP=0x00000000000e1fb0
- (void)resetUserElectionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e1e64
- (void)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e1ce8
- (void)userElectionForExtensionKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1c64
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000e1b94
- (void)_internalQueue_resetUserElection;	// IMP=0x00000000000e1a11
- (void)_internalQueue_insertIdentifier:(id)arg1 userElection:(unsigned char)arg2 timestamp:(double)arg3;	// IMP=0x00000000000e17f0
- (void)_internalQueue_insertIdentifier:(id)arg1 userElection:(unsigned char)arg2;	// IMP=0x00000000000e15e6
- (void)_internalQueue_initializeDatabase;	// IMP=0x00000000000e1513
- (void)_internalQueue_loadPluginKitDatabase;	// IMP=0x00000000000e0eda
- (void)_internalQueue_loadDatabase;	// IMP=0x00000000000e0c64
- (_Bool)resetUserElectionsWithError:(id *)arg1;	// IMP=0x00000000000e0bdb
- (_Bool)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e0aec
- (id)settingsStoreConfigurationForProcessWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00000000000e0a3d
- (id)init;	// IMP=0x00000000000e0983

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

