//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLFeatureDescription, MLFeatureValue, MLPixelBufferPool, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MLE5OutputPortBinder : NSObject
{
    struct __CVBuffer *_temporarilyBoundPixelBuffer;	// 8 = 0x8
    MLFeatureValue *_featureValue;	// 16 = 0x10
    _Bool _outputBackingWasDirectlyBound;	// 24 = 0x18
    MLPixelBufferPool *_pixelBufferPool;	// 32 = 0x20
    id _outputBacking;	// 40 = 0x28
    struct e5rt_io_port *_portHandle;	// 48 = 0x30
    MLFeatureDescription *_featureDescription;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_serialQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000011e41a
@property(readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly) MLFeatureDescription *featureDescription; // @synthesize featureDescription=_featureDescription;
@property(readonly) struct e5rt_io_port *portHandle; // @synthesize portHandle=_portHandle;
@property(nonatomic) _Bool outputBackingWasDirectlyBound; // @synthesize outputBackingWasDirectlyBound=_outputBackingWasDirectlyBound;
@property(retain) id outputBacking; // @synthesize outputBacking=_outputBacking;
@property(retain, nonatomic) MLPixelBufferPool *pixelBufferPool; // @synthesize pixelBufferPool=_pixelBufferPool;
- (void)reset;	// IMP=0x000000000011e342
- (id)_makeFeatureValueFromPort:(struct e5rt_io_port *)arg1 featureDescription:(id)arg2 error:(id *)arg3;	// IMP=0x000000000011dad0
- (_Bool)_copyOutputFromPort:(struct e5rt_io_port *)arg1 toOutputBacking:(id)arg2 featureDescription:(id)arg3 error:(id *)arg4;	// IMP=0x000000000011d67a
- (id)_makeFeatureValueFromOutputBacking:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011d46d
- (id)_makeFeatureValueAndReturnError:(id *)arg1;	// IMP=0x000000000011d2d5
@property(readonly) MLFeatureValue *featureValue;
- (_Bool)bindAndReturnError:(id *)arg1;	// IMP=0x000000000011d180
- (long long)_tryToBindOutputBackingDirectlyAndReturnError:(id *)arg1;	// IMP=0x000000000011c9ba
- (id)initWithPort:(struct e5rt_io_port *)arg1 featureDescription:(id)arg2;	// IMP=0x000000000011c90f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

