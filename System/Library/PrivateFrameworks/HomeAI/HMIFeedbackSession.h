//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIHomeKitClient, NSOperationQueue, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface HMIFeedbackSession : HMFObject
{
    HMIHomeKitClient *_homeKitClient;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSString *_feedbackServiceHost;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000000587f1
- (void).cxx_destruct;	// IMP=0x00000000000588b0
@property(readonly) NSString *feedbackServiceHost; // @synthesize feedbackServiceHost=_feedbackServiceHost;
@property(readonly) NSURLSession *session; // @synthesize session=_session;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) HMIHomeKitClient *homeKitClient; // @synthesize homeKitClient=_homeKitClient;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005811c
- (id)init;	// IMP=0x0000000000057f3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

