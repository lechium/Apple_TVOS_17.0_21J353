//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSArrayI : NSArray
{
    struct {
        unsigned long long used;
        id list[0];
    } storage;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000001509ab
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000150412
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000150b77
- (id)mutableCopy;	// IMP=0x0000000000150b5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000150b59
- (id)copy;	// IMP=0x0000000000150b54
- (void)dealloc;	// IMP=0x0000000000150ac7
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000001507d9
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001505c8
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000150415
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000015004a
- (id)nothingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000150047
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000150020
- (unsigned long long)count;	// IMP=0x0000000000150014

@end

