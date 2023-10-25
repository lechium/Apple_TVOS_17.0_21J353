//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLRasterizationRateMap, MTLRasterizationRateMapSPI;

@interface CaptureMTLRasterizationRateMap : NSObject
{
    id <MTLRasterizationRateMapSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000031082
- (void)resetUsingDescriptor:(id)arg1;	// IMP=0x0000000000030f6d
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000030f57
- (unsigned long long)mutability;	// IMP=0x0000000000030f41
- (float)minFactor;	// IMP=0x0000000000030f2b
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000030ed4
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000030ec3
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000030e02
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000030da2
- (id)originalObject;	// IMP=0x0000000000030d94
- (CDStruct_14f26992)physicalSizeForLayer:(unsigned long long)arg1;	// IMP=0x0000000000030c7c
- (CDStruct_b2fbf00d)mapScreenToPhysicalCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(unsigned long long)arg2;	// IMP=0x0000000000030b7f
- (CDStruct_b2fbf00d)mapPhysicalToScreenCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(unsigned long long)arg2;	// IMP=0x0000000000030b69
- (void)dealloc;	// IMP=0x0000000000030a7e
- (void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x00000000000308fd
@property(readonly) CDStruct_14f26992 screenSize;
@property(readonly) CDStruct_14f26992 physicalGranularity;
@property(readonly) CDStruct_4bcfbbae parameterBufferSizeAndAlign;
@property(readonly) unsigned long long layerCount;
@property(readonly) NSString *label;
@property(readonly) id <MTLDevice> device;
@property(readonly) id <MTLRasterizationRateMap> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000003074b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

