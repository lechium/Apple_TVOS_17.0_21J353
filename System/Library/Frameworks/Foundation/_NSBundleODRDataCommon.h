//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataCommon : NSObject
{
    NSMutableDictionary *_assetPackToURL;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSBundle *_bundle;	// 24 = 0x18
    long long _sandboxToken;	// 32 = 0x20
}

- (_Bool)assetPacksBecameUnavailable:(id)arg1 error:(id *)arg2;	// IMP=0x000000000070aa9a
- (_Bool)assetPacksBecameAvailable:(id)arg1 error:(id *)arg2;	// IMP=0x000000000070a5f1
- (void)dealloc;	// IMP=0x000000000070a56f
- (id)initWithBundle:(id)arg1;	// IMP=0x000000000070a4e1

@end

