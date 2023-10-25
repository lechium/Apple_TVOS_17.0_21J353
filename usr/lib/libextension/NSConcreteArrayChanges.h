//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArrayChanges.h"

__attribute__((visibility("hidden")))
@interface NSConcreteArrayChanges : NSArrayChanges
{
    CDStruct_29daef6c _changes;	// 8 = 0x8
}

- (void)applyChangesToArray:(id)arg1;	// IMP=0x00000000006da4b2
- (void)addChange:(id)arg1;	// IMP=0x00000000006da3da
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000006da385
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006da338
- (void)_enumerateChanges:(unsigned long long)arg1 stop:(_Bool *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000006da23f
- (unsigned long long)changeCount;	// IMP=0x00000000006da22d
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x00000000006da210
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000006da1f6
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000006da1dc
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006da1c8
- (unsigned long long)count;	// IMP=0x00000000006da1b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006da179
- (void)dealloc;	// IMP=0x00000000006da116
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000006da07e
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000006d9fe6
- (id)init;	// IMP=0x00000000006d9f4e

@end
