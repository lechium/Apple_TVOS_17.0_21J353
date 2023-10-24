//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPersistentStore, HMMDateProvider, NSMutableDictionary, NSObject, NSString;
@protocol HMDTimeBasedFlagsStoring, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagsManager : HMFObject
{
    HMDPersistentStore *_persistentStore;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    HMMDateProvider *_dateProvider;	// 24 = 0x18
    NSMutableDictionary *_flags;	// 32 = 0x20
    id <HMDTimeBasedFlagsStoring> _flagsStorage;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)allowedSpecifierClasses;	// IMP=0x00100000000b663e
- (void).cxx_destruct;	// IMP=0x00000000000b63c4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMDTimeBasedFlagsStoring> flagsStorage; // @synthesize flagsStorage=_flagsStorage;
@property(retain, nonatomic) NSMutableDictionary *flags; // @synthesize flags=_flags;
@property(retain) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
- (id)unarchiveLegacyFlags;	// IMP=0x00000000000b5d81
- (id)unarchiveFlags;	// IMP=0x00000000000b5b20
- (void)_save;	// IMP=0x00000000000b5a4e
- (id)_fetchAllFlags;	// IMP=0x00000000000b5976
- (void)forceSave;	// IMP=0x00000000000b5929
- (void)flagChanged;	// IMP=0x00000000000b5917
- (id)newFlagForPeriodicity:(long long)arg1;	// IMP=0x00000000000b58a7
- (id)flagForSpecifier:(id)arg1 periodicity:(long long)arg2;	// IMP=0x00000000000b56ce
- (id)flagForName:(id)arg1 homeUUID:(id)arg2 periodicity:(long long)arg3;	// IMP=0x00000000000b5663
- (id)flagForName:(id)arg1 periodicity:(long long)arg2;	// IMP=0x00000000000b55f8
- (id)initWithStorage:(id)arg1 dateProvider:(id)arg2;	// IMP=0x00000000000b5488
- (id)initWithDateProvider:(id)arg1;	// IMP=0x00000000000b53d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
