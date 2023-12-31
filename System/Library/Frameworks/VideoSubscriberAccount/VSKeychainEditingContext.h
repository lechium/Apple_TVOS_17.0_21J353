//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSUndoManager, VSKeychainStore;

__attribute__((visibility("hidden")))
@interface VSKeychainEditingContext : NSObject
{
    VSKeychainStore *_keychainStore;	// 8 = 0x8
    NSUndoManager *_undoManager;	// 16 = 0x10
    NSMutableSet *_items;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007b506
@property(retain, nonatomic) NSMutableSet *items; // @synthesize items=_items;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) VSKeychainStore *keychainStore; // @synthesize keychainStore=_keychainStore;
- (_Bool)save:(id *)arg1;	// IMP=0x0000000000079d83
@property(readonly, nonatomic) NSSet *registeredItems;
@property(readonly, nonatomic) NSSet *updatedItems;
@property(readonly, nonatomic) NSSet *deletedItems;
@property(readonly, nonatomic) NSSet *insertedItems;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1;	// IMP=0x0000000000079b8d
- (void)deleteItem:(id)arg1;	// IMP=0x0000000000079af4
- (void)insertItem:(id)arg1;	// IMP=0x0000000000079950
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079104
- (void)fulfillFault:(id)arg1;	// IMP=0x0000000000078d74
- (void)_populateErrors:(id)arg1 withError:(id)arg2 affectingItem:(id)arg3;	// IMP=0x0000000000078c3c
- (id)_deleteQueryForItemValues:(id)arg1 withItemKind:(id)arg2;	// IMP=0x0000000000078910
- (id)_queryForItemValues:(id)arg1 withItemKind:(id)arg2;	// IMP=0x00000000000786c2
- (void)_populateResult:(id)arg1 forRequest:(id)arg2 fromMatch:(id)arg3;	// IMP=0x0000000000078344
- (id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2;	// IMP=0x0000000000078003
- (void)_populateQuery:(struct __CFDictionary *)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3;	// IMP=0x000000000007760c
- (id)init;	// IMP=0x00000000000775b6

@end

