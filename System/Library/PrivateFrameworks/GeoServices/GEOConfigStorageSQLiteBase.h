//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOConfigPersistence, NSString;

__attribute__((visibility("hidden")))
@interface GEOConfigStorageSQLiteBase : NSObject
{
    long long _source;	// 8 = 0x8
    GEOConfigPersistence *_persister;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011c81d5
- (id)_instanceSpecificGetKeyPath:(id)arg1;	// IMP=0x00000000011c81bd
- (id)_instanceSpecificGetKey:(id)arg1;	// IMP=0x00000000011c81a5
- (void)_instanceSpecificSetValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000011c8190
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(_Bool)arg4;	// IMP=0x00000000011c817e
- (void)resync;	// IMP=0x00000000011c8178
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long *)arg4;	// IMP=0x00000000011c8088

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

