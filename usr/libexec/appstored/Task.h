//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class KeepAlive, NSError, NSLock;

@interface Task : NSOperation
{
    KeepAlive *_keepAlive;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000010ebed
- (void)unlock;	// IMP=0x001000000010ebbd
- (_Bool)runSubTask:(id)arg1 returningError:(id *)arg2;	// IMP=0x001000000010eabf
- (_Bool)runTaskReturningError:(id *)arg1;	// IMP=0x001000000010e8c1
- (void)lock;	// IMP=0x001000000010e8a4
- (void)completeWithSuccess;	// IMP=0x001000000010e83d
- (void)completeWithError:(id)arg1;	// IMP=0x001000000010e7ad
- (id)initWithoutKeepAlive;	// IMP=0x001000000010e750
- (id)init;	// IMP=0x001000000010e685

@end

