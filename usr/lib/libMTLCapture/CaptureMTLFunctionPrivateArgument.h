//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLFunctionPrivateArgumentSPI;

@interface CaptureMTLFunctionPrivateArgument : NSObject
{
    NSObject<MTLFunctionPrivateArgumentSPI> *_baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000aa021
- (void)dealloc;	// IMP=0x00000000000a9f36
@property(readonly) NSString *typeName;
@property(readonly) NSString *qualifier;
@property(readonly) NSString *name;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000a9e9d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000a9e8c
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000a9e7e
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000a9e1e
- (id)originalObject;	// IMP=0x00000000000a9e10
- (id)description;	// IMP=0x00000000000a9d92
@property(readonly) id <MTLFunctionPrivateArgumentSPI> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x00000000000a9cdf

@end
