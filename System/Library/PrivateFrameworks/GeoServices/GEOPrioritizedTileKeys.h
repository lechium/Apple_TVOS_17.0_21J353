//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPrioritizedTileKeys : NSObject
{
    void *_keysAndPriorities;	// 8 = 0x8
}

- (void)removeKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000001486bca
- (_Bool)popHighestPriorityKey:(struct _GEOTileKey *)arg1 priority:(unsigned int *)arg2;	// IMP=0x0000000001486b34
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned int highestPriority;
- (void)setPriority:(unsigned int)arg1 forKey:(const struct _GEOTileKey *)arg2;	// IMP=0x00000000014868f2
- (void)dealloc;	// IMP=0x000000000148689b
- (id)initWithKeys:(id)arg1 priorities:(id)arg2;	// IMP=0x00000000014862fa
- (id)init;	// IMP=0x0000000001486284

@end

