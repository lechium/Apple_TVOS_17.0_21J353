//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLSession, NSString, NSURLSessionTask;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSBiometricsPresentationProxy : NSObject
{
    AMSURLSession *_session;	// 8 = 0x8
    NSURLSessionTask *_task;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000020120c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) AMSURLSession *session; // @synthesize session=_session;
- (void)handleDialogRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000201048
- (void)handleAuthenticateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000200cd6
- (id)initWithSession:(id)arg1 task:(id)arg2;	// IMP=0x0000000000200bff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

