//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheGroup, NSArray;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheDeleteRecordOperation
{
    HMDBackingStoreCacheGroup *_group;	// 8 = 0x8
    NSArray *_recordNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000226c7e
@property(retain, nonatomic) NSArray *recordNames; // @synthesize recordNames=_recordNames;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (id)mainReturningError;	// IMP=0x0000000000226802
- (id)initWithGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000022674c

@end

