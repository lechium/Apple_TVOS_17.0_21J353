//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHAPAccessoryTaskContext, NSArray, NSDate, NSMapTable, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryTask : NSObject
{
    HMDHAPAccessoryTaskContext *_context;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
    NSMapTable *_requestToResponseMap;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    NSDate *_executionTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000ca5c7d
@property(retain) NSDate *executionTime; // @synthesize executionTime=_executionTime;
@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) NSMapTable *requestToResponseMap; // @synthesize requestToResponseMap=_requestToResponseMap;
@property(readonly) NSArray *requests; // @synthesize requests=_requests;
@property(readonly) HMDHAPAccessoryTaskContext *context; // @synthesize context=_context;
- (void)execute;	// IMP=0x0000000000ca5b62
- (CDUnknownBlockType)_updatedCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ca5a80
- (void)addCharacteristicResponses:(id)arg1;	// IMP=0x0000000000ca5a2e
- (_Bool)supportsMultiPartResponse;	// IMP=0x0000000000ca59ea
- (void)finishTaskWithCharacteristicResponses:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ca57a4
- (void)sendCharacteristicNotificationsForCompletedTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ca53e1
- (void)sendCharacteristicNotificationsForTaskInProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ca4b18
- (id)logEventsFromAccessoryRequestMap:(id)arg1 accessoryList:(id)arg2;	// IMP=0x0000000000ca48cc
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) double executionTimeInterval;
@property(readonly) unsigned long long completedRequestsCount;
- (_Bool)allResponsesReceived;	// IMP=0x0000000000ca443e
@property(readonly) NSArray *characteristicResponses;
- (id)activity;	// IMP=0x0000000000ca4352
- (unsigned long long)sourceType;	// IMP=0x0000000000ca430e
- (id)workQueue;	// IMP=0x0000000000ca42be
- (id)requestIdentifier;	// IMP=0x0000000000ca426e
- (id)operationName;	// IMP=0x0000000000ca421e
@property(readonly) NSNumber *identifier;
- (id)initWithContext:(id)arg1 requests:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ca40ca

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

