//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, PBSystemGestureTableEntry;

@interface PBSystemGestureTable : NSObject
{
    NSMutableDictionary *_entriesByDescriptor;	// 8 = 0x8
    NSMapTable *_descriptorsByGestureRecognizer;	// 16 = 0x10
    NSMapTable *_handlesBySystemGestureRecipes;	// 24 = 0x18
    PBSystemGestureTableEntry *_indirectRecipesEntry;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000e778a
@property(readonly, nonatomic) PBSystemGestureTableEntry *indirectRecipesEntry; // @synthesize indirectRecipesEntry=_indirectRecipesEntry;
@property(readonly, nonatomic) NSMapTable *handlesBySystemGestureRecipes; // @synthesize handlesBySystemGestureRecipes=_handlesBySystemGestureRecipes;
@property(readonly, nonatomic) NSMapTable *descriptorsByGestureRecognizer; // @synthesize descriptorsByGestureRecognizer=_descriptorsByGestureRecognizer;
@property(readonly, nonatomic) NSMutableDictionary *entriesByDescriptor; // @synthesize entriesByDescriptor=_entriesByDescriptor;
- (id)_deferringTargetHandleForTargetSystemGestureTypes:(id)arg1 withSelectionPolicy:(id)arg2 deferringPolicy:(id)arg3;	// IMP=0x00100000000e7593
- (id)_activeHandleForSystemGestureRecipe:(id)arg1;	// IMP=0x00100000000e7444
- (id)_resultsByEnumeratingEntriesForSystemGestureRecipe:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e72d4
- (void)_enumerateEntriesForSystemGestureRecipe:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7081
- (void)_removeEntryForGestureRecognizerDescriptor:(id)arg1;	// IMP=0x00100000000e706a
- (id)_entryForGestureRecognizerDescriptor:(id)arg1;	// IMP=0x00100000000e6feb
- (id)stateDump;	// IMP=0x00100000000e6ea3
- (id)handleForGestureRecognizer:(id)arg1 withSelectionPolicy:(id)arg2 deferringPolicy:(id)arg3;	// IMP=0x00100000000e6be2
- (id)handleForGestureRecognizer:(id)arg1 withSelectionPolicy:(id)arg2;	// IMP=0x00100000000e6bbc
- (id)removeHandle:(id)arg1 forSystemGestureRecipe:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00100000000e698f
- (id)deactivateSystemGestureForDescriptor:(id)arg1;	// IMP=0x00100000000e68bc
- (id)activateSystemGestureForDescriptor:(id)arg1;	// IMP=0x00100000000e67e9
- (id)recipesForGestureRecognizers:(id)arg1 withSelectionPolicy:(id)arg2;	// IMP=0x00100000000e64ed
- (void)setGestureRecognizer:(id)arg1 forGestureRecognizerDescriptor:(id)arg2;	// IMP=0x00100000000e6449
- (id)existingGestureRecognizerMatchingDescriptor:(id)arg1;	// IMP=0x00100000000e63f8
- (void)setInactiveHandle:(id)arg1 forSystemGestureRecipe:(id)arg2;	// IMP=0x00100000000e632d
- (id)existingHandleForSystemGestureRecipe:(id)arg1;	// IMP=0x00100000000e6306
- (id)gestureRecognizers;	// IMP=0x00100000000e6194
- (void)enumerateGestureRecognizersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e606c
- (id)init;	// IMP=0x00100000000e5f69

@end
