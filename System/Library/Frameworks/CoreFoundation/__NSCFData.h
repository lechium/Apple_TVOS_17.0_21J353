//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableData.h"

__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData
{
    unsigned long long _cfinfoa;	// 8 = 0x8
    long long _length;	// 16 = 0x10
    long long _capacity;	// 24 = 0x18
    struct __CFAllocator *_bytesDeallocator;	// 32 = 0x20
    char *_bytes;	// 40 = 0x28
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000064d24
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000064d0c
- (Class)classForCoder;	// IMP=0x0000000000064dd6
- (_Bool)_providesConcreteBacking;	// IMP=0x0000000000064dd3
- (void)setLength:(unsigned long long)arg1;	// IMP=0x0000000000064dcb
- (void *)mutableBytes;	// IMP=0x0000000000064dc6
- (const void *)bytes;	// IMP=0x0000000000064dc1
- (unsigned long long)length;	// IMP=0x0000000000064dbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000064d27
- (unsigned long long)retainCount;	// IMP=0x0000000000064d07
- (_Bool)_isDeallocating;	// IMP=0x0000000000064cf7
- (_Bool)_tryRetain;	// IMP=0x0000000000064ce6
- (oneway void)release;	// IMP=0x0000000000064ce1
- (id)retain;	// IMP=0x0000000000064cdc
- (unsigned long long)hash;	// IMP=0x0000000000064cd7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064cb4

@end

