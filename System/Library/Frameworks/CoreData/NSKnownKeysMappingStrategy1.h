//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSKnownKeysMappingStrategy.h"

__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy
{
    int _cd_rc;	// 8 = 0x8
    int _reserved64;	// 12 = 0xc
    void *_table;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
    id _reserved1;	// 32 = 0x20
    id *_keys;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x00600000000b1fa5
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000b16e8
+ (id)alloc;	// IMP=0x00600000000b16dc
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x00600000000b0c59
+ (void)initialize;	// IMP=0x00600000000b0c15
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000b0c0d
- (id)description;	// IMP=0x00000000000b23c7
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000b236e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b2363
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b22c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b1fb6
- (Class)classForCoder;	// IMP=0x00000000000b1f94
- (unsigned long long)hash;	// IMP=0x00000000000b1f4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b1e64
- (id)allKeys;	// IMP=0x00000000000b1e32
- (id *)keys;	// IMP=0x00000000000b1e21
- (unsigned long long)length;	// IMP=0x00000000000b1e10
- (unsigned long long)fastIndexForKnownKey:(id)arg1;	// IMP=0x00000000000b1aae
- (unsigned long long)indexForKey:(id)arg1;	// IMP=0x00000000000b1a27
- (void)dealloc;	// IMP=0x00000000000b1914
- (id)initForKeys:(id)arg1;	// IMP=0x00000000000b1820
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000b17c8
- (_Bool)_isDeallocating;	// IMP=0x00000000000b17a8
- (_Bool)_tryRetain;	// IMP=0x00000000000b176b
- (unsigned long long)retainCount;	// IMP=0x00000000000b1753
- (oneway void)release;	// IMP=0x00000000000b1715
- (id)retain;	// IMP=0x00000000000b16f4

@end

