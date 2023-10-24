//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSCGTextGraphicsContext : NSObject
{
    struct CGContext *_context;	// 8 = 0x8
}

+ (id)graphicsContextForApplicationFrameworkContext:(long long)arg1;	// IMP=0x001000000006ad01
- (void)becomeCurrentGraphicsContextDuringBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006ae34
- (void)restoreGraphicsState;	// IMP=0x000000000006ae1f
- (void)saveGraphicsState;	// IMP=0x000000000006ae0a
@property(readonly, getter=isDrawingToScreen) _Bool drawingToScreen;
@property(readonly, getter=isFlipped) _Bool flipped;
@property(readonly) struct CGContext *CGContext;
- (void)dealloc;	// IMP=0x000000000006adb1
- (id)initWithCGContext:(struct CGContext *)arg1;	// IMP=0x000000000006ad5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

