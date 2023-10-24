//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext, NSDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCoreImageFilterCustomVideoCompositor : NSObject
{
    NSObject<OS_dispatch_group> *_filteringRequestsInFlight;	// 8 = 0x8
    _Bool _shouldCancelAllRequests;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_defaultCIContextThreadSafety;	// 24 = 0x18
    CIContext *_defaultCIContext;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x001000000013d57a
@property _Bool shouldCancelAllRequests; // @synthesize shouldCancelAllRequests=_shouldCancelAllRequests;
@property(readonly, nonatomic) _Bool supportsHDRSourceFrames;
@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;
- (void)cancelAllPendingVideoCompositionRequests;	// IMP=0x000000000013db8d
- (void)startVideoCompositionRequest:(id)arg1;	// IMP=0x000000000013d951
- (id)defaultCIContext;	// IMP=0x000000000013d81c
@property(readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight; // @synthesize filteringRequestsInFlight=_filteringRequestsInFlight;
- (void)renderContextChanged:(id)arg1;	// IMP=0x000000000013d79d
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
- (void)dealloc;	// IMP=0x000000000013d61d
- (void)_willDeallocOrFinalize;	// IMP=0x000000000013d5ef
- (id)init;	// IMP=0x000000000013d58b

// Remaining properties
@property(readonly, nonatomic) _Bool canConformColorOfSourceFrames;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

