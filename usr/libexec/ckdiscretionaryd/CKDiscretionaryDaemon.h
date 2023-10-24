//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CKDiscretionaryDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    Class _schedulerClass;	// 16 = 0x10
}

+ (void)setupSandbox;	// IMP=0x00400000000021bf
- (void).cxx_destruct;	// IMP=0x00100000000022c1
@property(retain, nonatomic) Class schedulerClass; // @synthesize schedulerClass=_schedulerClass;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)initWithSchedulerClass:(Class)arg1;	// IMP=0x00100000000021f3
- (id)initWithInSyncBubble:(_Bool)arg1;	// IMP=0x00100000000021c5
- (_Bool);	// IMP=0x0010000000003e55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
