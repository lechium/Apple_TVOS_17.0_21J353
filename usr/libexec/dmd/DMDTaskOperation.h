//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskOperation.h>

@class DMDConfigurationEngine, DMDTaskOperationContext, NSObject, NSString;
@protocol OS_os_transaction;

@interface DMDTaskOperation : CATTaskOperation
{
    DMDTaskOperationContext *_context;	// 8 = 0x8
    DMDConfigurationEngine *_configurationEngine;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
}

+ (id)whitelistedClassesForRequest;	// IMP=0x002000000006e3ac
+ (id)requiredEntitlements;	// IMP=0x001000000006e39f
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006e19b
- (void).cxx_destruct;	// IMP=0x002000000006e491
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) DMDConfigurationEngine *configurationEngine; // @synthesize configurationEngine=_configurationEngine;
@property(retain, nonatomic) DMDTaskOperationContext *context; // @synthesize context=_context;
- (void)endOperationWithDMFErrorCode:(long long)arg1;	// IMP=0x001000000006e3e3
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000006e3cc
@property(readonly, nonatomic) _Bool runOnMainThread;
@property(readonly, nonatomic) _Bool runConcurrently;
@property(readonly, nonatomic) unsigned long long queueGroup;
- (void)main;	// IMP=0x001000000006e2ec
- (_Bool)isAsynchronous;	// IMP=0x001000000006e2e4
- (void)operationDidFinish;	// IMP=0x001000000006e14b
- (void)operationWillFinish;	// IMP=0x001000000006e0a2
- (void)operationWillStart;	// IMP=0x001000000006e00b
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000006df5c
- (void)dealloc;	// IMP=0x001000000006de83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

