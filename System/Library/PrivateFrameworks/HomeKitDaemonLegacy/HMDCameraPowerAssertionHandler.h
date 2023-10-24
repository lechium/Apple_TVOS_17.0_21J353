//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraPowerAssertionHandler : HMFObject
{
    unsigned int _powerAssertion;	// 8 = 0x8
    NSMutableSet *_currentRequestHandlerSessionIDs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000792905
+ (id)sharedHandler;	// IMP=0x00100000007928d5
- (void).cxx_destruct;	// IMP=0x000000000079219b
@property(nonatomic) unsigned int powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableSet *currentRequestHandlerSessionIDs; // @synthesize currentRequestHandlerSessionIDs=_currentRequestHandlerSessionIDs;
- (void)deregisterRemoteRequestHandler:(id)arg1;	// IMP=0x00000000007920a1
- (void)registerRemoteRequestHandler:(id)arg1 forSessionID:(id)arg2;	// IMP=0x0000000000791fc3
- (id)init;	// IMP=0x0000000000791ecd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

