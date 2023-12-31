//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSValue.h"

__attribute__((visibility("hidden")))
@interface NSWeakObjectValue : NSValue
{
    void *_value;	// 8 = 0x8
    id _object;	// 16 = 0x10
    _Bool _useFallback;	// 24 = 0x18
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000742691
- (id)weakObjectValue;	// IMP=0x0000000000742673
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000007425cd
- (void)getValue:(void *)arg1;	// IMP=0x00000000007425a1
- (id)nonretainedObjectValue;	// IMP=0x0000000000742590
- (const char *)objCType;	// IMP=0x0000000000742583
- (unsigned long long)hash;	// IMP=0x0000000000742572
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x0000000000742534
- (void)dealloc;	// IMP=0x00000000007424c5
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000742438

@end

