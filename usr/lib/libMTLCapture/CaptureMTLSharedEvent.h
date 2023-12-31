//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLSharedEvent, MTLSharedEventSPI;

@interface CaptureMTLSharedEvent : NSObject
{
    CaptureMTLDevice *_captureDevice;	// 8 = 0x8
    id <MTLSharedEventSPI> _baseObject;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003a4f0
- (void)dealloc;	// IMP=0x000000000003a405
@property unsigned long long signaledValue;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (id)IOSurfaceSharedEvent;	// IMP=0x000000000003a167
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000003a110
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000003a0ff
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000003a03e
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000039fde
- (id)originalObject;	// IMP=0x0000000000039fd0
- (_Bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;	// IMP=0x0000000000039e61
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039d99
- (id)newSharedEventHandle;	// IMP=0x0000000000039cba
@property(readonly) id <MTLSharedEvent> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000039bce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

