//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MPMiddlewareOperationMap : NSObject
{
    NSMapTable *_middlewareOperationMap;	// 8 = 0x8
    NSMutableArray *_middleware;	// 16 = 0x10
    NSMutableArray *_operations;	// 24 = 0x18
}

+ (id)mapForRequest:(id)arg1;	// IMP=0x00600000002363ff
- (void).cxx_destruct;	// IMP=0x00000000002363cc
- (id)allOperations;	// IMP=0x00000000002363be
- (id)allMiddleware;	// IMP=0x00000000002363b0
- (id)operationsForMiddleware:(id)arg1;	// IMP=0x000000000023639a
- (id)_init;	// IMP=0x000000000023636b

@end
