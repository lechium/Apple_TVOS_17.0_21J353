//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSPairedDeviceKeychainSchema : NSObject
{
}

- (id)_migrateFromSinglePairedDeviceToMultipleWithKeychainDictionary:(id)arg1;	// IMP=0x004000000010eaaa
- (id)migrateKeychainDictionary:(id)arg1;	// IMP=0x001000000010e9d7
- (unsigned long long)_migrationTypeForKeychainDictionary:(id)arg1;	// IMP=0x001000000010e92e
- (_Bool)isMigrationRequiredForKeychainDictionary:(id)arg1;	// IMP=0x001000000010e915
- (id)_propertyDictionariesFromPairedDevices:(id)arg1;	// IMP=0x001000000010e746
- (id)keychainDictionaryWithPairedDevices:(id)arg1;	// IMP=0x001000000010e698

@end
