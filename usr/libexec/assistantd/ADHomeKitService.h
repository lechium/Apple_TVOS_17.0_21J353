//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMClientConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ADHomeKitService
{
    HMClientConnection *_hmConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_targetQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000289d9e
- (id)_hmConnection;	// IMP=0x0010000000289d4d
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000289c8f
- (void)resetExternalResources;	// IMP=0x0010000000289c3d
- (void)preheatDomain:(id)arg1;	// IMP=0x0010000000289beb
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000289be3
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000289b57
- (id)domains;	// IMP=0x0010000000289aed
- (id)handle;	// IMP=0x0010000000289ae4
- (id)init;	// IMP=0x0010000000289a20

@end
