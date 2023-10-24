//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKDServer, PKDXpcClient;
@protocol OS_xpc_object;

@interface PKDTransaction : NSObject
{
    const char *_type;	// 8 = 0x8
    unsigned long long _interval;	// 16 = 0x10
    PKDXpcClient *_client;	// 24 = 0x18
    NSObject<OS_xpc_object> *_request;	// 32 = 0x20
    NSObject<OS_xpc_object> *_reply;	// 40 = 0x28
    unsigned long long _version;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001aad0
@property unsigned long long version; // @synthesize version=_version;
@property(retain) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain) NSObject<OS_xpc_object> *request; // @synthesize request=_request;
@property(retain) PKDXpcClient *client; // @synthesize client=_client;
- (void)fail:(long long)arg1 error:(id)arg2;	// IMP=0x000000000001a900
- (void)fail:(long long)arg1 message:(id)arg2;	// IMP=0x000000000001a820
- (void)done;	// IMP=0x000000000001a6d0
- (void)addAnnotationForPlugIn:(id)arg1 in:(id)arg2;	// IMP=0x000000000001a580
- (_Bool)pluginShouldBeAutoEnabled:(id)arg1;	// IMP=0x000000000001a570
- (void)matchPlugIns;	// IMP=0x0000000000015f90
- (void)findPlugIn;	// IMP=0x0000000000015b70
- (id)findPlugInByPathURL:(id)arg1;	// IMP=0x0000000000015a80
- (id)findPlugInByUUID:(id)arg1;	// IMP=0x00000000000159b0
- (void)lockDownPlugIns;	// IMP=0x0000000000014a00
- (void)bulkAnnotatePlugIns;	// IMP=0x00000000000142f0
- (void)annotatePlugIns;	// IMP=0x0000000000013c30
- (void)accessPlugIns;	// IMP=0x00000000000139a0
- (void)readyPlugIns;	// IMP=0x0000000000012910
- (_Bool)processUuidList:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011cd0
- (void)bulkPlugIns;	// IMP=0x0000000000011c30
- (void)removePlugIns;	// IMP=0x0000000000011990
- (void)addPlugIns;	// IMP=0x00000000000116c0
- (_Bool)processPaths:(CDUnknownBlockType)arg1;	// IMP=0x00000000000115f0
- (_Bool)marshalPaths:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011390
- (void)dispatch;	// IMP=0x00000000000110a0
- (CDStruct_4c969caf)auditToken;	// IMP=0x0000000000011040
@property(readonly) NSObject<OS_xpc_object> *connection;
@property(readonly) PKDServer *server;
- (id)initWithRequest:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000000010cf0

@end
