//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVMediaDataRequester : NSObject
{
    id <AVMediaDataRequesterConsumer> _mediaDataConsumer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_requestQueue;	// 16 = 0x10
    CDUnknownBlockType _requestBlock;	// 24 = 0x18
    struct OpaqueFigSimpleMutex *_invalidateMutex;	// 32 = 0x20
    _Bool _invalidatePending;	// 40 = 0x28
}

@property(readonly, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void)_requestMediaDataIfReady;	// IMP=0x00000000000cdc13
- (void)invalidate;	// IMP=0x00000000000cdb6b
- (_Bool)_isInvalidatePending;	// IMP=0x00000000000cdb43
- (void)_setInvalidatePending;	// IMP=0x00000000000cdb1e
- (void)startRequestingMediaData;	// IMP=0x00000000000cdabd
- (void)dealloc;	// IMP=0x00000000000cda68
- (id)init;	// IMP=0x00000000000cda4f
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cd8b2

@end

