//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LSInstallProgressList : NSObject
{
    NSMutableDictionary *_progresses;	// 8 = 0x8
    NSMutableDictionary *_subscriptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015ad67
- (id)description;	// IMP=0x000000000015ad3a
- (void)removeProgressForBundleID:(id)arg1;	// IMP=0x000000000015ac61
- (void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2;	// IMP=0x000000000015a9d9
- (id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2;	// IMP=0x000000000015a932
- (void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3;	// IMP=0x000000000015a7a3
- (void)setProgress:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000000015a6ac
- (id)progressForBundleID:(id)arg1;	// IMP=0x000000000015a5e0
- (id)init;	// IMP=0x000000000015a53f

@end

