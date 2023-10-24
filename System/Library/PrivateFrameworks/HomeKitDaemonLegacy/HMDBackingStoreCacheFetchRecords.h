//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheGroup, NSArray;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheFetchRecords
{
    _Bool _recursive;	// 8 = 0x8
    HMDBackingStoreCacheGroup *_group;	// 16 = 0x10
    CDUnknownBlockType _fetchResult;	// 24 = 0x18
    NSArray *_recordNames;	// 32 = 0x20
    NSArray *_uuids;	// 40 = 0x28
    NSArray *_parentUuids;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001fcaff
@property(retain, nonatomic) NSArray *parentUuids; // @synthesize parentUuids=_parentUuids;
@property(retain, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
@property(retain, nonatomic) NSArray *recordNames; // @synthesize recordNames=_recordNames;
@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property _Bool recursive; // @synthesize recursive=_recursive;
- (id)mainReturningError;	// IMP=0x00000000001fc481
- (id)initWithGroup:(id)arg1 records:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fc3a1
- (id)initWithGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fc2c1
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fc1e1

@end

