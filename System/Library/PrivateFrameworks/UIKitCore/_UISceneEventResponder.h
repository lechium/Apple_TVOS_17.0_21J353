//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UISceneEventResponse;

__attribute__((visibility("hidden")))
@interface _UISceneEventResponder : NSObject
{
    struct os_unfair_lock_s _sendLock;	// 8 = 0x8
    struct os_unfair_lock_s _dataLock;	// 12 = 0xc
    _UISceneEventResponse *_dataLock_first;	// 16 = 0x10
    _UISceneEventResponse *_dataLock_last;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000445682
- (void)enqueuePostSynchronizeResponse:(CDUnknownBlockType)arg1;	// IMP=0x000000000044553b
- (void)enqueuePostCommitResponse:(CDUnknownBlockType)arg1;	// IMP=0x000000000044522d
- (id)init;	// IMP=0x00000000004451c9

@end

