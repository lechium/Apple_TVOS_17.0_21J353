//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCPhysicalInputElementCollection.h"

@class NSArray, Protocol;

__attribute__((visibility("hidden")))
@interface _GCPhysicalInputFilteredElementCollection : GCPhysicalInputElementCollection
{
    GCPhysicalInputElementCollection *_backingCollection;	// 8 = 0x8
    Protocol *_filter;	// 16 = 0x10
    NSArray *_cached_filteredElements;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a81f
- (id)elementEnumerator;	// IMP=0x000000000000a7fd
- (id)elementForAlias:(id)arg1;	// IMP=0x000000000000a793
- (id)elementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000a764
- (unsigned long long)count;	// IMP=0x000000000000a742

@end

