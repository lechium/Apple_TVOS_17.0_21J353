//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLFunctionConstantValues.h"

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues
{
    void *_constantStorage;	// 8 = 0x8
}

- (id)newConstantScriptForFunction:(id)arg1 name:(id)arg2 specializedName:(id)arg3 errorMessage:(id *)arg4;	// IMP=0x000000000006e45a
- (const void *)constantValueWithFunctionConstant:(id)arg1;	// IMP=0x000000000006e442
- (void *)serializedConstantDataForFunction:(id)arg1 dataSize:(unsigned long long *)arg2 errorMessage:(id *)arg3;	// IMP=0x000000000006e424
- (id)description;	// IMP=0x000000000006e2ff
- (id)newIndexedConstantArray;	// IMP=0x000000000006e101
- (id)newNamedConstantArray;	// IMP=0x000000000006e0ec
- (void)reset;	// IMP=0x000000000006e07b
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 withName:(id)arg3;	// IMP=0x000000000006df64
- (void)setConstantValues:(const void *)arg1 type:(unsigned long long)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000006de0e
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000006dd22
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006dcc9
- (unsigned long long)hash;	// IMP=0x000000000006dcb1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006dc02
- (void)dealloc;	// IMP=0x000000000006db9c
- (id)init;	// IMP=0x000000000006db31

@end

