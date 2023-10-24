//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMemoryHTTPCookie2Storage, NSPersistentHTTPCookie2Storage;
@protocol OS_dispatch_queue;

@interface NSHTTPCookie2Storage : NSObject
{
    NSPersistentHTTPCookie2Storage *persistentStore;	// 8 = 0x8
    NSMemoryHTTPCookie2Storage *memoryStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    CDUnknownBlockType _defaultNotificationHandler;	// 32 = 0x20
}

+ (id)sharedNSHTTPCookie2Storage;	// IMP=0x00600000001f13e4
- (void).cxx_destruct;	// IMP=0x00000000001ed79f
- (id)initWithIdentifyingData:(id)arg1;	// IMP=0x00000000001ed4f2
- (id)identifyingData;	// IMP=0x00000000001ed0b1
- (void)deleteCookiesWithFilter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ecffa
- (void)deleteAllCookiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ecf6d
- (void)deleteCookie:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ecd8e
- (void)getAllCookiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ecd01
- (void)getCookiesWithFilter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ecc4a
- (void)setCookies:(id)arg1 withFilter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ecb65
- (void)setCookie:(id)arg1 withFilter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001eca80
- (id)initInNSMemoryHTTPCookie2Storage;	// IMP=0x00000000001ec9dd
- (id)initWithPath:(id)arg1;	// IMP=0x00000000001ec8ef
- (id)init;	// IMP=0x00000000001ec832

@end

