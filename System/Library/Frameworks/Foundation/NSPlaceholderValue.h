//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSNumber.h"

__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber
{
    struct _NSZone *zoneForInstance;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000747925
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000747a0c
- (void)getValue:(void *)arg1;	// IMP=0x00000000007479aa
- (const char *)objCType;	// IMP=0x0000000000747945
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000074792d
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;	// IMP=0x0000000000747907
- (id)init;	// IMP=0x00000000007478ff
- (void)dealloc;	// IMP=0x00000000007478f9
- (_Bool)_tryRetain;	// IMP=0x00000000007478f1
- (_Bool)_isDeallocating;	// IMP=0x00000000007478e9
- (oneway void)release;	// IMP=0x00000000007478e3
- (unsigned long long)retainCount;	// IMP=0x00000000007478d6
- (id)retain;	// IMP=0x00000000007478cd
- (id)autorelease;	// IMP=0x00000000007478c4

@end

