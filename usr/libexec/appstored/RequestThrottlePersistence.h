//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_source;

@interface RequestThrottlePersistence : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSMutableDictionary *_records;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000015b2ee

@end

