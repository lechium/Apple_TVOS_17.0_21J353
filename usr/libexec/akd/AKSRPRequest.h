//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKSRPContextHelper, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface AKSRPRequest : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSDictionary *_additionalHeaders;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
    AKSRPContextHelper *_contextHelper;	// 40 = 0x28
}

+ (_Bool)_performRequestWithURL:(id)arg1 context:(id)arg2 error:(struct __CFError **)arg3;	// IMP=0x00200000000a8086
- (void).cxx_destruct;	// IMP=0x00200000000a81fc
@property(readonly, nonatomic) AKSRPContextHelper *contextHelper; // @synthesize contextHelper=_contextHelper;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
- (void)_attachAdditionalHeaders:(id)arg1 toContextHelper:(id)arg2;	// IMP=0x00100000000a80da
- (void)_performRequestWithContext:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a7ef9
- (void)invalidateWithError:(id)arg1;	// IMP=0x00100000000a7ee3
- (void)executeWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a7c07
@property(readonly, nonatomic) NSDictionary *dispatchingInfo;
- (id)initWithURL:(id)arg1 contextHelper:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a7997

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
