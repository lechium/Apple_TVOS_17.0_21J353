//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLLinkedFunctions.h"

__attribute__((visibility("hidden")))
@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions
{
    struct MTLLinkedFunctionsPrivate _private;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000011f335
+ (id)alloc;	// IMP=0x006000000011f32b
- (id)description;	// IMP=0x000000000011faf2
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000011f938
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011f870
- (unsigned long long)hash;	// IMP=0x000000000011f63b
- (_Bool)isEmpty;	// IMP=0x000000000011f60a
- (void)setGroups:(id)arg1;	// IMP=0x000000000011f5c3
- (id)groups;	// IMP=0x000000000011f5b1
- (void)setBinaryFunctions:(id)arg1;	// IMP=0x000000000011f56a
- (id)binaryFunctions;	// IMP=0x000000000011f558
- (void)setPrivateFunctions:(id)arg1;	// IMP=0x000000000011f511
- (id)privateFunctions;	// IMP=0x000000000011f4ff
- (void)setFunctions:(id)arg1;	// IMP=0x000000000011f4ba
- (id)functions;	// IMP=0x000000000011f4a9
- (void)dealloc;	// IMP=0x000000000011f443
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011f3a0

@end

