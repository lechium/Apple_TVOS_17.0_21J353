//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NDCallbackQueueDelegate;

@interface NDCallbackQueue : NSObject
{
    NSMutableArray *_callbacks;	// 8 = 0x8
    id <NDCallbackQueueDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004b200
@property __weak id <NDCallbackQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)count;	// IMP=0x001000000004b1c3
- (void)drainCallbacksForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x001000000004aeda
- (void)performAllCallbacks;	// IMP=0x001000000004ad91
- (void)addPendingCallback:(id)arg1 wakeRequirement:(long long)arg2;	// IMP=0x001000000004acb8
- (void)addPendingCallbackToFront:(id)arg1;	// IMP=0x001000000004aca0
- (void)drainCallback:(id)arg1;	// IMP=0x001000000004a6e4
- (void)performCallback:(id)arg1;	// IMP=0x00100000000489b1
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000488f0

@end

