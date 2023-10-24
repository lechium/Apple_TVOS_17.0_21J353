//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, NSXPCConnection, _UIAsyncInvocation, _UIViewServiceDeputyManager, _UIViewServiceSessionManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    _UIViewServiceSessionManager *_manager;	// 24 = 0x18
    _UIViewServiceDeputyManager *_deputyManager;	// 32 = 0x20
    _UIAsyncInvocation *_invalidationInvocation;	// 40 = 0x28
    CDUnknownBlockType _terminationHandler;	// 48 = 0x30
    NSUUID *_uniqueIdentifier;	// 56 = 0x38
}

+ (id)sessionWithConnection:(id)arg1 manager:(id)arg2;	// IMP=0x001000000129797a
+ (void)initialize;	// IMP=0x00100000012978d3
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) CDUnknownBlockType terminationHandler; // @synthesize terminationHandler=_terminationHandler;
@property(readonly) __weak _UIViewServiceSessionManager *manager; // @synthesize manager=_manager;
- (id)mainStoryboardNameForViewControllerOperator:(id)arg1;	// IMP=0x0000000001298437
- (id)containingViewControllerClassNameForViewControllerOperator:(id)arg1;	// IMP=0x0000000001298362
- (id)viewControllerClassNameForViewControllerOperator:(id)arg1;	// IMP=0x0000000001298245
- (_Bool)requiresExtensionContextForViewControllerOperator:(id)arg1;	// IMP=0x00000000012981b9
- (_Bool)isExtensionServiceViewControllerOperator:(id)arg1;	// IMP=0x00000000012981af
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewController:(id)arg2 contextToken:(id)arg3;	// IMP=0x0000000001298144
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;	// IMP=0x000000000129812e
- (void)unregisterDeputyClass:(Class)arg1;	// IMP=0x0000000001298118
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000001297f1e
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000001297f08
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000001297db4
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x0000000001297c95
- (void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2;	// IMP=0x0000000001297c7c
- (void)dealloc;	// IMP=0x0000000001297bb0
- (void)_objc_initiateDealloc;	// IMP=0x0000000001297902

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
