//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreLocal, HMDHomeManager, NSMapTable, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreSingleton : HMFObject
{
    NSMapTable *_objectLookup;	// 8 = 0x8
    NSMapTable *_classToNameTransform;	// 16 = 0x10
    NSMapTable *_nameToClassTransform;	// 24 = 0x18
    NSMapTable *_objectPropertyHashLookup;	// 32 = 0x20
    HMDHomeManager *_homeManager;	// 40 = 0x28
    HMDBackingStoreLocal *_local;	// 48 = 0x30
    NSOperationQueue *_queue;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000ae4bc1
+ (void)resetSchemaHash;	// IMP=0x0010000000ae4bbb
+ (void)resetClassMappings;	// IMP=0x0010000000ae4bb5
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;	// IMP=0x0010000000ae4baf
+ (id)sharedInstance;	// IMP=0x0010000000ae4ba7
+ (void)start;	// IMP=0x0010000000ae4a8f
+ (id)dataVersion;	// IMP=0x0010000000ae4a76
- (void).cxx_destruct;	// IMP=0x0000000000ae49f2
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSMapTable *objectPropertyHashLookup; // @synthesize objectPropertyHashLookup=_objectPropertyHashLookup;
@property(readonly, nonatomic) NSMapTable *nameToClassTransform; // @synthesize nameToClassTransform=_nameToClassTransform;
@property(readonly, nonatomic) NSMapTable *classToNameTransform; // @synthesize classToNameTransform=_classToNameTransform;
@property(readonly, nonatomic) NSMapTable *objectLookup; // @synthesize objectLookup=_objectLookup;
- (id)logIdentifier;	// IMP=0x0000000000ae4952
- (void)setHomeManager:(id)arg1;	// IMP=0x0000000000ae4823
- (id)resetBackingStore;	// IMP=0x0000000000ae4709
- (id)flushBackingStore;	// IMP=0x0000000000ae45ef
- (id)schemaHashForObject:(id)arg1;	// IMP=0x0000000000ae449e
- (id)init;	// IMP=0x0000000000ae4254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

