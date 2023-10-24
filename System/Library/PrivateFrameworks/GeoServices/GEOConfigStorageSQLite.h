//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOConfigStorageSQLite
{
}

- (id)getAllExpiringKeys;	// IMP=0x00000000011c85fc
- (void)clearConfigKeyExpiry:(id)arg1;	// IMP=0x00000000011c85e5
- (void)setConfigKeyExpiry:(id)arg1 date:(id)arg2 osVersion:(id)arg3;	// IMP=0x00000000011c8433
- (_Bool)getConfigKeyExpiry:(id)arg1 date:(id *)arg2 osVersion:(id *)arg3;	// IMP=0x00000000011c831d
- (_Bool)getConfigKeyIsExpired:(id)arg1;	// IMP=0x00000000011c82d9
- (id)_getExpiringKeyForKey:(id)arg1;	// IMP=0x00000000011c8227
- (void)_instanceSpecificSetValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000011c8211
- (id)_instanceSpecificGetKeyPath:(id)arg1;	// IMP=0x00000000011c81fb
- (id)_instanceSpecificGetKey:(id)arg1;	// IMP=0x00000000011c81e5

@end

