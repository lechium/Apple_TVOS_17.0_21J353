//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface SDUnlockSecurityManager : NSObject
{
    NSData *_localLongTermKey;	// 8 = 0x8
    NSData *_remoteLongTermKey;	// 16 = 0x10
    NSString *_keybagUUID;	// 24 = 0x18
    NSString *_keyDeviceID;	// 32 = 0x20
    NSString *_pairingID;	// 40 = 0x28
    NSString *_pairingStorePath;	// 48 = 0x30
    NSString *_deviceName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000112f57
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSString *pairingStorePath; // @synthesize pairingStorePath=_pairingStorePath;
@property(copy) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain) NSString *keyDeviceID; // @synthesize keyDeviceID=_keyDeviceID;
@property(retain, nonatomic) NSString *keybagUUID; // @synthesize keybagUUID=_keybagUUID;
@property(retain, nonatomic) NSData *remoteLongTermKey; // @synthesize remoteLongTermKey=_remoteLongTermKey;
@property(retain, nonatomic) NSData *localLongTermKey; // @synthesize localLongTermKey=_localLongTermKey;
- (void)deleteLegacyEscrowData;	// IMP=0x0010000000112da5
- (void)migrateEscrowDataIfNeeded;	// IMP=0x0010000000112cb7
- (_Bool)checkForLegacyEscrowData;	// IMP=0x0010000000112ae8
- (id)legacyEscrowData;	// IMP=0x00100000001129ef
- (id)baseDictionary;	// IMP=0x0010000000112912
- (id)allKeychainItems;	// IMP=0x00100000001127d7
- (void)deleteEscrowData;	// IMP=0x0010000000112747
- (_Bool)checkForEscrowData;	// IMP=0x00100000001124dd
- (id)escrowData;	// IMP=0x00100000001123f5
- (_Bool)storeEscrowData:(id)arg1;	// IMP=0x00100000001120f8
- (void)resetEscrowRecord;	// IMP=0x00100000001120f2
- (void)clearStateForSession:(long long)arg1;	// IMP=0x00100000001120ec
- (_Bool)confirmUnlockWithAuthSession:(long long)arg1;	// IMP=0x00100000001120e4
- (id)escrowSecretWithAuthSession:(long long)arg1;	// IMP=0x00100000001120dc
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(_Bool)arg3 errorCode:(long long *)arg4;	// IMP=0x00100000001120d4
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(_Bool)arg3;	// IMP=0x00100000001120bf
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2;	// IMP=0x00100000001120aa
- (_Bool)setupWithAuthSession:(long long)arg1 passcode:(id)arg2;	// IMP=0x00100000001120a2
- (long long)authSessionWithFlags:(unsigned int)arg1 secret:(id)arg2 errorCode:(int *)arg3;	// IMP=0x0010000000112095
- (long long)authSessionWithFlags:(unsigned int)arg1 secret:(id)arg2;	// IMP=0x0010000000112080
- (long long)stashBagSessionAsOriginator:(_Bool)arg1 escrowSecret:(id)arg2 manifest:(id)arg3;	// IMP=0x0010000000112073
- (long long)unlockSessionAsOriginator:(_Bool)arg1 usingEscrow:(_Bool)arg2 escrowSecret:(id)arg3 errorCode:(int *)arg4;	// IMP=0x0010000000112066
- (long long)unlockSessionAsOriginator:(_Bool)arg1 usingEscrow:(_Bool)arg2 escrowSecret:(id)arg3;	// IMP=0x0010000000112051
- (long long)escrowCreationSessionAsOriginator:(_Bool)arg1 errorCode:(int *)arg2;	// IMP=0x0010000000112044
- (void)migrateOldKeysIfNeeded;	// IMP=0x0010000000111e6e
- (id)legacyLocalLongTermKey;	// IMP=0x0010000000111e10
- (id)legacyRemoteLongTermKey;	// IMP=0x0010000000111db2
@property(readonly) _Bool ltkFileExists;
- (id)longTermKeyStorageFilePath;	// IMP=0x0010000000111ad6
- (void)deletePersistedLongTermKeys;	// IMP=0x00100000001118ed
- (void)loadLongTermKeys;	// IMP=0x001000000011162f
- (void)saveLongTermKeys;	// IMP=0x00100000001111f4
- (void)checkForBackupExclusion:(id)arg1;	// IMP=0x001000000011112d
- (void)validateKeybagUUID;	// IMP=0x0010000000111023
- (void)deleteLongTermKeys;	// IMP=0x0010000000110e2d
- (void)updateLocalLongTermKey:(id)arg1 remoteLongTermKey:(id)arg2;	// IMP=0x0010000000110cd5
- (id)signRemoteKey:(id)arg1 withLocalKey:(id)arg2 localKeyClass:(long long)arg3 remoteKeyClass:(long long)arg4;	// IMP=0x0010000000110ccd
- (id)generateLocalLongTermKey:(long long)arg1;	// IMP=0x0010000000110cc5
@property(readonly) _Bool ltksExist;
- (unsigned int)lockState;	// IMP=0x0010000000110bf9
- (id)initWithPairingID:(id)arg1 pairingStorePath:(id)arg2 deviceName:(id)arg3;	// IMP=0x0010000000110b05

@end

