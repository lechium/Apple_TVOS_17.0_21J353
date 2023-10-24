//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CFPrefsPlistSource
{
    struct __CFString *userIdentifier;	// 80 = 0x50
    struct __CFString *domainIdentifier;	// 88 = 0x58
    struct __CFString *container;	// 96 = 0x60
    _Atomic struct __CFDictionary *_locallySetDict;	// 104 = 0x68
    _Atomic char *accessPath;	// 112 = 0x70
    _Atomic _Bool _isByHost;	// 120 = 0x78
    _Atomic _Bool _volatile;	// 121 = 0x79
    _Atomic _Bool _readonly;	// 122 = 0x7a
    _Atomic _Bool _avoidsDaemonCache;	// 123 = 0x7b
    _Atomic _Bool _restrictedAccess;	// 124 = 0x7c
    _Atomic _Bool _checkedInvalidHome;	// 125 = 0x7d
    _Atomic _Bool _lastWriteFailed;	// 126 = 0x7e
    _Atomic _Bool _observing;	// 127 = 0x7f
    _Atomic _Bool _byteCountLimitExceeded;	// 128 = 0x80
    _Atomic _Bool _directMode;	// 129 = 0x81
    _Atomic _Bool _disableBackup;	// 130 = 0x82
    _Atomic int _fileProtectionClass;	// 132 = 0x84
}

- (void)dealloc;	// IMP=0x00000000001ab006
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int *)arg2;	// IMP=0x00000000001aaee4
- (int)alreadylocked_updateObservingRemoteChanges;	// IMP=0x00000000001aae28
- (long long)generationCount;	// IMP=0x00000000001aaa7b
- (long long)alreadylocked_generationCount;	// IMP=0x00000000001aa701
- (_Bool)synchronize;	// IMP=0x00000000001aa6ca
- (void)alreadylocked_clearCache;	// IMP=0x00000000001aa63b
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;	// IMP=0x00000000001a90df
- (id)createRequestNewContentMessageForDaemon:(int)arg1;	// IMP=0x00000000001a8833
- (_Bool)isDirectModeEnabled;	// IMP=0x00000000001a6d05
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a6c50
- (_Bool)isVolatile;	// IMP=0x00000000001a6c04
- (id)createSynchronizeMessage;	// IMP=0x00000000001a65ad
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;	// IMP=0x00000000001a526a
- (struct __CFDictionary *)alreadylocked_copyDictionary;	// IMP=0x00000000001a4ddc
- (struct __CFArray *)alreadylocked_copyKeyList;	// IMP=0x00000000001a4a4f
- (void *)copyValueForKey:(struct __CFString *)arg1;	// IMP=0x00000000001a4a06
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;	// IMP=0x00000000001a445f
- (void)setDaemonCacheEnabled:(_Bool)arg1;	// IMP=0x00000000001a4451
- (void)setAccessRestricted:(_Bool)arg1;	// IMP=0x00000000001a4446
- (void)setFileProtectionClass:(int)arg1;	// IMP=0x00000000001a443b
- (void)setBackupDisabled:(_Bool)arg1;	// IMP=0x00000000001a4430
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;	// IMP=0x00000000001a4365
- (_Bool)isByHost;	// IMP=0x00000000001a4358
- (struct __CFString *)container;	// IMP=0x00000000001a434c
- (struct __CFString *)domainIdentifier;	// IMP=0x00000000001a4234
- (struct __CFString *)userIdentifier;	// IMP=0x00000000001a4171

@end
