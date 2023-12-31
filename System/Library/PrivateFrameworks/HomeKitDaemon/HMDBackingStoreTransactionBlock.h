//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStore, HMDBackingStoreTransactionOptions, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreTransactionBlock : HMFObject
{
    _Bool _committed;	// 8 = 0x8
    HMDBackingStoreTransactionOptions *_options;	// 16 = 0x10
    HMDBackingStore *_backingStore;	// 24 = 0x18
    NSMutableArray *_objects;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000a17f21
+ (void)sort:(id)arg1;	// IMP=0x0010000000a17c28
- (void).cxx_destruct;	// IMP=0x0000000000a17ba0
@property(nonatomic) _Bool committed; // @synthesize committed=_committed;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) HMDBackingStoreTransactionOptions *options; // @synthesize options=_options;
- (id)logIdentifier;	// IMP=0x0000000000a17b10
- (void)dumpDebug;	// IMP=0x0000000000a17af7
- (void)dumpDebug:(id)arg1;	// IMP=0x0000000000a17ada
- (void)dumpWithVerbosity:(_Bool)arg1 prefix:(id)arg2 logType:(unsigned char)arg3;	// IMP=0x0000000000a176ee
@property(readonly, copy) NSString *description;
- (void)save;	// IMP=0x0000000000a1763a
- (void)save:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1758d
- (void)runWithoutSave:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1750b
- (void)run;	// IMP=0x0000000000a174f7
- (void)run:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a17481
- (void)addObjects:(id)arg1;	// IMP=0x0000000000a17355
- (void)add:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000000a16c8c
- (void)add:(id)arg1;	// IMP=0x0000000000a16c78
- (id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3;	// IMP=0x0000000000a16b5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

