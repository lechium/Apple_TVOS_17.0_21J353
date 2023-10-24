//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICUserIdentity, NSString;

@interface ICDPrivacyPromptOperation : ICAsyncOperation
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    _Bool _hasInvokedCompletionHandler;	// 24 = 0x18
    _Bool _wasCancelled;	// 25 = 0x19
    NSString *_privacyIdentifier;	// 32 = 0x20
    ICUserIdentity *_userIdentity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000ff92f
- (void)_didCompleteWithPrivacyPromptStatus:(long long)arg1 error:(id)arg2;	// IMP=0x00100000000ff6a4
- (void)execute;	// IMP=0x00100000000ff4a2
- (void)cancel;	// IMP=0x00100000000ff462
@property(copy) CDUnknownBlockType completionHandler;
- (id)initWithPrivacyIdentifier:(id)arg1 identity:(id)arg2;	// IMP=0x00100000000ff2d2
- (id)initWithPrivacyIdentifier:(id)arg1;	// IMP=0x00100000000ff251

@end

