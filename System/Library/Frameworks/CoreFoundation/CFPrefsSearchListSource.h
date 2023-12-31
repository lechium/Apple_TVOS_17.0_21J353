//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CFPrefsCloudSource, CFPrefsPlistSource;

__attribute__((visibility("hidden")))
@interface CFPrefsSearchListSource
{
    struct __CFDictionary *_keysToSources;	// 80 = 0x50
    struct __CFString *_identifier;	// 88 = 0x58
    struct __CFArray *_sourceList;	// 96 = 0x60
    struct __CFSet *_cloudKeys;	// 104 = 0x68
    struct __CFArray *_cloudPrefixKeys;	// 112 = 0x70
    CFPrefsPlistSource *_standardSetTarget;	// 120 = 0x78
    CFPrefsCloudSource *_cloudSetTarget;	// 128 = 0x80
    _Bool initialized;	// 136 = 0x88
}

- (void)dealloc;	// IMP=0x000000000015817f
- (struct __CFString *)copyOSLogDescription;	// IMP=0x0000000000158101
- (id)description;	// IMP=0x0000000000157ed5
- (struct __CFString *)domainIdentifier;	// IMP=0x0000000000157ec9
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary *)arg1 toDictionary:(struct __CFDictionary *)arg2;	// IMP=0x0000000000157c28
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString *)arg1 fromValue:(void *)arg2 toValue:(void *)arg3;	// IMP=0x0000000000157aee
- (struct __CFDictionary *)alreadylocked_copyDictionary;	// IMP=0x000000000015797d
- (long long)generationCount;	// IMP=0x0000000000157921
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString *)arg1 isRemote:(_Bool)arg2;	// IMP=0x00000000001577c0
- (id)createRequestNewContentMessageForDaemon:(int)arg1;	// IMP=0x0000000000156cd9
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;	// IMP=0x0000000000156aaf
- (struct __CFArray *)alreadylocked_copyKeyList;	// IMP=0x0000000000156833
- (_Bool)synchronize;	// IMP=0x000000000015682e
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000156749
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;	// IMP=0x0000000000155f72
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;	// IMP=0x000000000015562a
- (_Bool)isDirectModeEnabled;	// IMP=0x0000000000154e7b
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000154e63
- (void)unlock;	// IMP=0x0000000000154e62
- (void)lock;	// IMP=0x0000000000154e61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000154cb1
- (id)initWithIdentifier:(struct __CFString *)arg1 containingPreferences:(id)arg2;	// IMP=0x0000000000153feb

@end

