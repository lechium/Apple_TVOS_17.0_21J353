//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLQueueNode;

__attribute__((visibility("hidden")))
@interface NSURLQueue : NSObject
{
    unsigned long long count;	// 8 = 0x8
    NSURLQueueNode *head;	// 16 = 0x10
    NSURLQueueNode *tail;	// 24 = 0x18
    id monitor;	// 32 = 0x20
    _Bool waitOnTake;	// 40 = 0x28
    _Bool _pad1;	// 41 = 0x29
    _Bool _pad2;	// 42 = 0x2a
    _Bool _pad3;	// 43 = 0x2b
}

+ (id)newNode;	// IMP=0x0060000000739b9a
- (void)setWaitOnTake:(_Bool)arg1;	// IMP=0x000000000073a025
- (_Bool)waitOnTake;	// IMP=0x000000000073a01c
- (unsigned long long)count;	// IMP=0x000000000073a012
- (_Bool)isEmpty;	// IMP=0x000000000073a004
- (long long)indexOf:(id)arg1;	// IMP=0x0000000000739f9b
- (void)clear;	// IMP=0x0000000000739f2b
- (_Bool)remove:(id)arg1;	// IMP=0x0000000000739e82
- (id)peekAt:(unsigned long long)arg1;	// IMP=0x0000000000739e2d
- (id)peek;	// IMP=0x0000000000739de7
- (id)take;	// IMP=0x0000000000739d42
- (void)put:(id)arg1;	// IMP=0x0000000000739c98
- (void)dealloc;	// IMP=0x0000000000739c2d
- (id)init;	// IMP=0x0000000000739bab

@end

