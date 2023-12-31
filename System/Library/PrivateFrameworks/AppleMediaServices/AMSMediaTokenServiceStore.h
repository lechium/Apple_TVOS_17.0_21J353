//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMediaToken, AMSMediaTokenServiceKeychainStore, NSString;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceStore : NSObject
{
    _Bool _usingAccessControlIdentifier;	// 8 = 0x8
    struct os_unfair_lock_s _accessLock;	// 12 = 0xc
    NSString *_clientIdentifier;	// 16 = 0x10
    NSString *_keychainAccessGroup;	// 24 = 0x18
    AMSMediaToken *_memoryMediaToken;	// 32 = 0x20
    AMSMediaTokenServiceKeychainStore *_keychainStore;	// 40 = 0x28
    NSString *_notificationObject;	// 48 = 0x30
}

+ (_Bool)_hasAppleGroupEnabled;	// IMP=0x00600000002df77b
- (void).cxx_destruct;	// IMP=0x00000000002e0278
@property(readonly, nonatomic) NSString *notificationObject; // @synthesize notificationObject=_notificationObject;
@property(readonly, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore; // @synthesize keychainStore=_keychainStore;
@property(retain, nonatomic) AMSMediaToken *memoryMediaToken; // @synthesize memoryMediaToken=_memoryMediaToken;
@property(readonly, nonatomic) struct os_unfair_lock_s accessLock; // @synthesize accessLock=_accessLock;
@property(readonly, nonatomic) _Bool usingAccessControlIdentifier; // @synthesize usingAccessControlIdentifier=_usingAccessControlIdentifier;
@property(copy, nonatomic) NSString *keychainAccessGroup; // @synthesize keychainAccessGroup=_keychainAccessGroup;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)_teardownKeychainNotifications;	// IMP=0x00000000002e01a5
- (void)_setupKeychainNotifications;	// IMP=0x00000000002e0110
- (void)_mediaTokenChanged:(id)arg1;	// IMP=0x00000000002dff3b
- (id)_mediaTokenChangedNotificationName;	// IMP=0x00000000002dfe93
- (void)_deleteMediaTokenFromUserDefaultsIfPresent;	// IMP=0x00000000002dfc00
- (id)_mediaTokenFromUserDefaults;	// IMP=0x00000000002df84c
- (id)_keychainAccessGroup;	// IMP=0x00000000002df83e
- (void)dealloc;	// IMP=0x00000000002df73d
- (void)deleteToken;	// IMP=0x00000000002df50a
- (void)storeToken:(id)arg1;	// IMP=0x00000000002df2da
- (id)retrieveToken;	// IMP=0x00000000002df215
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 usingAccessControlIdentifier:(_Bool)arg3;	// IMP=0x00000000002defc5
- (id)initWithClientIdentifier:(id)arg1 keychainStore:(id)arg2;	// IMP=0x00000000002deea3
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2;	// IMP=0x00000000002dedb2

@end

