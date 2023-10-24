//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVideoComposition, AVVideoCompositionRenderContext, AVWeakReference, NSDictionary, NSError;
@protocol AVVideoCompositing, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCustomVideoCompositorSession : NSObject
{
    struct OpaqueFigVideoCompositor *_figCustomCompositor;	// 8 = 0x8
    _Bool _hasRegisteredFigCustomCompositorCallbacks;	// 16 = 0x10
    NSDictionary *_clientRequiredPixelBufferAttributes;	// 24 = 0x18
    AVWeakReference *_weakSelf;	// 32 = 0x20
    void *_callbackContextToken;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_videoCompositionQ;	// 48 = 0x30
    AVVideoComposition *_videoComposition;	// 56 = 0x38
    _Bool _videoCompositionDidChange;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_clientCustomCompositorQ;	// 72 = 0x48
    id <AVVideoCompositing> _clientCustomCompositor;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_clientErrorQ;	// 88 = 0x58
    NSError *_clientError;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_renderContextQ;	// 104 = 0x68
    AVVideoCompositionRenderContext *_renderContext;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_finishedRequestQ;	// 120 = 0x78
}

+ (_Bool)_colorPropertiesAreSetInVideoComposition:(id)arg1;	// IMP=0x006000000014708a
+ (id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2;	// IMP=0x0060000000146fdf
@property(readonly, nonatomic) _Bool supportsHDRSourceFrames;
@property(readonly, nonatomic) _Bool supportsWideColorSourceFrames;
- (void)compositionFrameDidCancel:(struct OpaqueFigVideoCompositorFrame *)arg1;	// IMP=0x0000000000147f7c
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000000147e7c
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 didFinishWithComposedPixelBuffer:(struct __CVBuffer *)arg2;	// IMP=0x0000000000147dc0
- (id)getAndClearClientError;	// IMP=0x0000000000147cd2
- (struct OpaqueFigVideoCompositor *)_copyFigVideoCompositor;	// IMP=0x0000000000147cbb
- (void)setVideoComposition:(id)arg1;	// IMP=0x0000000000147c27
- (void)dealloc;	// IMP=0x0000000000147bb4
- (void)_willDeallocOrFinalize;	// IMP=0x0000000000147b41
- (void)detachVideoComposition;	// IMP=0x0000000000147abd
- (_Bool)commitCustomVideoCompositorPropertiesAndReturnError:(id *)arg1;	// IMP=0x0000000000147659
- (_Bool)_validateRequiredPixelBufferAttributesForRenderContext:(id)arg1 andReturnException:(id *)arg2;	// IMP=0x00000000001474ed
- (_Bool)_validateSourcePixelBufferAttributes:(id)arg1 andReturnException:(id *)arg2;	// IMP=0x000000000014733a
- (id)customVideoCompositor;	// IMP=0x0000000000147330
- (id)initWithVideoComposition:(id)arg1;	// IMP=0x00000000001470e0
- (void)_cleanupFigCallbacks;	// IMP=0x00000000001490cc
- (int)_setupFigCallbacks;	// IMP=0x0000000000148a71
- (void)_customCompositorFigPropertyDidChange;	// IMP=0x00000000001489da
- (int)_customCompositorShouldCancelPendingFrames;	// IMP=0x000000000014894e
- (int)_customCompositorShouldPrerollForRenderingFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2 andThenFromTime:(CDStruct_1b6d18a9)arg3 toTime:(CDStruct_1b6d18a9)arg4 requestID:(long long)arg5;	// IMP=0x00000000001487b6
- (int)_customCompositorShouldAnticipateRenderingFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2 andThenFromTime:(CDStruct_1b6d18a9)arg3 toTime:(CDStruct_1b6d18a9)arg4;	// IMP=0x0000000000148648
- (int)_compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 atTime:(CDStruct_1b6d18a9)arg2 requiresRenderUsingSources:(id)arg3 requiresSampleBuffersUsingSources:(id)arg4 withInstruction:(void *)arg5;	// IMP=0x0000000000148192

@end
