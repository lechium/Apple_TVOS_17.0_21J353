//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLIntersectionFunctionTableDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLIntersectionFunctionTableDescriptorInternal : MTLIntersectionFunctionTableDescriptor
{
    struct MTLIntersectionFunctionTableDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000a93cb
+ (id)alloc;	// IMP=0x00600000000a93c1
- (id)description;	// IMP=0x00000000000a972a
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000a95b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a954d
- (unsigned long long)hash;	// IMP=0x00000000000a9508
- (void)setResourceIndex:(unsigned long long)arg1;	// IMP=0x00000000000a94f6
- (unsigned long long)resourceIndex;	// IMP=0x00000000000a94e4
- (void)setForceResourceIndex:(_Bool)arg1;	// IMP=0x00000000000a94d3
- (_Bool)forceResourceIndex;	// IMP=0x00000000000a94c2
- (void)setFunctionCount:(unsigned long long)arg1;	// IMP=0x00000000000a94b1
- (unsigned long long)functionCount;	// IMP=0x00000000000a94a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a9436

@end
