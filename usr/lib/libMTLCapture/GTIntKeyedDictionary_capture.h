//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTIntKeyedDictionary_capture : NSObject
{
    void *_private;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000354a
- (id)allKeys;	// IMP=0x0000000000002a89
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000002a55
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000002a21
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000029de
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002997
- (void)removeObjectForIntKey:(long long)arg1;	// IMP=0x0000000000002954
- (id)objectForIntKey:(long long)arg1;	// IMP=0x0000000000002929
- (void)setObject:(id)arg1 forIntKey:(long long)arg2;	// IMP=0x00000000000028b3
- (void)removeAllObjects;	// IMP=0x0000000000002885
- (unsigned long long)count;	// IMP=0x0000000000002877
- (void)dealloc;	// IMP=0x00000000000027fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002744
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002602
- (id)initWithIntKeyedDictionary:(id)arg1;	// IMP=0x0000000000002574
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000024e0
- (id)init;	// IMP=0x00000000000024cc

@end

