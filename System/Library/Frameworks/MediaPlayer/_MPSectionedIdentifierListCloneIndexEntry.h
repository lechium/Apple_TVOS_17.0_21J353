//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedIdentifierListItemEntry, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject
{
    MPSectionedIdentifierListItemEntry *_rootEntry;	// 8 = 0x8
    NSMutableSet *_clonedEntries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000244119
@property(retain, nonatomic) NSMutableSet *clonedEntries; // @synthesize clonedEntries=_clonedEntries;
@property(retain, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry; // @synthesize rootEntry=_rootEntry;
- (id)init;	// IMP=0x000000000024407d

@end

