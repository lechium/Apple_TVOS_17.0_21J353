//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log, UMSideEffectsProviding;

@interface UMGenerationCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSString *_notification;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSObject<UMSideEffectsProviding> *_se;	// 40 = 0x28
    CDUnknownBlockType _fetcher;	// 48 = 0x30
    unsigned long long _cachedValue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000001f59

@end

