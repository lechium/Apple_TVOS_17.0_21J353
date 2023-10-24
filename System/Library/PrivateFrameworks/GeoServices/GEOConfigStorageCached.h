//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol GEOConfigStorageReadOnly;

__attribute__((visibility("hidden")))
@interface GEOConfigStorageCached : NSObject
{
    long long _source;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    struct os_unfair_recursive_lock_s _cacheLock;	// 24 = 0x18
    struct atomic_flag _isResyncing;	// 32 = 0x20
    NSDictionary *_cachedValues;	// 40 = 0x28
    id <GEOConfigStorageReadOnly> _direct;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000031c257
- (void)resync;	// IMP=0x000000000031c191
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(_Bool)arg4;	// IMP=0x000000000031c0fd
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long *)arg4;	// IMP=0x000000000031be98
- (id)initForSource:(long long)arg1;	// IMP=0x000000000031bbe8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

