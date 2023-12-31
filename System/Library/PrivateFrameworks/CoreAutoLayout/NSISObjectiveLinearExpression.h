//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISEngine;

__attribute__((visibility("hidden")))
@interface NSISObjectiveLinearExpression : NSObject
{
    NSISEngine *_engine;	// 8 = 0x8
    struct {
        struct {
            CDStruct_183601bc **values;
            int count;
            unsigned int capacity;
        } heap;
        CDStruct_183601bc *values;
        unsigned int count;
        unsigned int tombstones;
        unsigned int size;
        unsigned short grow_shift;
    } _priorityMap;	// 16 = 0x10
    struct {
        CDStruct_183601bc *values;
        unsigned short count;
        unsigned short capacity;
        unsigned int key;
        unsigned int heap_position;
    } _constant;	// 56 = 0x38
}

- (id)description;	// IMP=0x0000000000006d59
- (void)dealloc;	// IMP=0x0000000000006cec
- (id)init;	// IMP=0x0000000000006b17
- (unsigned long long)_variableCount;	// IMP=0x0000000000007bf1
- (_Bool)_restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(CDStruct_fcd6c539 *)arg1;	// IMP=0x0000000000007bc0
- (void)_replaceVar:(CDStruct_fcd6c539)arg1 withExpression:(CDStruct_9ac54d62 *)arg2 processVarNewToReceiver:(CDUnknownBlockType)arg3 processVarDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007bab
- (void)_removeVar:(CDStruct_fcd6c539)arg1;	// IMP=0x0000000000007b9f
- (void)_addVar:(CDStruct_fcd6c539)arg1 priority:(double)arg2 times:(double)arg3;	// IMP=0x0000000000007b7b
- (id)_initWithEngine:(id)arg1;	// IMP=0x0000000000007b6e

@end

