//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKReminderStore;

__attribute__((visibility("hidden")))
@interface EKReminderFetchRequestToken : NSObject
{
    EKReminderStore *_reminderStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001a83a
@property(readonly, nonatomic) __weak EKReminderStore *reminderStore; // @synthesize reminderStore=_reminderStore;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a819
- (void)cancel;	// IMP=0x000000000001a7c0
- (id)initWithReminderStore:(id)arg1;	// IMP=0x000000000001a75c

@end
