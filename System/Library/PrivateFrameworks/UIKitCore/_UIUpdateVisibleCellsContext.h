//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIUpdateVisibleCellsContext : NSObject
{
    NSMutableArray *_sizes;	// 8 = 0x8
    NSMutableArray *_attributes;	// 16 = 0x10
    NSMutableArray *_indexPaths;	// 24 = 0x18
    NSMutableIndexSet *_sectionIndexes;	// 32 = 0x20
    long long _visibleCellsRefCount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000040fbcb
- (id)description;	// IMP=0x000000000040f95c
- (id)init;	// IMP=0x000000000040f679

@end

