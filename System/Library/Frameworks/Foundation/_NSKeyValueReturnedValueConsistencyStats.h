//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _NSKeyValueObjectAndKeyPair;

__attribute__((visibility("hidden")))
@interface _NSKeyValueReturnedValueConsistencyStats : NSObject
{
    _NSKeyValueObjectAndKeyPair *_pair;	// 8 = 0x8
    _Bool _capturedInitialValue;	// 16 = 0x10
    id _weakCurrentValue;	// 24 = 0x18
    id _copiedCurrentValue;	// 32 = 0x20
    long long _checkCount;	// 40 = 0x28
}

- (void)setCurrentValue:(id)arg1;	// IMP=0x00000000007578e9
- (id)currentValue;	// IMP=0x00000000007578d0
- (void)dealloc;	// IMP=0x0000000000757858

@end

