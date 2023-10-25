//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSetChanges.h"

__attribute__((visibility("hidden")))
@interface NSConcreteOrderedSetChanges : NSOrderedSetChanges
{
    CDStruct_29daef6c _changes;	// 8 = 0x8
}

- (void)addChange:(id)arg1;	// IMP=0x00000000006fce70
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000006fce1b
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006fcdce
- (void)_enumerateChanges:(unsigned long long)arg1 stop:(_Bool *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000006fccd5
- (unsigned long long)changeCount;	// IMP=0x00000000006fccc3
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x00000000006fcca6
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000006fcc8c
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000006fcc72
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006fcc5e
- (unsigned long long)count;	// IMP=0x00000000006fcc4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006fcc0f
- (void)dealloc;	// IMP=0x00000000006fcbac
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006fcb14
- (id)init;	// IMP=0x00000000006fca82

@end
