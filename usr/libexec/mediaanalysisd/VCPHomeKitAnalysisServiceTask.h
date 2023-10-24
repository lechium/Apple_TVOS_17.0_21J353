//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMIAnalysisService, IOSurface, NSData, NSDictionary;
@protocol OS_dispatch_queue;

@interface VCPHomeKitAnalysisServiceTask : NSObject
{
    _Bool _cancel;	// 8 = 0x8
    _Bool _run;	// 9 = 0x9
    NSData *_fragmentData;	// 16 = 0x10
    IOSurface *_fragmentSurface;	// 24 = 0x18
    NSDictionary *_properties;	// 32 = 0x20
    int _requestID;	// 40 = 0x28
    HMIAnalysisService *_analysisService;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_managementQueue;	// 56 = 0x38
    CDUnknownBlockType _progressHandler;	// 64 = 0x40
    CDUnknownBlockType _completionHandler;	// 72 = 0x48
}

+ (id)taskForFragmentSurface:(id)arg1 withProperties:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x002000000001822e
+ (id)taskForFragmentData:(id)arg1 withProperties:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001813e
+ (_Bool)isPerFrameAnalysisEnabled;	// IMP=0x0010000000017d30
- (void).cxx_destruct;	// IMP=0x0020000000018f13
- (_Bool)autoCancellable;	// IMP=0x0010000000018f0b
- (int)run;	// IMP=0x0010000000018ec4
- (void)runFrameLevelAnalysis;	// IMP=0x001000000001877d
- (void)runFragmentLevelAnalysis;	// IMP=0x001000000001845b
- (void)cancel;	// IMP=0x001000000001832c
- (float)resourceRequirement;	// IMP=0x001000000001831e
- (id)initWithFragmentSurface:(id)arg1 properties:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000017f9b
- (id)initWithFragmentData:(id)arg1 properties:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000017d46
- (id)init;	// IMP=0x0010000000017d38

@end

