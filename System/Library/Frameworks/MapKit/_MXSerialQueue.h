//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _MXSerialQueue : NSObject
{
    NSObject<OS_dispatch_group> *_previousTaskGroup;	// 8 = 0x8
}

+ (id)taskQueue;	// IMP=0x00600000001cd417
+ (id)taskCompletionQueue;	// IMP=0x00600000001cd396
+ (id)taskInsertionQueue;	// IMP=0x00600000001cd315
- (void).cxx_destruct;	// IMP=0x00000000001cd7ee
- (void)addTask:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cd428
- (id)init;	// IMP=0x00000000001cd2c6

@end

