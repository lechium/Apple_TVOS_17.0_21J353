//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, SHMatchResultNotificationScheduler, SHMatcherRequest, _SHDownstreamMatcherDelegate;
@protocol SHMatcher, SHMatcherDelegate, SHWorkerDelegate;

@interface SHMatcherController : NSObject
{
    id <SHWorkerDelegate> _workerDelegate;	// 8 = 0x8
    NSUUID *_workerID;	// 16 = 0x10
    id <SHMatcherDelegate> delegate;	// 24 = 0x18
    id <SHMatcher> _matcher;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    SHMatcherController *_associatedMatcherController;	// 48 = 0x30
    id <SHMatcherDelegate> _matcherDelegateForResponse;	// 56 = 0x38
    SHMatcherRequest *_matcherRequest;	// 64 = 0x40
    _SHDownstreamMatcherDelegate *_downstreamMatcherDelegate;	// 72 = 0x48
    SHMatchResultNotificationScheduler *_notificationScheduler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000004a56b
@property(retain, nonatomic) SHMatchResultNotificationScheduler *notificationScheduler; // @synthesize notificationScheduler=_notificationScheduler;
@property(retain, nonatomic) _SHDownstreamMatcherDelegate *downstreamMatcherDelegate; // @synthesize downstreamMatcherDelegate=_downstreamMatcherDelegate;
@property(retain, nonatomic) SHMatcherRequest *matcherRequest; // @synthesize matcherRequest=_matcherRequest;
@property(nonatomic) __weak id <SHMatcherDelegate> matcherDelegateForResponse; // @synthesize matcherDelegateForResponse=_matcherDelegateForResponse;
@property(nonatomic) __weak SHMatcherController *associatedMatcherController; // @synthesize associatedMatcherController=_associatedMatcherController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) id <SHMatcher> matcher; // @synthesize matcher=_matcher;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <SHWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x001000000004a1a7
- (void)stopRecognition;	// IMP=0x001000000004a139
- (void)stop;	// IMP=0x001000000004a127
@property(readonly, nonatomic) long long executionScope;
@property(readonly, nonatomic) NSUUID *taskID;
@property(readonly, nonatomic) NSUUID *workerID; // @synthesize workerID=_workerID;
- (void)downstreamMatcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x00100000000499cf
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x001000000004992f
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x00100000000498b6
- (id)initWithMatcher:(id)arg1 notificationScheduler:(id)arg2;	// IMP=0x00100000000497d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

