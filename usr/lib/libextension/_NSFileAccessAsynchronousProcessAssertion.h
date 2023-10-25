//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface _NSFileAccessAsynchronousProcessAssertion : NSObject
{
    int _pid;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    BKSProcessAssertion *_assertion;	// 24 = 0x18
}

@property(readonly) int PID; // @synthesize PID=_pid;
- (void)invalidate;	// IMP=0x000000000077a6ae
- (void)beginAssertion;	// IMP=0x000000000077a5a4
- (void)dealloc;	// IMP=0x000000000077a526
- (id)initWithPID:(int)arg1 name:(id)arg2;	// IMP=0x000000000077a4a1

@end
