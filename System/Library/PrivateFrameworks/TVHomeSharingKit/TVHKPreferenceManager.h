//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSLock, NSMutableSet, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TVHKPreferenceManager : NSObject
{
    NSLock *_preferencesLock;	// 8 = 0x8
    NSTimer *_prefsSyncTimer;	// 16 = 0x10
    NSMutableSet *_notificationDomains;	// 24 = 0x18
    NSMutableSet *_dirtyDomains;	// 32 = 0x20
    NSCountedSet *_pendingNotifcations;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackDispatchQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0060000000091987
- (void).cxx_destruct;	// IMP=0x000000000009316c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackDispatchQueue; // @synthesize callbackDispatchQueue=_callbackDispatchQueue;
- (void)_postPrefsDidChangeForDomains:(id)arg1;	// IMP=0x0000000000092e41
- (void)_handleDistributedSyncForDomain:(id)arg1 notificationKey:(id)arg2;	// IMP=0x0000000000092ca8
- (void)_flushPreferences:(id)arg1;	// IMP=0x0000000000092ba8
- (void)_markPreferencesDirtyForDomain:(id)arg1;	// IMP=0x0000000000092a4e
- (id)_valueForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x00000000000928f3
- (void)_setValue:(id)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x000000000009277e
- (void)syncAllDomains;	// IMP=0x0000000000092702
- (void)_syncDomains:(id)arg1;	// IMP=0x000000000009240f
- (_Bool)syncDomain:(id)arg1;	// IMP=0x000000000009229d
- (void)enableDistributedSyncForDomain:(id)arg1;	// IMP=0x00000000000920d9
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x000000000009203f
- (_Bool)setBool:(_Bool)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000091f84
- (_Bool)setDouble:(double)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000091ec6
- (_Bool)setInteger:(int)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000091e0c
- (_Bool)setInt64:(long long)arg1 forKey:(id)arg2 forDomain:(id)arg3;	// IMP=0x0000000000091d52
- (_Bool)canSetPreferencesForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000091d3c
- (id)numberForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000091cd7
- (id)stringForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000091c72
- (_Bool)boolForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(_Bool)arg3;	// IMP=0x0000000000091c39
- (double)doubleForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(double)arg3;	// IMP=0x0000000000091bb6
- (int)integerForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(int)arg3;	// IMP=0x0000000000091b3c
- (long long)int64ForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(long long)arg3;	// IMP=0x0000000000091ac0
- (id)objectForKey:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000000091aae
- (id)init;	// IMP=0x00000000000919dc

@end

