//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface HMDCloudChangeTree : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_objects;	// 16 = 0x10
    NSMapTable *_objectMap;	// 24 = 0x18
    NSMapTable *_recordMap;	// 32 = 0x20
    NSMapTable *_branchMap;	// 40 = 0x28
    NSSet *_validRootUUIDs;	// 48 = 0x30
}

+ (_Bool)modelTypeCanBeOrphaned:(id)arg1;	// IMP=0x00600000002656ed
+ (id)logCategory;	// IMP=0x00600000002656bd
+ (id)shortDescription;	// IMP=0x00600000002656ab
- (void).cxx_destruct;	// IMP=0x0000000000265647
@property(retain, nonatomic) NSSet *validRootUUIDs; // @synthesize validRootUUIDs=_validRootUUIDs;
@property(retain, nonatomic) NSMapTable *branchMap; // @synthesize branchMap=_branchMap;
@property(retain, nonatomic) NSMapTable *recordMap; // @synthesize recordMap=_recordMap;
@property(retain, nonatomic) NSMapTable *objectMap; // @synthesize objectMap=_objectMap;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) _Bool hasValidChanges;
- (id)recordMapWithFilter:(id)arg1;	// IMP=0x00000000002651c7
@property(readonly, nonatomic) NSMutableArray *invalidCloudChanges;
@property(readonly, nonatomic) NSMutableArray *cloudChanges;
@property(readonly, nonatomic) NSArray *orphans;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *objectsWithPotentialChanges;
- (void)findAndMarkOrphanedBranches;	// IMP=0x0000000000264508
- (void)findAndDeletedChildren;	// IMP=0x00000000002642e8
- (void)updateNode:(id)arg1 withCloudRecord:(id)arg2;	// IMP=0x000000000026421f
- (void)updateChange:(id)arg1;	// IMP=0x0000000000264023
- (void)updateModel:(id)arg1;	// IMP=0x0000000000263e2b
- (void)updateRecordMapping:(id)arg1;	// IMP=0x0000000000263be4
- (void)removeNode:(id)arg1;	// IMP=0x00000000002638d6
- (void)_addNode:(id)arg1;	// IMP=0x0000000000263843
- (void)_updateNode:(id)arg1 oldRecordName:(id)arg2;	// IMP=0x0000000000263098
- (id)_findNodeWithRecordMapping:(id)arg1;	// IMP=0x0000000000262fa4
- (id)objectForRecordName:(id)arg1;	// IMP=0x0000000000262f23
- (id)_objectForRecordName:(id)arg1;	// IMP=0x0000000000262e9a
- (id)objectForUUID:(id)arg1;	// IMP=0x0000000000262e19
- (id)_objectForUUID:(id)arg1;	// IMP=0x0000000000262d90
- (void)logChangeTreeWithIndent:(id)arg1;	// IMP=0x0000000000262a51
- (id)description;	// IMP=0x00000000002629e5
- (id)shortDescription;	// IMP=0x0000000000262971
- (id)initWithRootUUIDs:(id)arg1;	// IMP=0x00000000002627ca
- (id)init;	// IMP=0x0000000000262722

@end

