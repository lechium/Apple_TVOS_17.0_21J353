//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSProxy.h"

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface NSUndoManagerProxy : NSProxy
{
    NSUndoManager *_manager;	// 8 = 0x8
    Class _targetClass;	// 16 = 0x10
}

- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000073b660
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000073b643
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000073b626
- (void)superRelease;	// IMP=0x000000000073b5d4
- (oneway void)release;	// IMP=0x000000000073b56f
- (_Bool)_tryRetain;	// IMP=0x000000000073b4fc
- (id)retain;	// IMP=0x000000000073b497
- (void)setTargetClass:(Class)arg1;	// IMP=0x000000000073b486
- (id)initWithManager:(id)arg1;	// IMP=0x000000000073b472

@end

