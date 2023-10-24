//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface INExecutionCounterpartMapper : NSObject
{
    _Bool _filled;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSMutableDictionary *_mapping;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x006000000001b63a
- (void).cxx_destruct;	// IMP=0x000000000001b576
@property(readonly, nonatomic) struct os_unfair_lock_s _lock; // @synthesize _lock;
@property(readonly, nonatomic) _Bool _filled; // @synthesize _filled;
@property(readonly, copy, nonatomic) NSMutableDictionary *_mapping; // @synthesize _mapping;
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1;	// IMP=0x000000000001b548
- (id)counterpartIdentifiersForLocalIdentifier:(id)arg1;	// IMP=0x000000000001b4c7
- (id)localIdentifiersForCounterpartIdentifier:(id)arg1;	// IMP=0x000000000001adac
- (void)reset;	// IMP=0x000000000001ad09
- (void)installedApplicationsDidChange:(id)arg1;	// IMP=0x000000000001ac37
- (void)dealloc;	// IMP=0x000000000001ab9b
- (id)init;	// IMP=0x000000000001aab9

@end

